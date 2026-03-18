/*
 * XREFs of HUBID_BuildClassCompatibleID @ 0x1C00164E8
 * Callers:
 *     HUBID_BuildCompatibleID @ 0x1C0016730 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C000F8F4 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x1C0015CC4 (HUBID_AssignIDString.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildClassCompatibleID(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r14
  unsigned __int16 v9; // r15
  __int64 v10; // rax
  int result; // eax
  _BYTE *v12; // r8
  __int64 v13; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+40h] [rbp-C0h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v15;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  v6 = *(unsigned __int8 **)(a1 + 1992);
  if ( v6 )
  {
    v7 = v6[5];
    v8 = v6[6];
    v9 = v6[7];
  }
  else
  {
    v9 = 0;
    v8 = 0;
    v7 = 0;
  }
  if ( (*(_DWORD *)(a1 + 2448) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 2480);
    if ( *(_BYTE *)(v10 + 12) )
    {
      if ( *(_BYTE *)(v10 + 4) )
      {
        result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S");
        if ( result < 0 )
          return result;
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result < 0 )
          return result;
      }
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2480) + 4LL);
LABEL_17:
    if ( *v12 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S");
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    goto LABEL_20;
  }
  v13 = *(_QWORD *)(a1 + 2088);
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 26) )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\MS_COMP_%.8S&MS_SUBCOMP_%.8S", v13 + 18);
      if ( result < 0 )
        return result;
      result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
      if ( result < 0 )
        return result;
    }
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 2088) + 18LL);
    goto LABEL_17;
  }
LABEL_20:
  result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X&Prot_%02X", v7, v8, v9);
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
    if ( result >= 0 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X&SubClass_%02X", v7, v8);
      if ( result >= 0 )
      {
        result = HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        if ( result >= 0 )
        {
          result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\Class_%02X", v7);
          if ( result >= 0 )
            return HUBID_AssignIDString((const void **)&DestinationString, 2, a2, (__int64)a3);
        }
      }
    }
  }
  return result;
}

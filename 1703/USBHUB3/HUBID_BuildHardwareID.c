/*
 * XREFs of HUBID_BuildHardwareID @ 0x1C0017864
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0011EF8 (HUBPDO_ReturnDeviceConfigInfo.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006B3FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C0010674 (RtlUnicodeStringPrintf.c)
 *     HUBID_AssignIDString @ 0x1C0017420 (HUBID_AssignIDString.c)
 *     HUBID_GetUnknownId @ 0x1C00177E4 (HUBID_GetUnknownId.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 */

int __fastcall HUBID_BuildHardwareID(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _UNICODE_STRING *UnknownId; // rcx
  int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // r9
  unsigned int v10; // r15d
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  char v13; // al
  int result; // eax
  int v15; // [rsp+20h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-69h] BYREF
  char v18; // [rsp+50h] [rbp-59h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x800000;
  DestinationString.Buffer = (wchar_t *)&v18;
  if ( a3 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 1620) & 0x2002) == 0 )
  {
    UnknownId = (struct _UNICODE_STRING *)HUBID_GetUnknownId(a1);
    return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
  }
  v7 = *(_DWORD *)(a1 + 1616);
  if ( (v7 & 1) != 0 && (v7 & 2) == 0 && a2 )
  {
    UnknownId = (struct _UNICODE_STRING *)(a1 + 2104);
    return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
  }
  v8 = *(unsigned __int16 *)(a1 + 1982);
  v9 = *(unsigned __int16 *)(a1 + 1982);
  v10 = *(unsigned __int16 *)(a1 + 1980);
  v11 = *(unsigned __int16 *)(a1 + 1980);
  if ( *(_WORD *)(a1 + 1974) > 0x200u )
  {
    v15 = *(unsigned __int16 *)(a1 + 1984);
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%04X", v11, v9, v15);
  }
  else
  {
    v12 = *(_WORD *)(a1 + 1984);
    v17[4] = 0;
    v17[0] = (v12 >> 12) + 48;
    v17[1] = (HIBYTE(v12) & 0xF) + 48;
    v13 = *(_BYTE *)(a1 + 1984);
    v17[2] = ((unsigned __int8)v12 >> 4) + 48;
    v17[3] = (v13 & 0xF) + 48;
    result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X&REV_%S", v11, v9, v17);
  }
  if ( result >= 0 )
  {
    result = HUBID_AssignIDString((const void **)&DestinationString, 1, a2, (__int64)a3);
    if ( result >= 0 )
    {
      result = RtlUnicodeStringPrintf(&DestinationString, L"USB\\VID_%04X&PID_%04X", v10, v8);
      if ( result >= 0 )
      {
        UnknownId = &DestinationString;
        return HUBID_AssignIDString((const void **)UnknownId, 1, a2, (__int64)a3);
      }
    }
  }
  return result;
}

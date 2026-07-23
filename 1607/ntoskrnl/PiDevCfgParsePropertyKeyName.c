/*
 * XREFs of PiDevCfgParsePropertyKeyName @ 0x1401CEC6C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14010B264 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     PnpStringToDwordValue @ 0x1401CF320 (PnpStringToDwordValue.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 */

char __fastcall PiDevCfgParsePropertyKeyName(unsigned __int16 *a1, GUID *a2, _DWORD *a3)
{
  const wchar_t *v6; // rdi
  __int64 v7; // rbx
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  NTSTATUS v10; // edi
  char v11; // bl
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-58h] BYREF
  wchar_t pszDest[12]; // [rsp+30h] [rbp-48h] BYREF

  if ( *a1 < 0x50u )
    return 0;
  GuidString.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
  GuidString.MaximumLength = a1[1];
  GuidString.Length = 76;
  if ( RtlGUIDFromString(&GuidString, a2) < 0 )
    return 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 76LL) != 44 )
    return 0;
  v6 = (const wchar_t *)(*((_QWORD *)a1 + 1) + 78LL);
  v7 = (*a1 >> 1) - 39;
  if ( v6[v7] )
    return 0;
  v8 = wcschr(v6, 0x2Cu);
  v9 = v8;
  if ( v8 )
  {
    v7 = v8 - v6;
    v9 = v8 + 1;
  }
  v10 = RtlStringCchCopyNW(pszDest, 0xBuLL, v6, (unsigned int)v7);
  if ( v10 < 0 || !(unsigned __int8)PnpStringToDwordValue(pszDest, &a2[1]) )
    return 0;
  v11 = 1;
  if ( a3 )
  {
    *a3 = 1;
    if ( v9 )
    {
      if ( !(unsigned __int8)PnpStringToDwordValue(v9, a3) )
        v10 = -1073741823;
    }
  }
  if ( v10 < 0 )
    return 0;
  return v11;
}

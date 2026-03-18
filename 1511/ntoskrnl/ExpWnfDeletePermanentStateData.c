/*
 * XREFs of ExpWnfDeletePermanentStateData @ 0x140677B58
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x1403E11DC (ExpWnfComposeValueName.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x140547F74 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x140677D24 (ExpWnfEnumeratePermanentDataStores.c)
 */

int __fastcall ExpWnfDeletePermanentStateData(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-38h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v9;
  v3 = (a2 >> 4) & 3;
  v4 = (a2 >> 6) & 0xF;
  ExpWnfComposeValueName(a2, &ValueName);
  v5 = 0;
  if ( a1 )
    result = ExpWnfGetPermanentDataStoreHandle(a1, v3, 0, (volatile signed __int64 *)&KeyHandle);
  else
    result = ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, 0LL, &KeyHandle);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      result = ZwDeleteValueKey(KeyHandle, &ValueName);
      if ( a1 )
        break;
      ZwClose(KeyHandle);
      if ( (int)ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, (unsigned int)++v5, &KeyHandle) < 0 )
        return 0;
    }
  }
  return result;
}

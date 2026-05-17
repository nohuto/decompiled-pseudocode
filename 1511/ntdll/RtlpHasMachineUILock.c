/*
 * XREFs of RtlpHasMachineUILock @ 0x1800EAF4C
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180004EE8 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     LdrpQueryValueKey @ 0x180006C48 (LdrpQueryValueKey.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpHasMachineUILock(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1;
  v8 = 4;
  v7 = 4;
  if ( !a2 || !a1 )
    return 3221225485LL;
  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"MachineUILock");
  result = LdrpQueryValueKey(a1, (__int64)&DestinationString, &v8, &v6, &v7);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1 )
    {
      *a2 = 1;
    }
    else if ( v6 )
    {
      return 3221225473LL;
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}

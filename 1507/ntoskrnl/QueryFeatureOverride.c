/*
 * XREFs of QueryFeatureOverride @ 0x1402330DC
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x140233058 (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1404AA414 (RtlQueryRegistryValuesEx.c)
 *     RtlIntegerToUnicodeString @ 0x1404FE908 (RtlIntegerToUnicodeString.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-69h] BYREF
  UNICODE_STRING String; // [rsp+38h] [rbp-61h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-49h] BYREF
  char v7; // [rsp+C0h] [rbp+27h] BYREF

  *(_DWORD *)&String.Length = 0x200000;
  v4 = 0;
  String.Buffer = (wchar_t *)&v7;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = String.Buffer;
  QueryTable[0].Flags = 292;
  QueryTable[0].EntryContext = &v4;
  QueryTable[0].DefaultType = 0x4000000;
  QueryTable[0].DefaultData = 0LL;
  QueryTable[0].DefaultLength = 0;
  if ( RtlQueryRegistryValuesEx(
         0,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         QueryTable,
         0LL,
         0LL) < 0 )
  {
    *a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *a2 = (v4 != 0) + 1;
  }
  return result;
}

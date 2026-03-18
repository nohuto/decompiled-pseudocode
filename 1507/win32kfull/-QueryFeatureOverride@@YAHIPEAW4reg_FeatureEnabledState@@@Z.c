/*
 * XREFs of ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1C01D1994
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z @ 0x1C01D1894 (-EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG a1, enum reg_FeatureEnabledState *a2)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING String; // [rsp+38h] [rbp-61h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-49h] BYREF
  char v7; // [rsp+C0h] [rbp+27h] BYREF

  *(_DWORD *)&String.Length = 0x200000;
  v4 = 0;
  String.Buffer = (PWSTR)&v7;
  RtlIntegerToUnicodeString(a1, 0xAu, &String);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = String.Buffer;
  QueryTable[0].Flags = 292;
  QueryTable[0].EntryContext = &v4;
  QueryTable[0].DefaultType = 0x4000000;
  QueryTable[0].DefaultData = 0LL;
  QueryTable[0].DefaultLength = 0;
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         QueryTable,
         0LL,
         0LL) < 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *(_DWORD *)a2 = (v4 != 0) + 1;
  }
  return result;
}

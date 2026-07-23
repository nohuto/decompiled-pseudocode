/*
 * XREFs of QueryFeatureOverride @ 0x1401B9A20
 * Callers:
 *     EvaluateCurrentStateFromRegistry @ 0x1401B8EE4 (EvaluateCurrentStateFromRegistry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlIntegerToUnicodeString @ 0x1403F4CE4 (RtlIntegerToUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1404D9E08 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall QueryFeatureOverride(ULONG Value, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  int v9; // eax
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING String; // [rsp+48h] [rbp-B8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+110h] [rbp+10h] BYREF
  char v18; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0;
  *a3 = 0;
  *a4 = 0x80000000;
  v12 = 0;
  v13 = 0;
  memset(QueryTable, 0, sizeof(QueryTable));
  *(_DWORD *)&String.Length = 0x200000;
  String.Buffer = (wchar_t *)&v17;
  *(_DWORD *)&DestinationString.Length = 2883584;
  DestinationString.Buffer = (wchar_t *)&v18;
  RtlIntegerToUnicodeString(Value, 0xAu, &String);
  memset(QueryTable, 0, sizeof(QueryTable));
  v9 = 0;
  if ( a2 )
  {
    RtlCopyUnicodeString(&DestinationString, &String);
    RtlAppendUnicodeToString(&DestinationString, L"_variant");
    QueryTable[0].Name = DestinationString.Buffer;
    QueryTable[0].EntryContext = &v13;
    v9 = 1;
    QueryTable[0].Flags = 292;
    QueryTable[0].DefaultType = 0x4000000;
    QueryTable[0].DefaultData = 0LL;
    QueryTable[0].DefaultLength = 0;
  }
  v10 = v9;
  QueryTable[v10].Name = String.Buffer;
  QueryTable[v10].EntryContext = &v12;
  QueryTable[v10].Flags = 292;
  QueryTable[v10].DefaultType = 0x4000000;
  QueryTable[v10].DefaultData = 0LL;
  QueryTable[v10].DefaultLength = 0;
  if ( RtlQueryRegistryValuesEx(
         0,
         L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         QueryTable,
         0LL,
         0LL) >= 0 )
  {
    *a3 = (v12 != 0) + 1;
    if ( a2 && v13 <= 0xFF )
      *a4 = v13;
    return 1;
  }
  if ( !a2 )
    return 1;
  return v4;
}

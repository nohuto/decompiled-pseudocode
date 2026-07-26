/*
 * XREFs of ndisNDKGlobalDisabled @ 0x1C00D7A30
 * Callers:
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

char ndisNDKGlobalDisabled()
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+68h] [rbp+1Fh]
  _BYTE v3[48]; // [rsp+70h] [rbp+27h] BYREF
  int v4; // [rsp+B0h] [rbp+67h] BYREF

  v4 = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v2 = 0LL;
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadRegParameters;
  QueryTable.Flags = 20;
  QueryTable.Name = L"NetworkDirectDisable";
  QueryTable.DefaultType = 4;
  memset(v3, 0, sizeof(v3));
  QueryTable.EntryContext = &v4;
  if ( RtlQueryRegistryValuesEx(1u, L"NDIS\\Parameters", &QueryTable, 0LL, 0LL) >= 0 && v4 )
  {
    NdkGlobalDisabled = 1;
    return 1;
  }
  else
  {
    NdkGlobalDisabled = 0;
    return 0;
  }
}

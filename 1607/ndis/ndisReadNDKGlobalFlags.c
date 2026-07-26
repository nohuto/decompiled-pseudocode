/*
 * XREFs of ndisReadNDKGlobalFlags @ 0x1C00D7744
 * Callers:
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 ndisReadNDKGlobalFlags()
{
  unsigned int v0; // ebx
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v3[56]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned int v4; // [rsp+B0h] [rbp+67h] BYREF

  v0 = 0;
  QueryTable.Flags = 20;
  v4 = 0;
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadRegParameters;
  QueryTable.DefaultType = 4;
  QueryTable.Name = L"NetworkDirectGlobalFlags";
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  memset(v3, 0, sizeof(v3));
  QueryTable.EntryContext = &v4;
  if ( RtlQueryRegistryValuesEx(1u, L"NDIS\\Parameters", &QueryTable, 0LL, 0LL) >= 0 )
    return v4;
  return v0;
}

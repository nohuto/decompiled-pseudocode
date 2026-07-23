/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1800579C0
 * Callers:
 *     QueryFeatureOverride @ 0x1800E2C74 (QueryFeatureOverride.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800579E4 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context, Environment, v6);
}

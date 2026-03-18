/*
 * XREFs of RtlQueryRegistryValues @ 0x1404AA428
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}

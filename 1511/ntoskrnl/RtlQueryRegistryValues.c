/*
 * XREFs of RtlQueryRegistryValues @ 0x1404C87AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
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

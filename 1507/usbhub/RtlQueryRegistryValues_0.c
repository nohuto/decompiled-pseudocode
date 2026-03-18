/*
 * XREFs of RtlQueryRegistryValues_0 @ 0x1C0029DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlQueryRegistryValues_0(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlQueryRegistryValues(RelativeTo, Path, QueryTable, Context, Environment);
}

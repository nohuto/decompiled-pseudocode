/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1404AA414
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140074C54 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x140165350 (RtlpFindRegTziForCurrentYear.c)
 *     QueryFeatureOverride @ 0x1402330DC (QueryFeatureOverride.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407D546C (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x1407DEBA0 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1407E452C (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x1407E694C (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404AA43C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}

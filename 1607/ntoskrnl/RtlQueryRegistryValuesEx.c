/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1404D9E08
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400B19B8 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14013E56C (RtlpFindRegTziForCurrentYear.c)
 *     QueryFeatureOverride @ 0x1401B9A20 (QueryFeatureOverride.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x1407B6318 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1407B922C (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x1407BAF90 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable);
}

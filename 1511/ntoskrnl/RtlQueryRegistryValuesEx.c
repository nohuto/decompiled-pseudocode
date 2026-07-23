/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1404C8798
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400F4724 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14013C264 (RtlpFindRegTziForCurrentYear.c)
 *     EtwpReadConfigParameters @ 0x140755760 (EtwpReadConfigParameters.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140760E7C (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x14076A9E4 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x14076ED84 (CmIsLastKnownGoodBoot.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
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

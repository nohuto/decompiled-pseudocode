/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1404F6E7C
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400B3B38 (RtlCheckPortableOperatingSystem.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14013DFFC (RtlpFindRegTziForCurrentYear.c)
 *     QueryFeatureOverride @ 0x1401B8A54 (QueryFeatureOverride.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     SmQueryRegistry @ 0x1407B6318 (SmQueryRegistry.c)
 *     CmIsLastKnownGoodBoot @ 0x1407B922C (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x1407BAF90 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1404F8018 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpQueryRegistryValues(a1, a2, a3);
}

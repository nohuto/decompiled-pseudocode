/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1400757B0
 * Callers:
 *     PopWriteHiberPages @ 0x1403F2D9C (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404ACDE0 (EtwpGetSystemMaximumBufferCount.c)
 *     CmpCanGrowHive @ 0x1404AF554 (CmpCanGrowHive.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     sub_1404B03EC @ 0x1404B03EC (sub_1404B03EC.c)
 *     PopEnlargeHiberFile @ 0x14056A6FC (PopEnlargeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x14056BFC0 (PopCalculateHiberFileSize.c)
 *     SmpSystemStoreCreate @ 0x1405C5828 (SmpSystemStoreCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned int a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_14034F0E8 + 8LL * a1) + 5328LL);
}

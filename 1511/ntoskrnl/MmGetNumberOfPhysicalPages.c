/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1400F4844
 * Callers:
 *     PopWriteHiberPages @ 0x1403A0160 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403A1D5C (PopRequestWrite.c)
 *     CmpCanGrowHive @ 0x1403D50E4 (CmpCanGrowHive.c)
 *     sub_1404C724C @ 0x1404C724C (sub_1404C724C.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1404CB394 (EtwpGetSystemMaximumBufferCount.c)
 *     PopEnlargeHiberFile @ 0x1404F6A34 (PopEnlargeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x1404F9E4C (PopCalculateHiberFileSize.c)
 *     SmpSystemStoreCreate @ 0x14054DEE0 (SmpSystemStoreCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned int a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_1402FEC28 + 8LL * a1) + 5712LL);
}

/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140413488
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14000EEC4 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400A7798 (ExpGetSystemEmulationBasicInformation.c)
 *     PopWriteHiberPages @ 0x1403CBF00 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     CmpInitGlobalQuotaAllowed @ 0x1407ABAAC (CmpInitGlobalQuotaAllowed.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     <none>
 */

__int64 MmGetNumberOfPhysicalPages()
{
  return *(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL);
}

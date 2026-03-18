/*
 * XREFs of MmUnlockPagableImageSection @ 0x1400AC6FC
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1403DA0D4 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1403DFCAC (ExQuerySystemLockInformation.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 *     PnprUnlockPagesForReplace @ 0x1406455AC (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14072572C (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     <none>
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}

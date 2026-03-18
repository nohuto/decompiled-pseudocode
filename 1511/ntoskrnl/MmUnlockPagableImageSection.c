/*
 * XREFs of MmUnlockPagableImageSection @ 0x1400EBD44
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1403AE054 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1403B2F6C (ExQuerySystemLockInformation.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PnprUnlockPagesForReplace @ 0x1406111A0 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     VerifierMmUnlockPagableImageSection @ 0x1406C0B08 (VerifierMmUnlockPagableImageSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1406D9748 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     <none>
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}

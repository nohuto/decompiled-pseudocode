/*
 * XREFs of MmUnlockPagableImageSection @ 0x140010480
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1403FE474 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140404220 (ExQuerySystemLockInformation.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PnprUnlockPagesForReplace @ 0x140690F14 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     VerifierMmUnlockPagableImageSection @ 0x140742348 (VerifierMmUnlockPagableImageSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14075C764 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     <none>
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}

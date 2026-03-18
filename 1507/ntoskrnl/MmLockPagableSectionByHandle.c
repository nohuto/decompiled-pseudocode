/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1404251E8
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     IoUnregisterShutdownNotification @ 0x1403FE474 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x140404220 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     VerifierMmLockPagableSectionByHandle @ 0x140742310 (VerifierMmLockPagableSectionByHandle.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 * Callees:
 *     <none>
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}

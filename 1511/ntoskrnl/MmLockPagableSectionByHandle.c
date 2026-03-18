/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1404B6838
 * Callers:
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     IoUnregisterShutdownNotification @ 0x1403AE054 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1403B2F6C (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     VerifierMmLockPagableSectionByHandle @ 0x1406C0AD0 (VerifierMmLockPagableSectionByHandle.c)
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 * Callees:
 *     <none>
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}

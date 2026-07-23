/*
 * XREFs of MiUnlockWorkingSetShared @ 0x140014158
 * Callers:
 *     MiComparePteProtections @ 0x1401E8F90 (MiComparePteProtections.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 */

void __fastcall MiUnlockWorkingSetShared(__int64 a1)
{
  volatile LONG *SharedVm; // rax
  KIRQL v2; // dl

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  ExReleaseSpinLockShared(SharedVm, v2);
}

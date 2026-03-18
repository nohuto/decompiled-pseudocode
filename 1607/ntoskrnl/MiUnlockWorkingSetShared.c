/*
 * XREFs of MiUnlockWorkingSetShared @ 0x1400145D8
 * Callers:
 *     MiComparePteProtections @ 0x1401E9164 (MiComparePteProtections.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 */

void __fastcall MiUnlockWorkingSetShared(__int64 a1)
{
  volatile LONG *SharedVm; // rax
  KIRQL v2; // dl

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  ExReleaseSpinLockShared(SharedVm, v2);
}

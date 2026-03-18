/*
 * XREFs of MiLockWorkingSetShared @ 0x1400145F0
 * Callers:
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiComparePteProtections @ 0x1401E9164 (MiComparePteProtections.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall MiLockWorkingSetShared(__int64 a1)
{
  volatile LONG *SharedVm; // rbx
  KIRQL result; // al

  SharedVm = (volatile LONG *)MiGetSharedVm(a1);
  result = ExAcquireSpinLockShared(SharedVm);
  if ( *((_DWORD *)SharedVm + 1) )
    _InterlockedExchange(SharedVm + 1, 0);
  return result;
}

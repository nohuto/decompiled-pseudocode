/*
 * XREFs of MiLockWorkingSetShared @ 0x140014170
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiComparePteProtections @ 0x1401E8F90 (MiComparePteProtections.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
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

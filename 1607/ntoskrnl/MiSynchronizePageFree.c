/*
 * XREFs of MiSynchronizePageFree @ 0x1401F01A4
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSynchronizePageFree(__int64 a1)
{
  __int64 v1; // rdi
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx

  v1 = a1 + 1280;
  SharedVm = MiGetSharedVm(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v4) = v3;
  return MiUnlockWorkingSetExclusive(v1, v4);
}

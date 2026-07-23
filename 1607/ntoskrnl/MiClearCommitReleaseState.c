/*
 * XREFs of MiClearCommitReleaseState @ 0x1401DF678
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiClearCommitReleaseState(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx

  SharedVm = MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *(_BYTE *)(a1 + 187) &= 0x3Fu;
  LOBYTE(v4) = v3;
  return MiUnlockWorkingSetExclusive(a1, v4);
}

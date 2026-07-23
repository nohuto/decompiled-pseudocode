/*
 * XREFs of MiRotateComplete @ 0x14010E6F8
 * Callers:
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rbp
  unsigned __int64 *v4; // rdi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  unsigned __int64 *i; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].IdealNode[12];
  v4 = &Process[1].Affinity.Bitmap[9];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LOBYTE(v7) = v6;
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  return MiUnlockWorkingSetExclusive(v3, v7);
}

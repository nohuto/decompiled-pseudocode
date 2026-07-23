/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x14010EB18
 * Callers:
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // r9
  __int64 v11; // rdx
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  *a3 = Process[1].Affinity.Bitmap[9];
  LOBYTE(v10) = v8;
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiDeleteVirtualAddresses(a1, a2, 0, v10, (__int64)v13);
  LOBYTE(v11) = v9;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v11);
}

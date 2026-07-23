/*
 * XREFs of MmEnableProcessSvm @ 0x1401E0DFC
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE3(Process[2].Header.WaitListHead.Flink) |= 8u;
  LOBYTE(v3) = v2;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v3);
}

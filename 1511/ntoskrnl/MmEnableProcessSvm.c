/*
 * XREFs of MmEnableProcessSvm @ 0x1401D094C
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 MmEnableProcessSvm()
{
  _KPROCESS *Process; // rbx
  KIRQL v1; // al
  __int64 v2; // rdx
  __int64 v3; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  BYTE3(Process[2].DirectoryTableBase) |= 8u;
  LOBYTE(v2) = v1;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v2, v3);
}

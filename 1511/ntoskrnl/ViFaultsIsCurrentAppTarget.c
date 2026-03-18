/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x1406C5530
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // al
  unsigned int v1; // edi
  BOOL v2; // ebx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = 0;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  ViFaultLockOwner = 0LL;
  KeReleaseSpinLock(&ViFaultInjectionLock, v0);
  if ( v2 )
    return 1;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
  {
    ++dword_1406E02C4;
    return 1;
  }
  ++dword_1406E02C0;
  return v1;
}

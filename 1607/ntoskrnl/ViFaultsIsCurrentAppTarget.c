/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x1407115A4
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // al
  BOOL v1; // ebx
  unsigned int v2; // edx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KeReleaseSpinLock(&ViFaultInjectionLock, v0);
  v2 = 0;
  if ( v1 )
    return 1;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
  {
    ++dword_14072C26C;
    return 1;
  }
  ++dword_14072C268;
  return v2;
}

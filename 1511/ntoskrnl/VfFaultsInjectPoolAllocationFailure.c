/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x1406C4CC8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagTarget @ 0x1406C55F8 (ViFaultsIsTagTarget.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // bl
  unsigned int IsTagTarget; // eax
  unsigned int v5; // edi

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_1406E02B4;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1406E02DC;
    return 0LL;
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  IsTagTarget = ViFaultsIsTagTarget(a1);
  ViFaultLockOwner = 0LL;
  v5 = IsTagTarget;
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( v5 )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return v5;
}

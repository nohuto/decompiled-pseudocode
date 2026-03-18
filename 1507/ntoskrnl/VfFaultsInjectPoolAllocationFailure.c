/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140746494
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagTarget @ 0x14074713C (ViFaultsIsTagTarget.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int IsTagTarget; // eax
  unsigned int v5; // ebx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_1407632B4;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1407632DC;
    return 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViFaultInjectionLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViFaultInjectionLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViFaultInjectionLock);
  }
  ViFaultLockOwner = (__int64)KeGetCurrentThread();
  IsTagTarget = ViFaultsIsTagTarget(a1);
  ViFaultLockOwner = 0LL;
  v5 = IsTagTarget;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
  else
    _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
  __writecr8(CurrentIrql);
  if ( v5 )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return v5;
}

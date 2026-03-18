/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x140746FE0
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 ViFaultsIsCurrentAppTarget()
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v1; // ebx
  BOOL v2; // esi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

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
  v1 = 0;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  ViFaultLockOwner = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
  else
    _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
  __writecr8(CurrentIrql);
  if ( v2 )
    return 1;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
  {
    ++dword_1407632C4;
    return 1;
  }
  ++dword_1407632C0;
  return v1;
}

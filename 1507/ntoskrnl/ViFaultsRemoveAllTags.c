/*
 * XREFs of ViFaultsRemoveAllTags @ 0x1407472F0
 * Callers:
 *     VfFaultsSetParameters @ 0x140746708 (VfFaultsSetParameters.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllTags()
{
  unsigned __int8 CurrentIrql; // di
  PVOID **v1; // rcx
  PVOID *v2; // rbx
  __int64 result; // rax
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
  v1 = (PVOID **)ViFaultTagsList;
  ViFaultLockOwner = (__int64)KeGetCurrentThread();
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    do
    {
      v2 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v2;
    }
    while ( v2 != &ViFaultTagsList );
  }
  qword_14032B5B8 = (__int64)&ViFaultTagsList;
  ViHaveFaultTags = 0;
  ViFaultTagsList = &ViFaultTagsList;
  ViFaultLockOwner = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
  else
    _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

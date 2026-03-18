/*
 * XREFs of ViFaultsRemoveAllApps @ 0x14074721C
 * Callers:
 *     VfFaultsSetParameters @ 0x140746708 (VfFaultsSetParameters.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllApps()
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
  v1 = (PVOID **)ViFaultApplicationsList;
  ViFaultLockOwner = (__int64)KeGetCurrentThread();
  if ( ViFaultApplicationsList != &ViFaultApplicationsList )
  {
    do
    {
      v2 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v2;
    }
    while ( v2 != &ViFaultApplicationsList );
  }
  ViFaultLockOwner = 0LL;
  qword_14032B598 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
  else
    _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

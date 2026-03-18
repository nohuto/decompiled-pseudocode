/*
 * XREFs of ViFaultsInitializeAppsList @ 0x140746D48
 * Callers:
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViFaultsAddAllApps @ 0x1407468EC (ViFaultsAddAllApps.c)
 */

__int64 ViFaultsInitializeAppsList()
{
  unsigned int v0; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = 0;
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
  qword_14032B598 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  ViFaultLockOwner = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViFaultInjectionLock, retaddr);
  else
    _InterlockedAnd64(&ViFaultInjectionLock, 0LL);
  __writecr8(CurrentIrql);
  if ( (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllApps(
                           VerifierFaultApplicationsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  return v0;
}

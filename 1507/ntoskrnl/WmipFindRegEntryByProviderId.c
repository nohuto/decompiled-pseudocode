/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x1400CF03C
 * Callers:
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14052D8A8 (IoWMISystemControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1400CF0DC (WmipDoFindRegEntryByProviderId.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&WmipRegistrationSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&WmipRegistrationSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WmipRegistrationSpinLock);
  }
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}

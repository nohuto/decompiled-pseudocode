/*
 * XREFs of WmiQueryTraceProviderCount @ 0x14014F95C
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x14054AE18 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  unsigned __int8 CurrentIrql; // di
  _UNKNOWN **i; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v0 = 0;
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
  for ( i = (_UNKNOWN **)WmipInUseRegEntryHead; i != &WmipInUseRegEntryHead; i = (_UNKNOWN **)*i )
  {
    if ( ((((*((int *)i + 12) >> 4) & 0x400000) != 0) & _bittest((const signed __int32 *)i + 12, 0x1Eu)) != 0 && i[2] )
      ++v0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v0;
}

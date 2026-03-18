/*
 * XREFs of PopResumeDeviceIdle @ 0x1401486A0
 * Callers:
 *     PoClearBroadcast @ 0x140565E40 (PoClearBroadcast.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 PopResumeDeviceIdle()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopDopeGlobalLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDopeGlobalLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopDopeGlobalLock);
  }
  byte_1403538EC = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopDopeGlobalLock, retaddr);
  else
    _InterlockedAnd64(&PopDopeGlobalLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

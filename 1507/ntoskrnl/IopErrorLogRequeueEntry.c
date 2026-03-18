/*
 * XREFs of IopErrorLogRequeueEntry @ 0x1401F8DA4
 * Callers:
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopErrorLogRequeueEntry(_QWORD *a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&IopErrorLogLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopErrorLogLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopErrorLogLock);
  }
  v3 = IopErrorLogListHead;
  *a1 = IopErrorLogListHead;
  a1[1] = &IopErrorLogListHead;
  if ( *(__int64 **)(v3 + 8) != &IopErrorLogListHead )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = a1;
  IopErrorLogListHead = (__int64)a1;
  ErrorLogSessionOpened = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&IopErrorLogLock, retaddr);
  else
    _InterlockedAnd64(&IopErrorLogLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

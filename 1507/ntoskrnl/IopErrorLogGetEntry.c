/*
 * XREFs of IopErrorLogGetEntry @ 0x140154924
 * Callers:
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 IopErrorLogGetEntry()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // rbx
  __int64 v3; // rax
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
  v1 = IopErrorLogListHead;
  if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
  {
    IopErrorLogSessionPending = 0;
    v1 = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)IopErrorLogListHead;
    if ( *(__int64 **)(IopErrorLogListHead + 8) != &IopErrorLogListHead || *(_QWORD *)(v3 + 8) != IopErrorLogListHead )
      __fastfail(3u);
    IopErrorLogListHead = *(_QWORD *)IopErrorLogListHead;
    *(_QWORD *)(v3 + 8) = &IopErrorLogListHead;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&IopErrorLogLock, retaddr);
  else
    _InterlockedAnd64(&IopErrorLogLock, 0LL);
  __writecr8(CurrentIrql);
  return v1;
}

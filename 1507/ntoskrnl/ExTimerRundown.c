/*
 * XREFs of ExTimerRundown @ 0x14000E370
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *p_StackBase; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *p_ThreadLock; // r14
  _QWORD *v4; // rax
  __int64 result; // rax
  ULONG_PTR v6; // rsi
  int v7; // ebp
  volatile signed __int32 *v8; // rdi
  unsigned __int8 v9; // r12
  signed __int64 BugCheckParameter4; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  p_StackBase = (volatile signed __int32 *)&CurrentThread[1].StackBase;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&CurrentThread[1].StackBase);
  }
  else if ( _interlockedbittestandset64(p_StackBase, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(&CurrentThread[1].StackBase);
  }
  p_ThreadLock = &CurrentThread[1].ThreadLock;
  while ( 1 )
  {
    v4 = (_QWORD *)*p_ThreadLock;
    if ( (unsigned __int64 *)*p_ThreadLock == p_ThreadLock )
      break;
    v6 = (ULONG_PTR)(v4 - 28);
    ObfReferenceObjectWithTag(v4 - 28, 0x746C6644u);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&CurrentThread[1].StackBase, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)p_StackBase, 0LL);
    __writecr8(CurrentIrql);
    v7 = 1;
    v8 = (volatile signed __int32 *)(v6 + 64);
    v9 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v6 + 64);
    }
    else if ( _interlockedbittestandset64(v8, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v6 + 64);
    }
    if ( (*(_BYTE *)(v6 + 244) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v6 + 80) )
      v7 = ExpCancelTimer((PKTIMER)v6) + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6 + 64, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    __writecr8(v9);
    if ( ObpTraceFlags )
      ObpPushStackInfo(v6 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), -v7) - v7;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v6 - 48);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&CurrentThread[1].StackBase);
    }
    else if ( _interlockedbittestandset64(p_StackBase, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&CurrentThread[1].StackBase);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&CurrentThread[1].StackBase, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)p_StackBase, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

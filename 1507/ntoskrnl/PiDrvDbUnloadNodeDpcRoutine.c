/*
 * XREFs of PiDrvDbUnloadNodeDpcRoutine @ 0x140130F74
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PiDrvDbUnloadNodeDpcRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  volatile signed __int32 *v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (volatile signed __int32 *)(DeferredContext + 424);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(DeferredContext + 424);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)DeferredContext + 106);
  }
  if ( !DeferredContext[432] )
  {
    *((_QWORD *)DeferredContext + 49) = 0LL;
    *((_QWORD *)DeferredContext + 51) = PiDrvDbUnloadNodeWorkerCallback;
    *((_QWORD *)DeferredContext + 52) = DeferredContext;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 392), DelayedWorkQueue);
    DeferredContext[432] = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
}

/*
 * XREFs of ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0029480
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastPerfRetireFrame @ 0x1C0029748 (DpiMiracastPerfRetireFrame.c)
 */

void __fastcall DpiMiracastPerfFlushTimerDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( DeferredContext[712] && !DeferredContext[714] )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
    if ( !DeferredContext[714] )
    {
      v5 = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
      if ( *((_DWORD *)DeferredContext + 234) == *((_DWORD *)DeferredContext + 235) && DeferredContext[713] )
      {
        ++*((_DWORD *)DeferredContext + 194);
        DeferredContext[713] = 0;
        KeCancelTimer((PKTIMER)(DeferredContext + 808));
      }
      while ( *((_DWORD *)DeferredContext + 234) < *((_DWORD *)DeferredContext + 235)
           && (unsigned int)(v5 - *(_DWORD *)&DeferredContext[32 * *((int *)DeferredContext + 234) + 968]) > 0x3E8
           && (unsigned __int8)DpiMiracastPerfRetireFrame(DeferredContext) )
        ;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}

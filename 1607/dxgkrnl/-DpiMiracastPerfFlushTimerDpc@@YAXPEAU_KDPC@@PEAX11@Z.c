/*
 * XREFs of ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00304B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastPerfRetireFrame @ 0x1C0030760 (DpiMiracastPerfRetireFrame.c)
 */

void __fastcall DpiMiracastPerfFlushTimerDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( DeferredContext[808] && !DeferredContext[810] )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1C00571C8, &LockHandle);
    if ( !DeferredContext[810] )
    {
      v5 = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
      if ( *((_DWORD *)DeferredContext + 258) == *((_DWORD *)DeferredContext + 259) && DeferredContext[809] )
      {
        ++*((_DWORD *)DeferredContext + 218);
        DeferredContext[809] = 0;
        KeCancelTimer((PKTIMER)(DeferredContext + 904));
      }
      while ( *((_DWORD *)DeferredContext + 258) < *((_DWORD *)DeferredContext + 259)
           && (unsigned int)(v5 - *(_DWORD *)&DeferredContext[32 * *((int *)DeferredContext + 258) + 1064]) > 0x3E8
           && (unsigned __int8)DpiMiracastPerfRetireFrame(DeferredContext) )
        ;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}

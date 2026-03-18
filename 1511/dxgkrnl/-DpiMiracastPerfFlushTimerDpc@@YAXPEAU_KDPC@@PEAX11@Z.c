/*
 * XREFs of ?DpiMiracastPerfFlushTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00290E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00293AC @ 0x1C00293AC (sub_1C00293AC.c)
 */

void __fastcall DpiMiracastPerfFlushTimerDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v5; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( DeferredContext[720] && !DeferredContext[722] )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1C0047008, &LockHandle);
    if ( !DeferredContext[722] )
    {
      v5 = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
      if ( *((_DWORD *)DeferredContext + 236) == *((_DWORD *)DeferredContext + 237) && DeferredContext[721] )
      {
        ++*((_DWORD *)DeferredContext + 196);
        DeferredContext[721] = 0;
        KeCancelTimer((PKTIMER)(DeferredContext + 816));
      }
      while ( *((_DWORD *)DeferredContext + 236) < *((_DWORD *)DeferredContext + 237)
           && (unsigned int)(v5 - *(_DWORD *)&DeferredContext[32 * *((int *)DeferredContext + 236) + 976]) > 0x3E8
           && (unsigned __int8)sub_1C00293AC(DeferredContext) )
        ;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}

/*
 * XREFs of MmInSwapWorkingSet @ 0x140001BC8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140001D18 (MiProcessWsInSwapSupport.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1403B5964 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x1403B59C8 (MiInSwapStore.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1404D066C (SmStoreSetProcessVaRanges.c)
 */

__int64 __fastcall MmInSwapWorkingSet(struct _KPROCESS *Object)
{
  unsigned int v1; // edi
  __int64 v3; // r14
  volatile LONG *v4; // r15
  KIRQL v5; // al
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v7; // rcx

  v1 = 0;
  EtwTraceWorkingSetSwap(Object);
  v3 = MiPartitionIdToPointer(LOWORD(Object[2].Header.SignalState));
  v4 = (volatile LONG *)(v3 + 1056);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1056));
  Blink = Object[2].ThreadListHead.Blink;
  if ( Blink )
  {
    if ( Blink == (struct _LIST_ENTRY *)2 )
    {
      v1 = -1073741558;
    }
    else if ( Blink == (struct _LIST_ENTRY *)1 )
    {
      v1 = -1073740682;
    }
    else
    {
      Object[2].ThreadListHead.Blink = (struct _LIST_ENTRY *)1;
      ExReleaseSpinLockExclusive(v4, v5);
      if ( *(_DWORD *)(v3 + 1080) )
      {
        MiInSwapStore(Object);
        SmStoreSetProcessVaRanges(0LL);
      }
      MiProcessWsInSwapSupport(Blink->Flink, 0LL);
      v7 = Blink[3].Blink;
      if ( v7 )
        MiProcessWsInSwapSupport(v7, 1LL);
      if ( Blink->Blink )
      {
        Blink[2].Blink = Blink;
        Blink[2].Flink = (struct _LIST_ENTRY *)MiInSwapSharedWorkingSetWorker;
        Blink[1].Flink = 0LL;
        ObfReferenceObjectWithTag(Object, 0x73576D4Du);
        Blink[3].Flink = (struct _LIST_ENTRY *)Object;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&Blink[1], NormalWorkQueue);
      }
      else
      {
        MiFreeWorkingSetSwapContext(v3, Blink);
      }
      v5 = ExAcquireSpinLockExclusive(v4);
      if ( Object[2].ThreadListHead.Blink == (struct _LIST_ENTRY *)1 )
        Object[2].ThreadListHead.Blink = 0LL;
    }
  }
  else
  {
    v1 = -1073741275;
  }
  ExReleaseSpinLockExclusive(v4, v5);
  MiContractWsSwapPageFile(v3);
  EtwTraceWorkingSetSwap(Object);
  return v1;
}

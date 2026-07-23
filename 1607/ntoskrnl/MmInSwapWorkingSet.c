/*
 * XREFs of MmInSwapWorkingSet @ 0x1400B5144
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075EDC (MiGetWorkingSetSwapSupport.c)
 *     MiProcessWsInSwapSupport @ 0x1400B4DB8 (MiProcessWsInSwapSupport.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SmStoreSetProcessVaRanges @ 0x1403E4AD4 (SmStoreSetProcessVaRanges.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404D37C0 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStore @ 0x1404D38C4 (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x1404D43A0 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
 */

__int64 __fastcall MmInSwapWorkingSet(char *Object)
{
  unsigned int v1; // edi
  char *v3; // r14
  int *v4; // r15
  volatile LONG *v5; // r12
  __int64 WorkingSetSwapSupport; // rax
  KIRQL v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rsi
  KIRQL v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rcx

  v1 = 0;
  v3 = Object + 1280;
  EtwTraceWorkingSetSwap((PEPROCESS)Object);
  v4 = MiPartitionIdToPointer(*((_WORD *)Object + 722));
  v5 = v4 + 262;
  ExAcquireSpinLockExclusive(v4 + 262);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v3);
  v9 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    if ( WorkingSetSwapSupport == 2 )
    {
      v1 = -1073741558;
    }
    else if ( WorkingSetSwapSupport == 1 )
    {
      v1 = -1073740682;
    }
    else
    {
      *((_QWORD *)MiGetSharedVm(v8) + 3) = 1LL;
      ExReleaseSpinLockExclusive(v5, v10);
      if ( v4[266] )
      {
        MiInSwapStore(Object);
        SmStoreSetProcessVaRanges(0LL);
      }
      MiProcessWsInSwapSupport(*(_QWORD *)v9, 0);
      v11 = *(_QWORD *)(v9 + 56);
      if ( v11 )
        MiProcessWsInSwapSupport(v11, 1u);
      if ( *(_QWORD *)(v9 + 8) )
      {
        *(_QWORD *)(v9 + 40) = v9;
        *(_QWORD *)(v9 + 32) = MiInSwapSharedWorkingSetWorker;
        *(_QWORD *)(v9 + 16) = 0LL;
        ObfReferenceObjectWithTag(Object, 0x73576D4Du);
        *(_QWORD *)(v9 + 48) = Object;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 16), NormalWorkQueue);
      }
      else
      {
        MiFreeWorkingSetSwapContext(v4, v9);
      }
      ExAcquireSpinLockExclusive(v5);
      if ( MiGetWorkingSetSwapSupport((__int64)v3) == 1 )
        *((_QWORD *)MiGetSharedVm(v12) + 3) = 0LL;
    }
  }
  else
  {
    v1 = -1073741275;
  }
  ExReleaseSpinLockExclusive(v5, v7);
  MiContractWsSwapPageFile(v4);
  EtwTraceWorkingSetSwap((PEPROCESS)Object);
  return v1;
}

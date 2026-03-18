/*
 * XREFs of MmInSwapWorkingSet @ 0x1400DE740
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiProcessWsInSwapSupport @ 0x1400DE920 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     SmStoreSetProcessVaRanges @ 0x1404FAF38 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404FB0F8 (MiFreeWorkingSetSwapContext.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 */

__int64 __fastcall MmInSwapWorkingSet(PVOID Object)
{
  __int16 *v2; // rax
  __int16 *v3; // r15
  volatile signed __int32 *v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // ebx
  signed __int32 v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int8 v10; // si
  unsigned int v11; // ebx
  signed __int32 v12; // eax
  unsigned int v13; // ebx
  void *retaddr; // [rsp+78h] [rbp+0h]

  EtwTraceWorkingSetSwap((PEPROCESS)Object);
  v2 = MiPartitionIdToPointer(*((_WORD *)Object + 726));
  v3 = v2;
  v4 = (volatile signed __int32 *)(v2 + 512);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 512);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v2 + 256);
    while ( 1 )
    {
      v7 = *v4;
      if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v4, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v8 = *((_QWORD *)Object + 188);
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v13 = -1073740682;
    }
    else if ( v8 == 2 )
    {
      v13 = -1073741558;
    }
    else
    {
      *((_QWORD *)Object + 188) = 1LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
      else
        *v4 = 0;
      __writecr8(CurrentIrql);
      if ( *((_DWORD *)v3 + 262) )
      {
        MiInSwapStore(Object);
        SmStoreSetProcessVaRanges(0LL);
      }
      MiProcessWsInSwapSupport(*(_QWORD *)v8, 0LL);
      v9 = *(_QWORD *)(v8 + 56);
      if ( v9 )
        MiProcessWsInSwapSupport(v9, 1LL);
      if ( *(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 16) = 0LL;
        *(_QWORD *)(v8 + 32) = MiInSwapSharedWorkingSetWorker;
        *(_QWORD *)(v8 + 40) = v8;
        ObfReferenceObjectWithTag(Object, 0x73576D4Du);
        *(_QWORD *)(v8 + 48) = Object;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 16), NormalWorkQueue);
      }
      else
      {
        MiFreeWorkingSetSwapContext(v3, v8);
      }
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4);
      }
      else
      {
        v11 = 0;
        if ( _interlockedbittestandset(v4, 0x1Fu) )
          v11 = ExpWaitForSpinLockExclusiveAndAcquire(v4);
        while ( 1 )
        {
          v12 = *v4;
          if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v12 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v4, v12 | 0x40000000, v12);
          if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v11);
        }
      }
      CurrentIrql = v10;
      if ( *((_QWORD *)Object + 188) == 1LL )
        *((_QWORD *)Object + 188) = 0LL;
      v13 = 0;
    }
  }
  else
  {
    v13 = -1073741275;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  __writecr8(CurrentIrql);
  MiContractWsSwapPageFile(v3);
  EtwTraceWorkingSetSwap((PEPROCESS)Object);
  return v13;
}

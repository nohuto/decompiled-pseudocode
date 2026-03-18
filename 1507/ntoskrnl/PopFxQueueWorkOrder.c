/*
 * XREFs of PopFxQueueWorkOrder @ 0x140029174
 * Callers:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PopFxRequestWorker @ 0x140029120 (PopFxRequestWorker.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14013A274 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140238164 (PopFxIssueComponentPerfStateChanges.c)
 * Callees:
 *     PopFxAddRefDevice @ 0x1400277F0 (PopFxAddRefDevice.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, char a4)
{
  __int64 result; // rax
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v11; // al
  unsigned int v12; // esi
  ULONG_PTR *v13; // rcx

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
  if ( (_DWORD)result == 1 )
  {
    if ( a3 )
      PopFxAddRefDevice(a3);
    if ( a4 || (result = ExTryQueueWorkItem(a2), !(_BYTE)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = CurrentPrcb->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v11 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
        LOBYTE(a3) = v11;
        EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, a2, a3);
      }
      v12 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( (*(_DWORD *)a1 & 0x80u) != 0 );
      }
      if ( *(_QWORD *)(a1 + 16) == a1 + 8
        || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
      {
        ++*(_DWORD *)(a1 + 4);
        v13 = *(ULONG_PTR **)(a1 + 32);
        *(_QWORD *)a2 = a1 + 24;
        *(_QWORD *)(a2 + 8) = v13;
        if ( *v13 != a1 + 24 )
          __fastfail(3u);
        *v13 = a2;
        *(_QWORD *)(a1 + 32) = a2;
      }
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      return KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
    }
  }
  return result;
}

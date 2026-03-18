/*
 * XREFs of KiInsertQueueInternal @ 0x1401260F4
 * Callers:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v8; // al
  unsigned int v9; // esi
  char result; // al
  _QWORD *v11; // rcx

  *a2 = 0LL;
  v3 = a1 + 8;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v8 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    LOBYTE(a3) = v8;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, a2, a3);
  }
  v9 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  if ( *(_QWORD *)(v3 + 8) == v3
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (result = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2)) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    result = a1 + 24;
    v11 = *(_QWORD **)(a1 + 32);
    *a2 = a1 + 24;
    a2[1] = v11;
    if ( *v11 != a1 + 24 )
      __fastfail(3u);
    *v11 = a2;
    *(_QWORD *)(a1 + 32) = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}

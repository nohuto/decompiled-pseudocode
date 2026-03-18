/*
 * XREFs of KiInsertQueue @ 0x14017E344
 * Callers:
 *     EtwpQueueReply @ 0x140555B84 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x140699E8C (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiInsertQueue(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // r12
  unsigned int v6; // r14d
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v10; // esi
  _KTHREAD *CurrentThread; // rbp
  char v12; // al
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rcx
  unsigned __int8 CurrentIrql; // [rsp+70h] [rbp+8h]
  unsigned int v18; // [rsp+80h] [rbp+18h]

  v5 = a1 + 8;
  v6 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    if ( CurrentThread->WaitBlockFill6[68] != 2 || (v12 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
      v12 = 0;
    LOBYTE(a3) = v12;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, a2, a3);
  }
  if ( v6 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v6 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v18 = *(_DWORD *)(a1 + 4);
  if ( *(_QWORD *)(v5 + 8) == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2) )
  {
    ++*(_DWORD *)(a1 + 4);
    v13 = (__int64 *)(a1 + 24);
    if ( (a4 & 2) != 0 )
    {
      v14 = *v13;
      *a2 = *v13;
      a2[1] = (__int64)v13;
      if ( *(__int64 **)(v14 + 8) != v13 )
        __fastfail(3u);
      *(_QWORD *)(v14 + 8) = a2;
      *v13 = (__int64)a2;
    }
    else
    {
      v15 = *(__int64 ***)(a1 + 32);
      *a2 = (__int64)v13;
      a2[1] = (__int64)v15;
      if ( *v15 != v13 )
        __fastfail(3u);
      *v15 = a2;
      *(_QWORD *)(a1 + 32) = a2;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((signed __int64)CurrentPrcb, a4 & 1, 1u, v6, CurrentIrql);
  return v18;
}

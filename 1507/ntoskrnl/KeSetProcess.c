/*
 * XREFs of KeSetProcess @ 0x1400EFB40
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rdi
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // rbx
  _KTHREAD *CurrentThread; // r13
  bool v13; // al
  unsigned int v14; // ebp
  __int64 *v15; // rcx
  unsigned int v17; // [rsp+80h] [rbp+8h]
  struct _KPRCB *v18; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v19; // [rsp+90h] [rbp+18h]
  unsigned __int8 CurrentIrql; // [rsp+98h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  v19 = CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  v6 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  if ( v7 != (_QWORD *)(a1 + 8) )
  {
    do
    {
      v8 = (__int64)v7;
      v7 = (_QWORD *)*v7;
      v9 = *(_BYTE *)(v8 + 16);
      if ( v9 == 1 )
      {
        v10 = *(unsigned __int16 *)(v8 + 18);
      }
      else
      {
        if ( v9 == 2 )
        {
          *(_BYTE *)(v8 + 17) = 5;
          v11 = *(_QWORD *)(v8 + 24);
          *(_QWORD *)v8 = 0LL;
          __writecr8(2uLL);
          v18 = KeGetCurrentPrcb();
          CurrentThread = v18->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v13 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            LOBYTE(a3) = v13;
            EtwTraceEnqueueWork(CurrentThread, v8, a3);
          }
          v14 = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
          {
            do
            {
              if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v14);
            }
            while ( (*(_DWORD *)v11 & 0x80u) != 0 );
          }
          if ( *(_QWORD *)(v11 + 16) == v11 + 8
            || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v18, v11, v8) )
          {
            ++*(_DWORD *)(v11 + 4);
            v15 = *(__int64 **)(v11 + 32);
            *(_QWORD *)v8 = v11 + 24;
            *(_QWORD *)(v8 + 8) = v15;
            if ( *v15 != v11 + 24 )
              __fastfail(3u);
            *v15 = v8;
            *(_QWORD *)(v11 + 32) = v8;
          }
          _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
          CurrentPrcb = v19;
          continue;
        }
        v10 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v8, v10, 0LL);
    }
    while ( v7 != v6 );
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v6 = v6;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return v17;
}

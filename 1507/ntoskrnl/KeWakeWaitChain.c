/*
 * XREFs of KeWakeWaitChain @ 0x140103A14
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(volatile signed __int32 **a1, unsigned int a2, __int64 a3)
{
  volatile signed __int32 *v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  struct _KPRCB *CurrentPrcb; // r10
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // ebx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  __int64 v16; // rdi
  _KTHREAD *CurrentThread; // r15
  bool v18; // al
  unsigned int v19; // r14d
  __int64 *v20; // rcx
  char v22; // al
  __int64 v24; // [rsp+30h] [rbp-68h]
  struct _KPRCB *v25; // [rsp+38h] [rbp-60h]
  _QWORD *v26; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+B0h] [rbp+18h]
  unsigned int v31; // [rsp+B8h] [rbp+20h]

  v30 = a3;
  v3 = *a1;
  v5 = 0;
  v6 = 1;
  v31 = 0;
  if ( !v3 )
    return v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = (__int64)CurrentPrcb;
  while ( 2 )
  {
    v8 = v3;
    v9 = 0;
    v27 = *(volatile signed __int32 **)v3;
    if ( _interlockedbittestandset(v3 + 2, 7u) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*((_DWORD *)v8 + 2) & 0x80u) != 0 || _interlockedbittestandset(v8 + 2, 7u) );
      CurrentPrcb = (struct _KPRCB *)v24;
    }
    v10 = v8 + 4;
    *((_DWORD *)v8 + 3) = 1;
    v11 = (_QWORD *)*((_QWORD *)v8 + 2);
    while ( v11 != v10 )
    {
      v12 = (__int64)v11;
      v26 = (_QWORD *)*v11;
      v13 = (_QWORD *)*v11;
      v14 = (_QWORD *)v11[1];
      if ( v13[1] != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      v15 = *(_BYTE *)(v12 + 16);
      if ( v15 == 1 )
      {
        if ( !(unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
          goto LABEL_42;
      }
      else
      {
        if ( v15 != 2 )
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
          goto LABEL_42;
        }
        *(_BYTE *)(v12 + 17) = 5;
        v16 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)v12 = 0LL;
        __writecr8(2uLL);
        v25 = KeGetCurrentPrcb();
        CurrentThread = v25->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v18 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
          LOBYTE(a3) = v18;
          EtwTraceEnqueueWork(CurrentThread, v12, a3);
        }
        v19 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v16, 7u) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v19);
          }
          while ( (*(_DWORD *)v16 & 0x80u) != 0 );
        }
        if ( *(_QWORD *)(v16 + 16) == v16 + 8
          || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v25, v16, v12) )
        {
          ++*(_DWORD *)(v16 + 4);
          v20 = *(__int64 **)(v16 + 32);
          *(_QWORD *)v12 = v16 + 24;
          *(_QWORD *)(v12 + 8) = v20;
          if ( *v20 != v16 + 24 )
            __fastfail(3u);
          *v20 = v12;
          *(_QWORD *)(v16 + 32) = v12;
        }
        _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      }
      if ( (*((_DWORD *)v8 + 3))-- == 1 )
        break;
LABEL_42:
      v11 = v26;
      v10 = v8 + 4;
      CurrentPrcb = (struct _KPRCB *)v24;
    }
    _InterlockedAnd(v8 + 2, 0xFFFFFF7F);
    ++v31;
    v3 = v27;
    if ( v27 )
    {
      CurrentPrcb = (struct _KPRCB *)v24;
      continue;
    }
    break;
  }
  if ( (v30 & 1) != 0 )
  {
    v22 = KiRemoveBoostThread(v24, *(_QWORD *)(v24 + 8));
    if ( a2 )
    {
      v6 = 2;
      if ( v22 > (char)a2 )
        a2 = v22;
    }
  }
  KiExitDispatcher(v24, 0, v6, a2, CurrentIrql);
  v5 = v31;
  *a1 = 0LL;
  return v5;
}

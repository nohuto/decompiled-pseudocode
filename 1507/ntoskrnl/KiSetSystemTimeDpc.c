/*
 * XREFs of KiSetSystemTimeDpc @ 0x1401549C4
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140017E74 (RtlGetSystemTimePrecise.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 *     KeAdjustInterruptTime @ 0x14014C7D0 (KeAdjustInterruptTime.c)
 *     KiAdjustTimerDueTimes @ 0x140154CC0 (KiAdjustTimerDueTimes.c)
 *     KiUpdateSystemTime @ 0x140155160 (KiUpdateSystemTime.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceReadyThread @ 0x14025D4F0 (EtwTraceReadyThread.c)
 */

char __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  volatile signed __int32 v9; // eax
  unsigned int v10; // esi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 p_TimerTable; // r15
  LARGE_INTEGER *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebp
  signed __int32 v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ebp
  struct _SINGLE_LIST_ENTRY *Next; // r14
  __int64 v27; // rbp
  __int64 *v28; // rbx
  __int64 *v29; // r12
  volatile signed __int32 *v30; // rdi
  unsigned int v31; // r15d
  __int64 *v32; // rcx
  __int64 **v33; // rax

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v9 = *(_DWORD *)a4;
    v10 = 0;
    while ( (v9 & 0x80000000) != v8 )
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
      v9 = *(_DWORD *)a4;
    }
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
      p_TimerTable = KiProcessorBlock[0] + 13824;
    else
      p_TimerTable = 0LL;
  }
  else
  {
    p_TimerTable = (__int64)&CurrentPrcb->TimerTable;
  }
  if ( CurrentPrcb->ClockOwner )
  {
    v13 = *(LARGE_INTEGER **)(v6 + 16);
    *v13 = RtlGetSystemTimePrecise();
    v14 = **(_QWORD **)(v6 + 8);
    v15 = *(_QWORD **)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v14;
    v16 = v14 - *v15;
    v17 = *(_DWORD *)(v6 + 4);
    *(_QWORD *)(v6 + 24) = v16;
    if ( (v17 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v16, (v17 & 2) != 0) )
      {
        v18 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v18;
      }
    }
    else
    {
      KiUpdateSystemTime(v16, 0LL, v17);
    }
  }
  v19 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( 1 )
    {
      v21 = *(_DWORD *)a4 & 0x80000000;
      if ( v21 == v20 )
        break;
      if ( (++v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v22);
    }
  }
  else
  {
    v21 = v20 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = v21;
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( p_TimerTable )
      KiAdjustTimerDueTimes(CurrentPrcb, p_TimerTable, v6);
    v23 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v24 = ~v23 & 0x80000000;
    if ( (v23 & 0x7FFFFFFF) != 0 )
    {
      v25 = 0;
      while ( 1 )
      {
        v21 = *(_DWORD *)a4 & 0x80000000;
        if ( v21 == v24 )
          break;
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
    }
    else
    {
      v21 = v24 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = v21;
    }
  }
  _InterlockedDecrement(a3);
  Next = CurrentPrcb->DeferredReadyListHead.Next;
  if ( Next )
  {
    CurrentPrcb->DeferredReadyListHead.Next = 0LL;
    do
    {
      v27 = (__int64)&Next[-27];
      Next = Next->Next;
      v28 = *(__int64 **)(v27 + 208);
      v29 = &v28[6 * *(unsigned __int8 *)(v27 + 587)];
      do
      {
        if ( *((unsigned __int8 *)v28 + 17) < 5u )
        {
          v30 = (volatile signed __int32 *)v28[4];
          v31 = 0;
          while ( _interlockedbittestandset(v30, 7u) )
          {
            do
            {
              if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v31);
            }
            while ( (*v30 & 0x80u) != 0 );
          }
          if ( *((_BYTE *)v28 + 17) == 4 )
          {
            v32 = (__int64 *)*v28;
            v33 = (__int64 **)v28[1];
            if ( *(__int64 **)(*v28 + 8) != v28 || *v33 != v28 )
              __fastfail(3u);
            *v33 = v32;
            v32[1] = (__int64)v33;
          }
          _InterlockedAnd(v30, 0xFFFFFF7F);
        }
        v28 += 6;
      }
      while ( v28 != v29 );
      *(_WORD *)(v27 + 566) = 1;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      {
        LOBYTE(a2) = 1;
        EtwTraceReadyThread(v27, a2, 0LL, 0LL);
      }
      LOBYTE(v21) = KiReadyThread((__int64)CurrentPrcb, v27);
    }
    while ( Next );
  }
  if ( CurrentPrcb->NextThread )
  {
    LOBYTE(v21) = CurrentPrcb->DpcRoutineActive;
    if ( !(_BYTE)v21 )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CurrentPrcb->InterruptRequest = 1;
      }
      else
      {
        LOBYTE(a1) = 2;
        LOBYTE(v21) = HalRequestSoftwareInterrupt(a1);
      }
    }
  }
  return v21;
}

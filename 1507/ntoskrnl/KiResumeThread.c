/*
 * XREFs of KiResumeThread @ 0x14000E65C
 * Callers:
 *     KiThawSingleThread @ 0x14000A190 (KiThawSingleThread.c)
 *     KeResumeThread @ 0x14000C8A4 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiSignalThread @ 0x14000D8F0 (KiSignalThread.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiComputeDueTime @ 0x140066AA0 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  char v4; // bp
  __int64 v5; // r14
  unsigned int v7; // edi
  _QWORD *v8; // rax
  char v9; // dl
  unsigned __int8 v10; // r13
  unsigned __int8 v11; // r15
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r14d
  __int64 *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // edi
  unsigned int v19; // ecx
  unsigned __int8 v20; // r8
  bool v21; // zf
  _QWORD *v22; // rsi
  _QWORD *v23; // r15
  _QWORD *v24; // rdi
  char v25; // al
  __int64 v26; // r8
  __int64 v27; // rbx
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  char v30; // al
  unsigned int v31; // ebp
  _QWORD *v32; // rcx
  int v34; // [rsp+70h] [rbp+8h] BYREF
  __int64 v35; // [rsp+78h] [rbp+10h]

  v35 = a2;
  v3 = 1;
  v4 = a3;
  *(_DWORD *)(a1 + 740) = 1;
  v5 = a2;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v7);
        v3 = 1;
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  LOBYTE(v8) = *(_BYTE *)(a1 + 388);
  if ( (_BYTE)v8 != 5 )
    goto LABEL_61;
  v9 = *(_BYTE *)(a1 + 112);
  LOBYTE(v8) = v9 & 7;
  if ( (v9 & 7) != 4 )
    goto LABEL_61;
  if ( v4 )
    goto LABEL_60;
  v10 = 0;
  v11 = 0;
  *(_BYTE *)(a1 + 112) = v9 & 0xF8 | 5;
  *(_QWORD *)(a1 + 64) = 0LL;
  v12 = *(unsigned __int8 *)(a1 + 587);
  if ( !*(_BYTE *)(a1 + 587) )
    goto LABEL_30;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 208) + 48LL * v11;
    if ( *(_BYTE *)(v13 + 17) == 6 )
      break;
LABEL_25:
    if ( ++v11 >= v12 )
      goto LABEL_29;
  }
  v14 = *(_QWORD *)(v13 + 32);
  v15 = 0;
  *(_BYTE *)(v13 + 17) = 4;
  while ( _interlockedbittestandset((volatile signed __int32 *)v14, 7u) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v15);
        v3 = 1;
      }
    }
    while ( (*(_DWORD *)v14 & 0x80u) != 0 );
  }
  if ( *(int *)(v14 + 4) <= 0 && (*(_BYTE *)v14 & 0x7F) != 2 )
  {
    v16 = *(__int64 **)(v14 + 16);
    *(_QWORD *)v13 = v14 + 8;
    *(_QWORD *)(v13 + 8) = v16;
    if ( *v16 != v14 + 8 )
      __fastfail(3u);
    *v16 = v13;
    *(_QWORD *)(v14 + 16) = v13;
    _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
    goto LABEL_25;
  }
  _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
  *(_BYTE *)(v13 + 17) = 5;
  v4 = 1;
LABEL_29:
  v5 = v35;
LABEL_30:
  if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v4 )
  {
    v17 = *(_QWORD *)(a1 + 280);
    *(_DWORD *)(a1 + 256) |= 0x40000080u;
    if ( (unsigned int)KiComputeDueTime(a1 + 256, v17, 0LL, &v34) )
    {
      v10 = v3;
      if ( (unsigned __int8)KiInsertTimerTable(v5, (int)a1 + 256, 0, v34, 0LL) )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          LOBYTE(a3) = 1;
          KiTraceSetTimer(a1 + 256, 0LL, a3);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
        }
      }
      else
      {
        KiTimerWaitTest(v5, a1 + 256, 0LL);
      }
      v3 = 1;
    }
    else
    {
      v4 = v3;
    }
  }
  v18 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      v18 += v3;
      if ( (v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v18);
        v3 = 1;
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_BYTE *)(a1 + 112);
  LOBYTE(v8) = v9 & 0xE7;
  v19 = (*(_DWORD *)(a1 + 116) ^ (*(_DWORD *)(a1 + 116) ^ (v10 << 9)) & 0x200) & 0xFFFDFFFF;
  *(_DWORD *)(a1 + 116) = v19;
  if ( (v9 & 0xE7) == 5 )
  {
    v20 = *(_BYTE *)(a1 + 391);
    if ( ((unsigned __int8)v3 & (unsigned __int8)(v19 >> 4)) != 0 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 391);
      if ( *(_BYTE *)((char)v20 + a1 + 114) )
        goto LABEL_49;
      if ( v20 )
      {
        v8 = (_QWORD *)(a1 + 168);
        if ( (_QWORD *)*v8 != v8 )
          goto LABEL_49;
      }
      v21 = *(_BYTE *)(a1 + 114) == 0;
    }
    else
    {
      v21 = (v20 & *(_BYTE *)(a1 + 194)) == 0;
      LOBYTE(v8) = *(_BYTE *)(a1 + 391);
    }
    if ( !v21 )
      goto LABEL_49;
    if ( *(_BYTE *)(a1 + 643) == 37 )
    {
      LOBYTE(v8) = *(_BYTE *)(a1 + 120) & 8;
      if ( (_BYTE)v8 )
        v4 = v3;
    }
  }
  else
  {
LABEL_49:
    v4 = v3;
  }
LABEL_60:
  *(_BYTE *)(a1 + 112) = v3 | v9 & 0xF9;
LABEL_61:
  if ( v4 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
    {
      LOBYTE(v8) = KiSignalThreadForApc(v5, a1 + 648, 2);
      goto LABEL_66;
    }
    LOBYTE(v8) = *(_BYTE *)(a1 + 388);
    if ( (_BYTE)v8 == 5 )
    {
      LOBYTE(v8) = KiSignalThread(v5, a1, 256LL, 0LL);
LABEL_66:
      v3 = 1;
    }
  }
  v22 = (_QWORD *)(a1 + 744);
  *(_QWORD *)(a1 + 64) = 0LL;
  v23 = *(_QWORD **)(a1 + 744);
  if ( v23 != (_QWORD *)(a1 + 744) )
  {
    while ( 2 )
    {
      v24 = v23;
      v23 = (_QWORD *)*v23;
      v25 = *((_BYTE *)v24 + 16);
      if ( v25 == (_BYTE)v3 )
      {
        v26 = *((unsigned __int16 *)v24 + 9);
        goto LABEL_93;
      }
      if ( v25 == 2 )
      {
        *((_BYTE *)v24 + 17) = 5;
        v27 = v24[3];
        *v24 = 0LL;
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          if ( CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number )
            v30 = v3;
          else
            v30 = 0;
          LOBYTE(a3) = v30;
          EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v24, a3);
          v3 = 1;
        }
        v31 = 0;
        while ( _interlockedbittestandset((volatile signed __int32 *)v27, 7u) )
        {
          do
          {
            v31 += v3;
            if ( (v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            {
              _mm_pause();
            }
            else
            {
              HvlNotifyLongSpinWait(v31);
              v3 = 1;
            }
          }
          while ( (*(_DWORD *)v27 & 0x80u) != 0 );
        }
        if ( *(_QWORD *)(v27 + 16) == v27 + 8
          || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15
          || (LOBYTE(v8) = KiWakeQueueWaiter(CurrentPrcb, v27, v24), !(_BYTE)v8) )
        {
          ++*(_DWORD *)(v27 + 4);
          LOBYTE(v8) = v27 + 24;
          v32 = *(_QWORD **)(v27 + 32);
          *v24 = v27 + 24;
          v24[1] = v32;
          if ( *v32 != v27 + 24 )
            __fastfail(3u);
          *v32 = v24;
          *(_QWORD *)(v27 + 32) = v24;
        }
        _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
        v5 = v35;
      }
      else
      {
        v26 = 256LL;
LABEL_93:
        LOBYTE(v8) = KiTryUnwaitThread(v5, v24, v26, 0LL);
      }
      if ( v23 == v22 )
        break;
      v3 = 1;
      continue;
    }
  }
  v22[1] = v22;
  *v22 = v22;
  return (char)v8;
}

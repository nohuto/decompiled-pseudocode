/*
 * XREFs of KiTimerWaitTest @ 0x1400A40F0
 * Callers:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140066890 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiAdjustTimerDueTimes @ 0x140154CC0 (KiAdjustTimerDueTimes.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r10
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  BOOL v7; // esi
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // r9d
  _QWORD *v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdi
  struct _KPRCB *v20; // r13
  _KTHREAD *v21; // rbp
  bool v22; // al
  unsigned int v23; // ebx
  __int64 *v24; // rcx
  _QWORD *v25; // r12
  _QWORD *v26; // r13
  __int64 v27; // r15
  char v28; // al
  __int64 v29; // rbp
  unsigned int v30; // ebx
  __int64 v31; // rsi
  char v32; // al
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // ebx
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // rdi
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  bool v43; // al
  unsigned int v44; // ebx
  __int64 *v45; // rcx
  __int64 *v46; // rdx
  unsigned __int64 v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+40h] [rbp-68h] BYREF
  int v50; // [rsp+48h] [rbp-60h]
  unsigned __int8 v54; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v54 = -1;
  v4 = a2;
  v5 = *(int *)(a2 + 60);
  v6 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  v48 = v6;
  v7 = (*(_BYTE *)a2 & 0x7F) == 8;
  if ( (_DWORD)v5 )
  {
    v8 = -10000 * v5;
    v54 = 0;
    if ( *(_BYTE *)(v3 + 11754) )
    {
      if ( ++*(_DWORD *)(v3 + 23336) >= 0xBB8u )
      {
        v9 = *(_DWORD *)(v3 + 23340);
        *(_DWORD *)(v3 + 23336) = 0;
        if ( v9 < 0x5F5E100 )
          *(_DWORD *)(v3 + 23340) = KeTimeIncrement + v9;
      }
      v8 -= *(unsigned int *)(v3 + 23340);
    }
    if ( v8 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v10 = 0LL;
    v50 = *(_DWORD *)a2;
    if ( (v50 & 0xFC00) != 0 )
      v10 = (unsigned __int8)(BYTE1(v50) & 0xFC) << 16;
    BYTE1(v50) &= ~1u;
    HIBYTE(v50) = 64;
    do
    {
      *(_QWORD *)(v4 + 24) -= v8;
      BYTE2(v50) = (unsigned __int64)(v10 + *(_QWORD *)(v4 + 24)) >> 18;
      v11 = BYTE2(v50);
      *(_DWORD *)v4 = v50;
    }
    while ( !KiInsertTimerTable(a1, v4, v6, v11, 0LL) );
    v3 = a1;
  }
  *(_DWORD *)(v4 + 4) = 1;
  if ( v7 )
  {
    v25 = *(_QWORD **)(v4 + 8);
    v26 = (_QWORD *)(v4 + 8);
    if ( v25 != (_QWORD *)(v4 + 8) )
    {
      while ( 1 )
      {
        v27 = (__int64)v25;
        v25 = (_QWORD *)*v25;
        v28 = *(_BYTE *)(v27 + 16);
        if ( v28 == 1 )
        {
          v29 = *(unsigned __int16 *)(v27 + 18);
          v30 = 0;
          v31 = *(_QWORD *)(v27 + 24);
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 64), 0LL) )
          {
            do
            {
              if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v30);
            }
            while ( *(_QWORD *)(v31 + 64) );
          }
          if ( *(_BYTE *)(v31 + 388) == 5 )
          {
            v32 = *(_BYTE *)(v31 + 112);
            v33 = v32 & 7;
            if ( v33 == 1 || v33 == 4 )
            {
              v34 = *(_QWORD *)(v31 + 232);
              if ( v34 )
              {
                if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
                {
                  v35 = (unsigned __int8)*(_DWORD *)(v31 + 540);
                  *(_DWORD *)(v31 + 540) = v35;
                  _InterlockedIncrement((volatile signed __int32 *)(v34 + 4 * v35 + 536));
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
                }
              }
              v36 = *(_QWORD *)(v31 + 712);
              if ( v36 )
              {
                v37 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 22672), 0LL) )
                {
                  do
                  {
                    if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v37);
                  }
                  while ( *(_QWORD *)(v36 + 22672) );
                }
                if ( *(_QWORD *)(v31 + 712) )
                {
                  v38 = *(_QWORD *)(v31 + 216);
                  v39 = *(_QWORD **)(v31 + 224);
                  if ( *(_QWORD *)(v38 + 8) != v31 + 216 || *v39 != v31 + 216 )
                    __fastfail(3u);
                  *v39 = v38;
                  *(_QWORD *)(v38 + 8) = v39;
                  *(_QWORD *)(v31 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v36 + 22672), 0LL);
              }
              *(_BYTE *)(v31 + 388) = 7;
              *(_QWORD *)(v31 + 216) = *(_QWORD *)(a1 + 11400);
              *(_QWORD *)(a1 + 11400) = v31 + 216;
              *(_QWORD *)(v31 + 200) = v29;
            }
            else if ( (*(_BYTE *)(v31 + 112) & 7) != 0 )
            {
              if ( v33 == 5 )
              {
                *(_BYTE *)(v31 + 112) = v32 & 0xF8 | 6;
              }
              else if ( v33 == 3 )
              {
                *(_BYTE *)(v27 + 17) = 2;
              }
            }
            else
            {
              *(_BYTE *)(v31 + 112) = v32 & 0xF8 | 2;
              *(_QWORD *)(v31 + 200) = v29;
              *(_BYTE *)(v27 + 17) = 0;
            }
          }
          *(_QWORD *)(v31 + 64) = 0LL;
          ++*(_BYTE *)(v27 + 17);
        }
        else if ( v28 == 2 )
        {
          *(_BYTE *)(v27 + 17) = 5;
          v40 = *(_QWORD *)(v27 + 24);
          *(_QWORD *)v27 = 0LL;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v43 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, v27, v43);
          }
          v44 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v40, 7u) )
          {
            do
            {
              if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v44);
            }
            while ( (*(_DWORD *)v40 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v40, 7u) );
          }
          if ( *(_QWORD *)(v40 + 16) == v40 + 8
            || *(_DWORD *)(v40 + 40) >= *(_DWORD *)(v40 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v40 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)CurrentPrcb, v40, v27) )
          {
            ++*(_DWORD *)(v40 + 4);
            v45 = *(__int64 **)(v40 + 32);
            *(_QWORD *)v27 = v40 + 24;
            *(_QWORD *)(v27 + 8) = v45;
            if ( *v45 != v40 + 24 )
              __fastfail(3u);
            *v45 = v27;
            *(_QWORD *)(v40 + 32) = v27;
          }
          _InterlockedAnd((volatile signed __int32 *)v40, 0xFFFFFF7F);
        }
        else
        {
          KiTryUnwaitThread(v3, v27, 256LL, 0LL);
        }
        if ( v25 == v26 )
          break;
        v3 = a1;
      }
      v4 = a2;
    }
    v26[1] = v26;
    *v26 = v26;
LABEL_118:
    v6 = v48;
  }
  else
  {
    v12 = *(_QWORD **)(v4 + 8);
    v13 = (_QWORD *)(v4 + 8);
    if ( v12 != (_QWORD *)(v4 + 8) )
    {
      while ( 1 )
      {
        v14 = (__int64)v12;
        v12 = (_QWORD *)*v12;
        v15 = *(_QWORD *)v14;
        v16 = *(_QWORD **)(v14 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = *(_BYTE *)(v14 + 16);
        if ( v17 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v3, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v18 = (*(_DWORD *)(v4 + 4))-- == 1;
            if ( v18 )
              goto LABEL_118;
          }
        }
        else if ( v17 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v19 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          __writecr8(2uLL);
          v20 = KeGetCurrentPrcb();
          v21 = v20->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v22 = v21->WaitBlockFill6[68] == 2 && v21->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v20->CurrentThread, v14, v22);
          }
          v23 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v23);
            }
            while ( (*(_DWORD *)v19 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v19, 7u) );
          }
          if ( *(_QWORD *)(v19 + 16) == v19 + 8
            || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
            || v21->Queue == (_DISPATCHER_HEADER *volatile)v19 && v21->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v20, v19, v14) )
          {
            ++*(_DWORD *)(v19 + 4);
            v24 = *(__int64 **)(v19 + 32);
            *(_QWORD *)v14 = v19 + 24;
            *(_QWORD *)(v14 + 8) = v24;
            if ( *v24 != v19 + 24 )
              __fastfail(3u);
            *v24 = v14;
            *(_QWORD *)(v19 + 32) = v14;
          }
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
          v4 = a2;
          v18 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v18 )
            goto LABEL_118;
        }
        else
        {
          KiTryUnwaitThread(v3, v14, 256LL, 0LL);
        }
        if ( v12 == v13 )
          goto LABEL_118;
        v3 = a1;
      }
    }
  }
  if ( !v6 )
    goto LABEL_127;
  v46 = a3;
  if ( !a3 )
  {
    v46 = &v49;
    v49 = MEMORY[0xFFFFF78000000014];
LABEL_130:
    KiInsertQueueDpc(v6, *(_DWORD *)v46, *((_DWORD *)v46 + 1), v4, v54);
    return 0LL;
  }
  if ( KiSerializeTimerExpiration && *(_WORD *)(v6 + 2) >= 0x280u || *(_BYTE *)v6 == 26 && *(_BYTE *)(a1 + 11752) )
    goto LABEL_130;
  *(_QWORD *)(a1 + 11680) = v6;
  if ( (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v6 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(v6 + 16), *(unsigned __int8 *)(a1 + 1617));
LABEL_127:
  _InterlockedAnd((volatile signed __int32 *)v4, ~((v54 << 24) | 0x80));
  return v6;
}

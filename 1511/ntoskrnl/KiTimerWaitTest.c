/*
 * XREFs of KiTimerWaitTest @ 0x140045200
 * Callers:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140120638 (KiAdjustTimerDueTimes.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiIncrementConcurrencyCount @ 0x14008E774 (KiIncrementConcurrencyCount.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r13
  char v5; // al
  __int64 v6; // rcx
  ULONG_PTR v7; // r15
  BOOL v8; // esi
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  int v12; // r9d
  _QWORD **v13; // r12
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // al
  bool v20; // zf
  __int64 v21; // rdi
  struct _KPRCB *v22; // r15
  _KTHREAD *v23; // rsi
  unsigned __int8 v24; // al
  _QWORD *v25; // rcx
  _QWORD *v26; // r15
  _QWORD *v27; // r14
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rbx
  char v31; // al
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 *v35; // rcx
  __int64 v36; // rbx
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v40; // rcx
  unsigned int *v41; // rdx
  int v43; // [rsp+30h] [rbp-78h] BYREF
  int v44; // [rsp+34h] [rbp-74h] BYREF
  ULONG_PTR v45; // [rsp+38h] [rbp-70h]
  __int64 v46; // [rsp+40h] [rbp-68h] BYREF
  int v47; // [rsp+48h] [rbp-60h]
  unsigned __int8 v49; // [rsp+B8h] [rbp+10h]

  v3 = a1;
  v49 = -1;
  v4 = a2;
  v5 = *(_BYTE *)a2 & 0x7F;
  v6 = *(int *)(a2 + 60);
  v7 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  v45 = v7;
  v8 = v5 == 8;
  if ( (_DWORD)v6 )
  {
    v9 = -10000 * v6;
    v49 = 0;
    if ( *(_BYTE *)(v3 + 11754) )
    {
      if ( ++*(_DWORD *)(v3 + 23336) >= 0xBB8u )
      {
        v10 = *(_DWORD *)(v3 + 23340);
        *(_DWORD *)(v3 + 23336) = 0;
        if ( v10 < 0x5F5E100 )
          *(_DWORD *)(v3 + 23340) = KeTimeIncrement + v10;
      }
      v9 -= *(unsigned int *)(v3 + 23340);
    }
    if ( v9 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v11 = 0LL;
    v47 = *(_DWORD *)a2;
    if ( (v47 & 0xFC00) != 0 )
      v11 = (unsigned __int8)(BYTE1(v47) & 0xFC) << 16;
    BYTE1(v47) &= ~1u;
    HIBYTE(v47) = 64;
    do
    {
      *(_QWORD *)(v4 + 24) -= v9;
      BYTE2(v47) = (unsigned __int64)(v11 + *(_QWORD *)(v4 + 24)) >> 18;
      v12 = BYTE2(v47);
      *(_DWORD *)v4 = v47;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(a1, v4, v7, v12, 0LL) );
    v3 = a1;
  }
  v13 = (_QWORD **)(v4 + 8);
  *(_DWORD *)(v4 + 4) = 1;
  if ( v8 )
  {
    v26 = *v13;
    if ( *v13 != v13 )
    {
      while ( 1 )
      {
        v27 = v26;
        v26 = (_QWORD *)*v26;
        v28 = *((_BYTE *)v27 + 16);
        if ( v28 == 1 )
        {
          v29 = *((unsigned __int16 *)v27 + 9);
          v30 = v27[3];
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *(_QWORD *)(v30 + 64) );
          }
          if ( *(_BYTE *)(v30 + 388) == 5 )
          {
            v31 = *(_BYTE *)(v30 + 112);
            v32 = v31 & 7;
            if ( v32 == 1 || v32 == 4 )
            {
              v33 = *(_QWORD *)(v30 + 232);
              if ( v33 )
                KiIncrementConcurrencyCount(v33, v30);
              v34 = *(_QWORD *)(v30 + 712);
              if ( v34 )
              {
                v44 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 22672), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v44);
                  while ( *(_QWORD *)(v34 + 22672) );
                }
                if ( *(_QWORD *)(v30 + 712) )
                {
                  a2 = *(_QWORD *)(v30 + 216);
                  v35 = *(__int64 **)(v30 + 224);
                  if ( *(_QWORD *)(a2 + 8) != v30 + 216 || *v35 != v30 + 216 )
                    __fastfail(3u);
                  *v35 = a2;
                  *(_QWORD *)(a2 + 8) = v35;
                  *(_QWORD *)(v30 + 712) = 0LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v34 + 22672), 0LL);
              }
              *(_BYTE *)(v30 + 388) = 7;
              *(_QWORD *)(v30 + 216) = *(_QWORD *)(a1 + 11400);
              *(_QWORD *)(a1 + 11400) = v30 + 216;
              *(_QWORD *)(v30 + 200) = v29;
            }
            else if ( (*(_BYTE *)(v30 + 112) & 7) != 0 )
            {
              if ( v32 == 5 )
              {
                *(_BYTE *)(v30 + 112) = v31 & 0xF8 | 6;
              }
              else if ( v32 == 3 )
              {
                *((_BYTE *)v27 + 17) = 2;
              }
            }
            else
            {
              *(_BYTE *)(v30 + 112) = v31 & 0xF8 | 2;
              *(_QWORD *)(v30 + 200) = v29;
              *((_BYTE *)v27 + 17) = 0;
            }
          }
          *(_QWORD *)(v30 + 64) = 0LL;
          ++*((_BYTE *)v27 + 17);
        }
        else if ( v28 == 2 )
        {
          *((_BYTE *)v27 + 17) = 5;
          v36 = v27[3];
          *v27 = 0LL;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v27, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v36, a2, a3);
          if ( *(_QWORD *)(v36 + 16) == v36 + 8
            || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v36 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v36, v27) )
          {
            ++*(_DWORD *)(v36 + 4);
            v40 = *(_QWORD **)(v36 + 32);
            *v27 = v36 + 24;
            v27[1] = v40;
            if ( *v40 != v36 + 24 )
              __fastfail(3u);
            *v40 = v27;
            *(_QWORD *)(v36 + 32) = v27;
          }
          _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
        }
        else
        {
          KiTryUnwaitThread(v3, v27, 256LL, 0LL);
        }
        if ( v26 == v13 )
          break;
        v3 = a1;
      }
    }
    *(_QWORD *)(v4 + 16) = v4 + 8;
    *v13 = v13;
LABEL_85:
    v7 = v45;
  }
  else
  {
    v14 = *v13;
    if ( *v13 != v13 )
    {
      while ( 1 )
      {
        v15 = v14;
        v16 = 2LL;
        v14 = (_QWORD *)*v14;
        v17 = *v15;
        v18 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v18 != v15 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = *((_BYTE *)v15 + 16);
        if ( v19 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v3, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
          {
            v20 = (*(_DWORD *)(v4 + 4))-- == 1;
            if ( v20 )
              goto LABEL_85;
          }
        }
        else if ( v19 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          v21 = v15[3];
          *v15 = 0LL;
          __writecr8(2uLL);
          v22 = KeGetCurrentPrcb();
          v23 = v22->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v24 = KeIsThreadRunning(v22->CurrentThread);
            EtwTraceEnqueueWork(v23, v15, v24);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v21, v16, a3);
          if ( *(_QWORD *)(v21 + 16) == v21 + 8
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || v23->Queue == (_DISPATCHER_HEADER *volatile)v21 && v23->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v22, v21, v15) )
          {
            ++*(_DWORD *)(v21 + 4);
            v25 = *(_QWORD **)(v21 + 32);
            *v15 = v21 + 24;
            v15[1] = v25;
            if ( *v25 != v21 + 24 )
              __fastfail(3u);
            *v25 = v15;
            *(_QWORD *)(v21 + 32) = v15;
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v20 = (*(_DWORD *)(v4 + 4))-- == 1;
          if ( v20 )
            goto LABEL_85;
        }
        else
        {
          KiTryUnwaitThread(v3, v15, 256LL, 0LL);
        }
        if ( v14 == v13 )
          goto LABEL_85;
        v3 = a1;
      }
    }
  }
  if ( !v7 )
    goto LABEL_94;
  v41 = (unsigned int *)a3;
  if ( !a3 )
  {
    v41 = (unsigned int *)&v46;
    v46 = MEMORY[0xFFFFF78000000014];
LABEL_97:
    KiInsertQueueDpc(v7, *v41, v41[1], (volatile signed __int32 *)v4, v49);
    return 0LL;
  }
  if ( KiSerializeTimerExpiration && *(_WORD *)(v7 + 2) >= 0x280u || *(_BYTE *)v7 == 26 && *(_BYTE *)(a1 + 11752) )
    goto LABEL_97;
  *(_QWORD *)(a1 + 11680) = v7;
  if ( (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v7 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), *(unsigned __int8 *)(a1 + 1617));
LABEL_94:
  _InterlockedAnd((volatile signed __int32 *)v4, ~((v49 << 24) | 0x80));
  return v7;
}

/*
 * XREFs of KiTimerWaitTest @ 0x140058810
 * Callers:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140055D50 (KeSetTimerEx.c)
 *     KiRetireDpcList @ 0x140057E00 (KiRetireDpcList.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400C92C0 (KiResumeThread.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KiProcessExpiredTimerList @ 0x14010D420 (KiProcessExpiredTimerList.c)
 *     KiAdjustTimerDueTimes @ 0x14012AB84 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiIncrementConcurrencyCount @ 0x1400A2E90 (KiIncrementConcurrencyCount.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

ULONG_PTR __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  unsigned __int8 v8; // r15
  BOOL v9; // r14d
  _QWORD *v10; // rbx
  bool v11; // zf
  _QWORD *v12; // r14
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // ecx
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // r13
  char v20; // cl
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rcx
  _QWORD *v30; // rax
  char v31; // al
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  char v34; // al
  int v35; // r9d
  __int64 *v36; // r8
  _QWORD *v37; // rdx
  _QWORD *v38; // r13
  volatile signed __int32 *v39; // rcx
  unsigned int v40; // ecx
  unsigned __int8 v41; // al
  __int64 v42; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v44; // rdx
  __int64 v45; // r9
  int v46; // r9d
  _QWORD *v47; // r8
  __int64 v48; // [rsp+30h] [rbp-88h]
  __int64 v49; // [rsp+30h] [rbp-88h]
  __int64 v50; // [rsp+38h] [rbp-80h]
  __int64 v51; // [rsp+38h] [rbp-80h]
  __int64 v52; // [rsp+40h] [rbp-78h]
  struct _KPRCB *v53; // [rsp+40h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-78h]
  _KTHREAD *v55; // [rsp+48h] [rbp-70h]
  _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  int v57; // [rsp+60h] [rbp-58h]
  int v58; // [rsp+C8h] [rbp+10h] BYREF
  int v59; // [rsp+D8h] [rbp+20h] BYREF

  v5 = *(int *)(a2 + 60);
  v6 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(a2 + 48), KiWaitNever));
  v8 = -1;
  v9 = (*(_BYTE *)a2 & 0x7F) == 8;
  if ( (_DWORD)v5 )
  {
    v8 = 0;
    v14 = -10000 * v5;
    if ( *(_BYTE *)(a1 + 11754) )
    {
      if ( ++*(_DWORD *)(a1 + 23336) >= 0xBB8u )
      {
        v40 = *(_DWORD *)(a1 + 23340);
        *(_DWORD *)(a1 + 23336) = 0;
        if ( v40 < 0x5F5E100 )
          *(_DWORD *)(a1 + 23340) = KeTimeIncrement + v40;
      }
      v14 -= *(unsigned int *)(a1 + 23340);
    }
    if ( v14 + MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v15 = 0LL;
    v57 = *(_DWORD *)a2;
    v16 = *(int *)a2 >> 8;
    if ( (*(_DWORD *)a2 & 0xFC00) != 0 )
      v15 = (unsigned __int8)(v16 & 0xFC) << 16;
    HIBYTE(v57) = 64;
    BYTE1(v57) = v16 & 0xFE;
    do
    {
      *(_QWORD *)(a2 + 24) -= v14;
      BYTE2(v57) = (unsigned __int64)(v15 + *(_QWORD *)(a2 + 24)) >> 18;
      *(_DWORD *)a2 = v57;
    }
    while ( !(unsigned __int8)KiInsertTimerTable(a1, a2, v6, BYTE2(v57), 0LL) );
  }
  v10 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  v11 = !v9;
  v12 = *(_QWORD **)(a2 + 8);
  if ( !v11 )
  {
    if ( v12 == v10 )
    {
LABEL_4:
      v10[1] = v10;
      *v10 = v10;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v17 = (__int64)v12;
      v12 = (_QWORD *)*v12;
      v48 = v17;
      v18 = *(_BYTE *)(v17 + 16);
      if ( v18 != 1 )
      {
        if ( v18 != 2 )
        {
          KiTryUnwaitThread(a1, v17, 256LL, 0LL);
          goto LABEL_40;
        }
        *(_BYTE *)(v17 + 17) = 5;
        v51 = *(_QWORD *)(v17 + 24);
        *(_QWORD *)v17 = 0LL;
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(v45, v44, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v51);
        v37 = (_QWORD *)(v51 + 8);
        if ( (_QWORD *)*v37 == v37
          || *(_DWORD *)(v51 + 40) >= *(_DWORD *)(v51 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v51 && CurrentThread->WaitReason == 15 )
        {
          v38 = (_QWORD *)v48;
          goto LABEL_97;
        }
        v38 = (_QWORD *)v48;
        if ( (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v51, v48) )
        {
LABEL_73:
          v39 = (volatile signed __int32 *)v51;
        }
        else
        {
          v37 = (_QWORD *)(v51 + 8);
LABEL_97:
          v39 = (volatile signed __int32 *)v51;
          v46 = *(_DWORD *)(v51 + 4);
          *(_DWORD *)(v51 + 4) = v46 + 1;
          v47 = *(_QWORD **)(v51 + 32);
          if ( *v47 != v51 + 24 )
            __fastfail(3u);
          *v38 = v51 + 24;
          v38[1] = v47;
          *v47 = v38;
          *(_QWORD *)(v51 + 32) = v38;
          if ( !v46 && (_QWORD *)*v37 != v37 )
          {
            KiWakeOtherQueueWaiters(CurrentPrcb, v51);
            goto LABEL_73;
          }
        }
        _InterlockedAnd(v39, 0xFFFFFF7F);
        goto LABEL_40;
      }
      v19 = *(_QWORD *)(v17 + 24);
      v50 = *(unsigned __int16 *)(v17 + 18);
      v58 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(_QWORD *)(v19 + 64) );
      }
      if ( *(_BYTE *)(v19 + 388) == 5 )
      {
        v20 = *(_BYTE *)(v19 + 112);
        v21 = v20 & 7;
        if ( v21 == 1 || v21 == 4 )
        {
          v22 = *(_QWORD *)(v19 + 232);
          if ( v22 )
            KiIncrementConcurrencyCount(v22, v19);
          v23 = *(_QWORD *)(v19 + 712);
          v52 = v23;
          if ( v23 )
          {
            v59 = 0;
            v24 = v23;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 22672), 0LL) )
            {
              do
                KeYieldProcessorEx(&v59);
              while ( *(_QWORD *)(v24 + 22672) );
            }
            v10 = (_QWORD *)(a2 + 8);
            if ( *(_QWORD *)(v19 + 712) )
            {
              v25 = *(_QWORD *)(v19 + 216);
              v26 = *(_QWORD **)(v19 + 224);
              if ( *(_QWORD *)(v25 + 8) != v19 + 216 || *v26 != v19 + 216 )
                __fastfail(3u);
              *v26 = v25;
              *(_QWORD *)(v25 + 8) = v26;
              *(_QWORD *)(v19 + 712) = 0LL;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v52 + 22672), 0LL);
          }
          *(_BYTE *)(v19 + 388) = 7;
          *(_QWORD *)(v19 + 216) = *(_QWORD *)(a1 + 11400);
          *(_QWORD *)(a1 + 11400) = v19 + 216;
          *(_QWORD *)(v19 + 200) = v50;
        }
        else
        {
          if ( (*(_BYTE *)(v19 + 112) & 7) == 0 )
          {
            v27 = v48;
            *(_BYTE *)(v19 + 112) = v20 & 0xF8 | 2;
            *(_QWORD *)(v19 + 200) = v50;
            *(_BYTE *)(v48 + 17) = 0;
            goto LABEL_39;
          }
          if ( v21 == 5 )
          {
            *(_BYTE *)(v19 + 112) = v20 & 0xF8 | 6;
          }
          else if ( v21 == 3 )
          {
            v27 = v48;
            *(_BYTE *)(v48 + 17) = 2;
            goto LABEL_39;
          }
        }
      }
      v27 = v48;
LABEL_39:
      *(_QWORD *)(v19 + 64) = 0LL;
      ++*(_BYTE *)(v27 + 17);
LABEL_40:
      if ( v12 == v10 )
        goto LABEL_4;
    }
  }
  while ( v12 != v10 )
  {
    v28 = (__int64)v12;
    v12 = (_QWORD *)*v12;
    v29 = *(_QWORD *)v28;
    v30 = *(_QWORD **)(v28 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 || *v30 != v28 )
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    v31 = *(_BYTE *)(v28 + 16);
    if ( v31 == 1 )
    {
      if ( (unsigned __int8)KiTryUnwaitThread(a1, v28, *(unsigned __int16 *)(v28 + 18), 0LL) )
      {
        v11 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v11 )
          break;
      }
    }
    else
    {
      if ( v31 == 2 )
      {
        *(_BYTE *)(v28 + 17) = 5;
        v49 = *(_QWORD *)(v28 + 24);
        *(_QWORD *)v28 = 0LL;
        __writecr8(2uLL);
        v53 = KeGetCurrentPrcb();
        v55 = v53->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v41 = KeIsThreadRunning(v53->CurrentThread);
          EtwTraceEnqueueWork(v42, v28, v41);
        }
        KiAcquireKobjectLockSafe(v49);
        v32 = (_QWORD *)(v49 + 8);
        v33 = v49;
        if ( (_QWORD *)*v32 == v32
          || *(_DWORD *)(v49 + 40) >= *(_DWORD *)(v49 + 44)
          || v55->Queue == (_DISPATCHER_HEADER *volatile)v49 && v55->WaitReason == 15 )
        {
LABEL_62:
          v35 = *(_DWORD *)(v33 + 4);
          *(_DWORD *)(v33 + 4) = v35 + 1;
          v36 = *(__int64 **)(v33 + 32);
          if ( *v36 != v33 + 24 )
            __fastfail(3u);
          *(_QWORD *)v28 = v33 + 24;
          *(_QWORD *)(v28 + 8) = v36;
          *v36 = v28;
          *(_QWORD *)(v33 + 32) = v28;
          if ( !v35 && (_QWORD *)*v32 != v32 )
          {
            KiWakeOtherQueueWaiters(v53, v33);
            v33 = v49;
          }
        }
        else
        {
          v34 = KiWakeQueueWaiter(v53, v49, v28);
          v33 = v49;
          if ( !v34 )
          {
            v32 = (_QWORD *)(v49 + 8);
            goto LABEL_62;
          }
        }
        _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
        v11 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v11 )
          break;
        continue;
      }
      KiTryUnwaitThread(a1, v28, 256LL, 0LL);
    }
  }
LABEL_5:
  if ( v6 )
  {
    if ( !a3
      || KiSerializeTimerExpiration && *(_WORD *)(v6 + 2) >= 0x280u
      || *(_BYTE *)v6 == 26 && *(_BYTE *)(a1 + 11752) )
    {
      KiInsertQueueDpc(v6, v8);
      return 0LL;
    }
    *(_QWORD *)(a1 + 11680) = v6;
    if ( (*(_QWORD *)(a1 + 1608) & *(_QWORD *)(v6 + 16)) == 0LL )
      _interlockedbittestandset64((volatile signed __int32 *)(v6 + 16), *(unsigned __int8 *)(a1 + 1617));
  }
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v8 << 24) | 0x80));
  return v6;
}

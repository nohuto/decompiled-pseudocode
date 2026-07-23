/*
 * XREFs of KiResumeThread @ 0x1400C92C0
 * Callers:
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x1400C5400 (KiThawSingleThread.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiComputeDueTime @ 0x140057B20 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     KiTestForAlertPending @ 0x1400AD508 (KiTestForAlertPending.c)
 *     KiSignalThreadForApc @ 0x1400C7FD4 (KiSignalThreadForApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  unsigned __int8 v9; // r13
  unsigned __int8 v10; // bp
  unsigned int i; // r15d
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 *v14; // rcx
  char v15; // al
  unsigned int v16; // ecx
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  _QWORD *v23; // rbp
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v26; // r8
  int v27; // ecx
  __int64 *v28; // rdx
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  int v31; // [rsp+80h] [rbp+18h] BYREF
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v31 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v31);
    while ( *(_QWORD *)(a1 + 64) );
  }
  LOBYTE(v6) = *(_BYTE *)(a1 + 388);
  if ( (_BYTE)v6 == 5 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 112) & 7;
    if ( (_BYTE)v6 == 4 )
    {
      if ( !a3 )
      {
        v9 = 0;
        v10 = 0;
        *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
        *(_QWORD *)(a1 + 64) = 0LL;
        for ( i = *(unsigned __int8 *)(a1 + 587); v10 < i; ++v10 )
        {
          v12 = *(_QWORD *)(a1 + 208) + 48LL * v10;
          if ( *(_BYTE *)(v12 + 17) == 6 )
          {
            v13 = *(_QWORD *)(v12 + 32);
            *(_BYTE *)(v12 + 17) = 4;
            KiAcquireKobjectLockSafe(v13);
            if ( *(int *)(v13 + 4) > 0 || (*(_BYTE *)v13 & 0x7F) == 2 )
            {
              _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
              *(_BYTE *)(v12 + 17) = 5;
              a3 = 1;
              break;
            }
            v14 = *(__int64 **)(v13 + 16);
            if ( *v14 != v13 + 8 )
              __fastfail(3u);
            *(_QWORD *)v12 = v13 + 8;
            *(_QWORD *)(v12 + 8) = v14;
            *v14 = v12;
            *(_QWORD *)(v13 + 16) = v12;
            _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
          }
        }
        if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !a3 )
        {
          v20 = *(_QWORD *)(a1 + 280);
          *(_DWORD *)(a1 + 256) |= 0x40000080u;
          if ( (unsigned int)KiComputeDueTime((int *)(a1 + 256), v20, 0, &v30) )
          {
            v9 = 1;
            if ( KiInsertTimerTable(a2, a1 + 256, 0LL, v30, 0LL) )
            {
              if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
              {
                LOBYTE(v21) = 1;
                KiTraceSetTimer(a1 + 256, 0LL, v21);
              }
              else
              {
                _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
              }
            }
            else
            {
              KiTimerWaitTest(a2, a1 + 256, 0LL);
            }
          }
          else
          {
            a3 = 1;
          }
        }
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v32);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v15 = *(_BYTE *)(a1 + 112) & 0xE7;
        v16 = (*(_DWORD *)(a1 + 116) ^ (*(_DWORD *)(a1 + 116) ^ (v9 << 9)) & 0x200) & 0xFFFDFFFF;
        *(_DWORD *)(a1 + 116) = v16;
        if ( v15 != 5 || (unsigned int)KiTestForAlertPending(a1, (v16 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
        {
          a3 = 1;
        }
        else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 8) != 0 )
        {
          a3 = 1;
        }
      }
      LOBYTE(v6) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
      *(_BYTE *)(a1 + 112) = v6;
    }
  }
  if ( a3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0 )
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v6 == 5 )
        LOBYTE(v6) = KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(v6) = KiSignalThreadForApc(a2, a1 + 648, 2);
    }
  }
  v7 = (_QWORD *)(a1 + 744);
  *(_QWORD *)(a1 + 64) = 0LL;
  v8 = *(_QWORD **)(a1 + 744);
  if ( v8 != (_QWORD *)(a1 + 744) )
  {
    do
    {
      v17 = (__int64)v8;
      v8 = (_QWORD *)*v8;
      v18 = *(_BYTE *)(v17 + 16);
      if ( v18 == 1 )
      {
        v19 = *(unsigned __int16 *)(v17 + 18);
      }
      else
      {
        if ( v18 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v22 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          v23 = (_QWORD *)(v22 + 8);
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v26) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v17, v26);
          }
          KiAcquireKobjectLockSafe(v22);
          if ( (_QWORD *)*v23 == v23
            || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v22 && CurrentThread->WaitReason == 15
            || (LOBYTE(v6) = KiWakeQueueWaiter(CurrentPrcb, v22, v17), !(_BYTE)v6) )
          {
            v27 = *(_DWORD *)(v22 + 4);
            *(_DWORD *)(v22 + 4) = v27 + 1;
            v6 = v22 + 24;
            v28 = *(__int64 **)(v22 + 32);
            if ( *v28 != v22 + 24 )
              __fastfail(3u);
            *(_QWORD *)v17 = v6;
            *(_QWORD *)(v17 + 8) = v28;
            *v28 = v17;
            *(_QWORD *)(v22 + 32) = v17;
            if ( !v27 && (_QWORD *)*v23 != v23 )
              LOBYTE(v6) = KiWakeOtherQueueWaiters(CurrentPrcb, v22);
          }
          _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
          continue;
        }
        v19 = 256LL;
      }
      LOBYTE(v6) = KiTryUnwaitThread(a2, v17, v19, 0LL);
    }
    while ( v8 != v7 );
  }
  v7[1] = v7;
  *v7 = v7;
  return v6;
}

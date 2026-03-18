/*
 * XREFs of KiResumeThread @ 0x140028CF8
 * Callers:
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     KiThawSingleThread @ 0x140095E5C (KiThawSingleThread.c)
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 * Callees:
 *     KiTestForAlertPending @ 0x14002A034 (KiTestForAlertPending.c)
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiSignalThread @ 0x14007A4E0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v4; // r12
  char result; // al
  unsigned __int8 v7; // r13
  unsigned __int8 v8; // bp
  unsigned int i; // r15d
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  unsigned int v15; // ecx
  _QWORD *v16; // rsi
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v24; // r8
  _QWORD *v25; // rcx
  int v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v3 = a3;
  v4 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v27);
    while ( *(_QWORD *)(a1 + 64) );
  }
  result = *(_BYTE *)(a1 + 388);
  if ( result == 5 )
  {
    result = *(_BYTE *)(a1 + 112) & 7;
    if ( result == 4 )
    {
      if ( !v3 )
      {
        v7 = 0;
        v8 = 0;
        *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
        *(_QWORD *)(a1 + 64) = 0LL;
        for ( i = *(unsigned __int8 *)(a1 + 587); v8 < i; ++v8 )
        {
          v10 = *(_QWORD *)(a1 + 208) + 48LL * v8;
          if ( *(_BYTE *)(v10 + 17) == 6 )
          {
            v11 = *(_QWORD *)(v10 + 32);
            *(_BYTE *)(v10 + 17) = 4;
            KiAcquireKobjectLockSafe(v11);
            if ( *(int *)(v11 + 4) > 0 || (*(_BYTE *)v11 & 0x7F) == 2 )
            {
              _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
              *(_BYTE *)(v10 + 17) = 5;
              v3 = 1;
              break;
            }
            v12 = *(__int64 **)(v11 + 16);
            *(_QWORD *)v10 = v11 + 8;
            *(_QWORD *)(v10 + 8) = v12;
            if ( *v12 != v11 + 8 )
              __fastfail(3u);
            *v12 = v10;
            *(_QWORD *)(v11 + 16) = v10;
            _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
          }
        }
        if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v3 )
        {
          v13 = *(_QWORD *)(a1 + 280);
          *(_DWORD *)(a1 + 256) |= 0x40000080u;
          if ( (unsigned int)KiComputeDueTime(a1 + 256, v13, 0LL, &v26) )
          {
            v7 = 1;
            if ( (unsigned __int8)KiInsertTimerTable(v4, (int)a1 + 256, 0, v26, 0LL) )
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
              KiTimerWaitTest(v4, a1 + 256, 0LL);
            }
          }
          else
          {
            v3 = 1;
          }
        }
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v28);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v14 = *(_BYTE *)(a1 + 112) & 0xE7;
        v15 = (*(_DWORD *)(a1 + 116) ^ (*(_DWORD *)(a1 + 116) ^ (v7 << 9)) & 0x200) & 0xFFFDFFFF;
        *(_DWORD *)(a1 + 116) = v15;
        if ( v14 != 5
          || (LOBYTE(a3) = *(_BYTE *)(a1 + 391),
              LOBYTE(a2) = (v15 & 0x10) != 0,
              (unsigned int)KiTestForAlertPending(a1, a2, a3, 0LL)) )
        {
          v3 = 1;
        }
        else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 8) != 0 )
        {
          v3 = 1;
        }
      }
      result = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
      *(_BYTE *)(a1 + 112) = result;
    }
  }
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0 )
    {
      result = *(_BYTE *)(a1 + 388);
      if ( result == 5 )
        result = KiSignalThread(v4, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      result = KiSignalThreadForApc(v4, a1 + 648, a3);
    }
  }
  v16 = (_QWORD *)(a1 + 744);
  *(_QWORD *)(a1 + 64) = 0LL;
  v17 = *(_QWORD **)(a1 + 744);
  if ( v17 != (_QWORD *)(a1 + 744) )
  {
    do
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
      v19 = *((_BYTE *)v18 + 16);
      if ( v19 == 1 )
      {
        v20 = *((unsigned __int16 *)v18 + 9);
      }
      else
      {
        if ( v19 == 2 )
        {
          *((_BYTE *)v18 + 17) = 5;
          v21 = v18[3];
          *v18 = 0LL;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v24) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v18, v24);
          }
          KiAcquireKobjectLockSafe(v21);
          if ( *(_QWORD *)(v21 + 16) == v21 + 8
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
            || (result = KiWakeQueueWaiter(CurrentPrcb, v21, v18)) == 0 )
          {
            ++*(_DWORD *)(v21 + 4);
            result = v21 + 24;
            v25 = *(_QWORD **)(v21 + 32);
            *v18 = v21 + 24;
            v18[1] = v25;
            if ( *v25 != v21 + 24 )
              __fastfail(3u);
            *v25 = v18;
            *(_QWORD *)(v21 + 32) = v18;
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          continue;
        }
        v20 = 256LL;
      }
      result = KiTryUnwaitThread(v4, v18, v20, 0LL);
    }
    while ( v17 != v16 );
  }
  v16[1] = v16;
  *v16 = v16;
  return result;
}

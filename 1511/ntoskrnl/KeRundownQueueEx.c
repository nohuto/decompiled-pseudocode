/*
 * XREFs of KeRundownQueueEx @ 0x1400DF520
 * Callers:
 *     KeRundownQueue @ 0x1400DF498 (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1400DF4A0 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x140435A20 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x14061B3D4 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DF7A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  _QWORD **v4; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // rcx
  _QWORD *v12; // r14
  volatile signed __int32 *v13; // rsi
  __int64 *v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rsi
  char v18; // al
  __int64 v19; // r8
  __int64 v20; // rbp
  struct _KPRCB *v21; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v23; // r8
  __int64 *v24; // rcx
  struct _KPRCB *v26; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+80h] [rbp+8h] BYREF
  char v28; // [rsp+88h] [rbp+10h]
  __int64 v29; // [rsp+90h] [rbp+18h]
  struct _KPRCB *v30; // [rsp+98h] [rbp+20h]

  v28 = a2;
  v3 = a2;
  v4 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  v9 = (_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 24);
  v29 = v10;
  if ( v10 == a1 + 24 )
  {
    v29 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v11 = *(__int64 **)(a1 + 32);
    if ( *(_QWORD **)(v10 + 8) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v9 = v9;
  }
  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  if ( v3 )
  {
    v12 = *v4;
    while ( v12 != v4 )
    {
      v13 = (volatile signed __int32 *)(v12 - 65);
      v12 = (_QWORD *)*v12;
      v8 = *((_QWORD *)v13 + 65);
      v14 = (__int64 *)*((_QWORD *)v13 + 66);
      if ( *(volatile signed __int32 **)(v8 + 8) != v13 + 130 || (volatile signed __int32 *)*v14 != v13 + 130 )
        __fastfail(3u);
      v27 = 0;
      *v14 = v8;
      *(_QWORD *)(v8 + 8) = v14;
      while ( _interlockedbittestandset64(v13 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v27, v8, v10);
        while ( *((_QWORD *)v13 + 8) );
      }
      *((_QWORD *)v13 + 29) = 0LL;
      *((_QWORD *)v13 + 8) = 0LL;
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  v15 = (_QWORD *)(a1 + 8);
  v16 = *(_QWORD **)(a1 + 8);
  if ( v16 != (_QWORD *)(a1 + 8) )
  {
    do
    {
      v17 = (__int64)v16;
      v16 = (_QWORD *)*v16;
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
          v20 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          __writecr8(2uLL);
          v21 = KeGetCurrentPrcb();
          v30 = v21;
          CurrentThread = v21->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v23) = KeIsThreadRunning(v21->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v17, v23);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v20, v8, v10);
          if ( *(_QWORD *)(v20 + 16) == v20 + 8
            || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v20 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v30, v20, v17) )
          {
            ++*(_DWORD *)(v20 + 4);
            v24 = *(__int64 **)(v20 + 32);
            *(_QWORD *)v17 = v20 + 24;
            *(_QWORD *)(v17 + 8) = v24;
            if ( *v24 != v20 + 24 )
              __fastfail(3u);
            *v24 = v17;
            *(_QWORD *)(v20 + 32) = v17;
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          CurrentPrcb = v26;
          continue;
        }
        v19 = 256LL;
      }
      KiTryUnwaitThread((__int64)CurrentPrcb, v17, v19, 0LL);
    }
    while ( v16 != v15 );
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v15 = v15;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v28 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v29;
}

/*
 * XREFs of KeRundownQueueEx @ 0x1400F49A8
 * Callers:
 *     KeRundownQueue @ 0x1400B25EC (KeRundownQueue.c)
 *     IopDeleteIoCompletionInternal @ 0x1400F4808 (IopDeleteIoCompletionInternal.c)
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 *     KeUnInitializeUmsThread @ 0x1406507C8 (KeUnInitializeUmsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400F4EDC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeRundownQueueEx(__int64 a1, char a2)
{
  _QWORD **v3; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r14
  _QWORD *v11; // r15
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rbp
  _QWORD *v16; // r12
  struct _KPRCB *v17; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v19; // r13
  _QWORD *v20; // rcx
  volatile signed __int32 *v21; // rsi
  __int64 v22; // rdx
  volatile signed __int32 **v23; // rcx
  int v24; // r8d
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  struct _KPRCB *v28; // [rsp+30h] [rbp-48h]
  unsigned __int8 v29; // [rsp+38h] [rbp-40h]
  int v30; // [rsp+80h] [rbp+8h] BYREF
  char v31; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v32; // [rsp+90h] [rbp+18h]
  __int64 v33; // [rsp+98h] [rbp+20h]

  v31 = a2;
  v3 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  v29 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v7 = (_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 24);
  v33 = v8;
  if ( v8 == a1 + 24 )
  {
    v33 = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v20 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v8 + 8) != v7 || (_QWORD *)*v20 != v7 )
      __fastfail(3u);
    *v20 = v8;
    *(_QWORD *)(v8 + 8) = v20;
    *(_QWORD *)(a1 + 32) = a1 + 24;
    *v7 = v7;
  }
  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  if ( a2 )
  {
    v9 = *v3;
    while ( v9 != v3 )
    {
      v21 = (volatile signed __int32 *)(v9 - 65);
      v9 = (_QWORD *)*v9;
      v22 = *((_QWORD *)v21 + 65);
      v23 = (volatile signed __int32 **)*((_QWORD *)v21 + 66);
      if ( *(volatile signed __int32 **)(v22 + 8) != v21 + 130 || *v23 != v21 + 130 )
        __fastfail(3u);
      v30 = 0;
      *v23 = (volatile signed __int32 *)v22;
      *(_QWORD *)(v22 + 8) = v23;
      while ( _interlockedbittestandset64(v21 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v30);
        while ( *((_QWORD *)v21 + 8) );
      }
      *((_QWORD *)v21 + 29) = 0LL;
      *((_QWORD *)v21 + 8) = 0LL;
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v11 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v13 = (__int64)v11;
      v11 = (_QWORD *)*v11;
      v14 = *(_BYTE *)(v13 + 16);
      if ( v14 == 1 )
      {
        v26 = *(unsigned __int16 *)(v13 + 18);
LABEL_42:
        KiTryUnwaitThread((__int64)CurrentPrcb, v13, v26, 0LL);
        goto LABEL_20;
      }
      if ( v14 != 2 )
      {
        v26 = 256LL;
        goto LABEL_42;
      }
      *(_BYTE *)(v13 + 17) = 5;
      v15 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)v13 = 0LL;
      v16 = (_QWORD *)(v15 + 8);
      __writecr8(2uLL);
      v17 = KeGetCurrentPrcb();
      v32 = v17;
      CurrentThread = v17->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v27) = KeIsThreadRunning(v17->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v13, v27);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
      if ( (_QWORD *)*v16 == v16
        || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
      {
        break;
      }
      v19 = (__int64)v32;
      if ( !KiWakeQueueWaiter((__int64)v32, v15, v13) )
        goto LABEL_31;
LABEL_19:
      _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
      CurrentPrcb = v28;
LABEL_20:
      if ( v11 == v10 )
      {
        CurrentIrql = v29;
        goto LABEL_8;
      }
    }
    v19 = (__int64)v32;
LABEL_31:
    v24 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 4) = v24 + 1;
    v25 = *(__int64 **)(v15 + 32);
    if ( *v25 != v15 + 24 )
      __fastfail(3u);
    *(_QWORD *)v13 = v15 + 24;
    *(_QWORD *)(v13 + 8) = v25;
    *v25 = v13;
    *(_QWORD *)(v15 + 32) = v13;
    if ( !v24 && (_QWORD *)*v16 != v16 )
      KiWakeOtherQueueWaiters(v19, v15);
    goto LABEL_19;
  }
LABEL_8:
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v10 = v10;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v31 )
    KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v33;
}

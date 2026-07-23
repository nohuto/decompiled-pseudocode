/*
 * XREFs of KeSetProcess @ 0x140074F94
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // r15
  struct _KPRCB *v11; // r12
  _KTHREAD *CurrentThread; // r13
  int v13; // r8d
  __int64 *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v17; // [rsp+78h] [rbp+10h]
  unsigned __int8 CurrentIrql; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v17 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 8);
  v16 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v4 != v3 )
  {
    v6 = (__int64)v4;
    v4 = (_QWORD *)*v4;
    v7 = *(_BYTE *)(v6 + 16);
    if ( v7 == 1 )
    {
      v8 = *(unsigned __int16 *)(v6 + 18);
      goto LABEL_6;
    }
    if ( v7 == 2 )
    {
      *(_BYTE *)(v6 + 17) = 5;
      v9 = *(_QWORD *)(v6 + 24);
      *(_QWORD *)v6 = 0LL;
      v10 = (_QWORD *)(v9 + 8);
      __writecr8(2uLL);
      v11 = KeGetCurrentPrcb();
      CurrentThread = v11->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v15) = KeIsThreadRunning(v11->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v6, v15);
      }
      KiAcquireKobjectLockSafe(v9);
      if ( (_QWORD *)*v10 == v10
        || *(_DWORD *)(v9 + 40) >= *(_DWORD *)(v9 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v9 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v11, v9, v6) )
      {
        v13 = *(_DWORD *)(v9 + 4);
        *(_DWORD *)(v9 + 4) = v13 + 1;
        v14 = *(__int64 **)(v9 + 32);
        if ( *v14 != v9 + 24 )
          __fastfail(3u);
        *(_QWORD *)v6 = v9 + 24;
        *(_QWORD *)(v6 + 8) = v14;
        *v14 = v6;
        *(_QWORD *)(v9 + 32) = v6;
        if ( !v13 && (_QWORD *)*v10 != v10 )
          KiWakeOtherQueueWaiters(v11, v9);
      }
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      CurrentPrcb = v17;
    }
    else
    {
      v8 = 256LL;
LABEL_6:
      KiTryUnwaitThread((__int64)CurrentPrcb, v6, v8, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v3 = v3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v16;
}

/*
 * XREFs of KeSetProcess @ 0x14001BFCC
 * Callers:
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v3; // rsi
  _QWORD *v4; // r14
  _QWORD *v6; // rbx
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // rdi
  struct _KPRCB *v10; // rax
  _KTHREAD *CurrentThread; // r15
  _QWORD *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v15; // [rsp+78h] [rbp+10h]
  char CurrentIrql; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 8);
  v14 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v4 != v3 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    v7 = *((_BYTE *)v6 + 16);
    if ( v7 == 1 )
    {
      v8 = *((unsigned __int16 *)v6 + 9);
      goto LABEL_6;
    }
    if ( v7 == 2 )
    {
      *((_BYTE *)v6 + 17) = 5;
      v9 = v6[3];
      *v6 = 0LL;
      __writecr8(2uLL);
      v10 = KeGetCurrentPrcb();
      v15 = v10;
      CurrentThread = v10->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v13) = KeIsThreadRunning(v10->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v6, v13);
      }
      KiAcquireKobjectLockSafe(v9);
      if ( *(_QWORD *)(v9 + 16) == v9 + 8
        || *(_DWORD *)(v9 + 40) >= *(_DWORD *)(v9 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v9 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v15, v9, v6) )
      {
        ++*(_DWORD *)(v9 + 4);
        v12 = *(_QWORD **)(v9 + 32);
        *v6 = v9 + 24;
        v6[1] = v12;
        if ( *v12 != v9 + 24 )
          __fastfail(3u);
        *v12 = v6;
        *(_QWORD *)(v9 + 32) = v6;
      }
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
    }
    else
    {
      v8 = 256LL;
LABEL_6:
      KiTryUnwaitThread(CurrentPrcb, v6, v8, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v3 = v3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v14;
}

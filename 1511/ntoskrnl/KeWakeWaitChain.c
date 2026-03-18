/*
 * XREFs of KeWakeWaitChain @ 0x1400CFA54
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(_QWORD **a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // esi
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  __int64 v18; // rdi
  struct _KPRCB *v19; // rax
  _KTHREAD *CurrentThread; // r12
  __int64 v21; // r8
  __int64 *v22; // rcx
  char v23; // al
  __int64 v24; // [rsp+30h] [rbp-58h]
  _QWORD *v25; // [rsp+38h] [rbp-50h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-48h]
  char v28; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v28 = a3;
  v3 = *a1;
  v4 = 0;
  v29 = 0;
  v5 = a2;
  v6 = 1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    do
    {
      v8 = v3;
      v3 = (_QWORD *)*v3;
      v9 = v8 + 1;
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v8 + 2, a2, a3);
      v10 = v8 + 2;
      *((_DWORD *)v8 + 3) = 1;
      v11 = (_QWORD *)v8[2];
      while ( v11 != v10 )
      {
        v12 = (__int64)v11;
        v25 = (_QWORD *)*v11;
        v13 = (_QWORD *)*v11;
        v14 = (_QWORD *)v11[1];
        if ( v13[1] != v12 || *v14 != v12 )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = v14;
        v15 = *(_BYTE *)(v12 + 16);
        if ( v15 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
          {
            v16 = (*((_DWORD *)v9 + 1))-- == 1;
            if ( v16 )
              break;
          }
        }
        else if ( v15 == 2 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          v18 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)v12 = 0LL;
          __writecr8(2uLL);
          v19 = KeGetCurrentPrcb();
          v24 = (__int64)v19;
          CurrentThread = v19->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v21) = KeIsThreadRunning(v19->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v12, v21);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v18, a2, a3);
          if ( *(_QWORD *)(v18 + 16) == v18 + 8
            || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter(v24, v18, v12) )
          {
            ++*(_DWORD *)(v18 + 4);
            v22 = *(__int64 **)(v18 + 32);
            *(_QWORD *)v12 = v18 + 24;
            *(_QWORD *)(v12 + 8) = v22;
            if ( *v22 != v18 + 24 )
              __fastfail(3u);
            *v22 = v12;
            *(_QWORD *)(v18 + 32) = v12;
          }
          _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
          v16 = (*((_DWORD *)v9 + 1))-- == 1;
          if ( v16 )
            break;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
        }
        v11 = v25;
        v10 = v9 + 1;
      }
      _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
      v4 = ++v29;
    }
    while ( v3 );
    if ( (v28 & 1) != 0 )
    {
      v23 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread, a3);
      if ( v5 )
      {
        v6 = 2;
        if ( v23 > (char)v5 )
          v5 = v23;
      }
    }
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, v6, v5, CurrentIrql);
    *a1 = 0LL;
  }
  return v4;
}

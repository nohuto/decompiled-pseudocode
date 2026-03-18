/*
 * XREFs of PpmCheckRun @ 0x140074B90
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

char __fastcall PpmCheckRun(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 (*v3)(void); // r8
  __int64 v4; // rbx
  int v5; // edi
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 *v11; // rsi
  REGHANDLE v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rcx
  __int64 **v15; // rax
  char v16; // al
  __int64 v17; // r13
  struct _KPRCB *v18; // rax
  _KTHREAD *CurrentThread; // r12
  unsigned __int8 IsThreadRunning; // al
  __int64 **v21; // rcx
  __int64 *v22; // r12
  __int64 *v23; // rsi
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // r15
  struct _KPRCB *v27; // rax
  _KTHREAD *v28; // r13
  unsigned __int8 v29; // al
  __int64 **v30; // rcx
  struct _KPRCB *v32; // [rsp+30h] [rbp-48h]
  struct _KPRCB *v33; // [rsp+30h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF

  v2 = PpmCheckPipelineIndex;
  v3 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
  if ( !v3 )
  {
LABEL_4:
    v4 = PpmPerfPolicyLock;
    PpmPerfPolicyLock = 0LL;
    if ( (dword_1402DDCE8 & 0x7F) != 0 )
    {
      v5 = 0;
    }
    else
    {
      if ( dword_1402DDCEC == 1 )
        goto LABEL_10;
      v5 = 1;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(&dword_1402DDCE8, a2, (__int64)v3);
    v10 = dword_1402DDCEC;
    dword_1402DDCEC = 1;
    if ( !v10 )
    {
      if ( !v5 )
      {
        v11 = (__int64 *)qword_1402DDCF0;
        if ( (__int64 *)qword_1402DDCF0 != &qword_1402DDCF0 )
        {
          while ( 1 )
          {
            v13 = v11;
            v11 = (__int64 *)*v11;
            v14 = *v13;
            v15 = (__int64 **)v13[1];
            if ( *(__int64 **)(*v13 + 8) != v13 || *v15 != v13 )
              __fastfail(3u);
            *v15 = (__int64 *)v14;
            *(_QWORD *)(v14 + 8) = v15;
            v16 = *((_BYTE *)v13 + 16);
            if ( v16 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v13, *((unsigned __int16 *)v13 + 9), 0LL) )
              {
                if ( !--dword_1402DDCEC )
                  goto LABEL_9;
              }
            }
            else if ( v16 == 2 )
            {
              *((_BYTE *)v13 + 17) = 5;
              v17 = v13[3];
              *v13 = 0LL;
              __writecr8(2uLL);
              v18 = KeGetCurrentPrcb();
              v32 = v18;
              CurrentThread = v18->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v18->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v13, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v17, v8, v9);
              if ( *(_QWORD *)(v17 + 16) == v17 + 8
                || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(v32, v17, v13) )
              {
                ++*(_DWORD *)(v17 + 4);
                v21 = *(__int64 ***)(v17 + 32);
                *v13 = v17 + 24;
                v13[1] = (__int64)v21;
                if ( *v21 != (__int64 *)(v17 + 24) )
                  __fastfail(3u);
                *v21 = v13;
                *(_QWORD *)(v17 + 32) = v13;
              }
              _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
              if ( !--dword_1402DDCEC )
                goto LABEL_9;
            }
            else
            {
              KiTryUnwaitThread(CurrentPrcb, v13, 256LL, 0LL);
            }
            if ( v11 == &qword_1402DDCF0 )
              goto LABEL_9;
          }
        }
        goto LABEL_9;
      }
      v22 = (__int64 *)qword_1402DDCF0;
      while ( v22 != &qword_1402DDCF0 )
      {
        v23 = v22;
        v22 = (__int64 *)*v22;
        v24 = *((_BYTE *)v23 + 16);
        if ( v24 == 1 )
        {
          v25 = *((unsigned __int16 *)v23 + 9);
        }
        else
        {
          if ( v24 == 2 )
          {
            *((_BYTE *)v23 + 17) = 5;
            v26 = v23[3];
            *v23 = 0LL;
            __writecr8(2uLL);
            v27 = KeGetCurrentPrcb();
            v33 = v27;
            v28 = v27->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v29 = KeIsThreadRunning(v27->CurrentThread);
              EtwTraceEnqueueWork(v28, v23, v29);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v26, v8, v9);
            if ( *(_QWORD *)(v26 + 16) == v26 + 8
              || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
              || v28->Queue == (_DISPATCHER_HEADER *volatile)v26 && v28->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(v33, v26, v23) )
            {
              ++*(_DWORD *)(v26 + 4);
              v30 = *(__int64 ***)(v26 + 32);
              *v23 = v26 + 24;
              v23[1] = (__int64)v30;
              if ( *v30 != (__int64 *)(v26 + 24) )
                __fastfail(3u);
              *v30 = v23;
              *(_QWORD *)(v26 + 32) = v23;
            }
            _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
            continue;
          }
          v25 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v23, v25, 0LL);
      }
      qword_1402DDCF8 = (__int64)&qword_1402DDCF0;
      qword_1402DDCF0 = (__int64)&qword_1402DDCF0;
    }
LABEL_9:
    _InterlockedAnd(&dword_1402DDCE8, 0xFFFFFF7F);
    LOBYTE(v2) = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
LABEL_10:
    if ( v4 )
      LOBYTE(v2) = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( PpmEtwRegistered )
    {
      v12 = PpmEtwHandle;
      LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
      if ( (_BYTE)v2 )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        LOBYTE(v2) = EtwWrite(v12, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
      }
    }
    return v2;
  }
  while ( 1 )
  {
    PpmCheckPipelineIndex = v2 + 1;
    LOBYTE(v2) = v3();
    if ( !(_BYTE)v2 )
      return v2;
    v2 = PpmCheckPipelineIndex;
    v3 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex);
    if ( !v3 )
      goto LABEL_4;
  }
}

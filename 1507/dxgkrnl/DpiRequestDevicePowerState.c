/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C0023518
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001A110 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C00239D0 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0129750 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x1C001B5AC (DxgkReportDevicePoweredOn.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00231B8 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0023230 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0023468 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C00238B0 (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelAsyncRequest @ 0x1C0028E50 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C0028EB4 (DpiSendAsyncResumeAdapterRequest.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v23; // rax
  int v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq(v7, &Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 2504), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 2672);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v10 = (_QWORD *)WdLogNewEntry5_WdPower();
    v10[3] = *(int *)(v3 + 2712);
    v10[4] = *(int *)(v3 + 2716);
    v10[5] = 0LL;
    WdLogEvent5_WdPower(v10);
    if ( *(_DWORD *)(v3 + 2584) == 1 && !*(_DWORD *)(v3 + 2712) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 3626LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 2716) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v3 + 2680), 1u);
    }
    v16 = *(_DWORD *)(v3 + 2712);
    if ( v16 == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( v16 != 2 )
      {
        if ( v16 == 3 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdPower();
          v19[3] = v3;
          v19[4] = 0LL;
          v19[5] = 0LL;
          WdLogEvent5_WdPower(v19);
          DpiSendAsyncResumeAdapterRequest(v3);
          v18 = 7LL;
        }
        else
        {
          if ( (unsigned int)(v16 - 4) > 1 )
            goto LABEL_22;
          v17 = (_QWORD *)WdLogNewEntry5_WdPower();
          v17[3] = v3;
          v17[4] = 0LL;
          v17[5] = 0LL;
          WdLogEvent5_WdPower(v17);
          DpiRequestDevicePowerIrp(v3, 1);
          v18 = 6LL;
        }
LABEL_21:
        DpiSetDevicePowerTransitionState(v3, v18);
LABEL_22:
        if ( (_DWORD)v4 != 2 )
        {
LABEL_25:
          p_LockHandle = &LockHandle;
          goto LABEL_41;
        }
LABEL_23:
        if ( *(_DWORD *)(v3 + 2712) != 6 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdPower();
          v21[3] = v3;
          v21[4] = *(int *)(v3 + 2712);
          v21[5] = 2LL;
          WdLogEvent5_WdPower(v21);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 2504));
        }
        goto LABEL_25;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdPower();
        v20[3] = v3;
        v20[4] = 0LL;
        v20[5] = 0LL;
        WdLogEvent5_WdPower(v20);
        goto LABEL_23;
      }
    }
    v18 = 0LL;
    goto LABEL_21;
  }
  KeAcquireInStackQueuedSpinLock(v9, &v30);
  v23 = (_QWORD *)WdLogNewEntry5_WdPower();
  v23[3] = *(int *)(v3 + 2712);
  v23[4] = *(int *)(v3 + 2716);
  v23[5] = 0LL;
  WdLogEvent5_WdPower(v23);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 2716) = 1;
  if ( !*(_DWORD *)(v3 + 2680) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 2716)) )
  {
    v24 = *(_DWORD *)(v3 + 2712);
    if ( v24 == 3 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdPower();
      v25[3] = v3;
      v25[4] = 0LL;
      v25[5] = 0LL;
      WdLogEvent5_WdPower(v25);
      DpiRequestDevicePowerIrp(v3, 4);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v24 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdPower();
      v26[3] = v3;
      v26[4] = 0LL;
      v26[5] = 0LL;
      WdLogEvent5_WdPower(v26);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v27 = (_QWORD *)(v3 + 2592);
      if ( !*(_QWORD *)(v3 + 2592) )
      {
        *(_DWORD *)(v3 + 2616) = 1;
        v28 = *(_QWORD **)(v3 + 2576);
        *v27 = v3 + 2568;
        *(_QWORD *)(v3 + 2600) = v28;
        if ( *v28 != v3 + 2568 )
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v3 + 2576) = v27;
        KeSetEvent((PRKEVENT)(v3 + 2536), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 2712) - 4) > 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &v30;
LABEL_41:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}

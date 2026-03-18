/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C00104C8
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0018970 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C0023510 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C012FDE8 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C000D038 (DpiSetDevicePowerTransitionState.c)
 *     DxgkReportDevicePoweredOn @ 0x1C001C05C (DxgkReportDevicePoweredOn.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00230B8 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0023130 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0023368 (DpiRequestDevicePowerIrp.c)
 *     DpiCancelAsyncRequest @ 0x1C0028A10 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C0028A74 (DpiSendAsyncResumeAdapterRequest.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  int v7; // ecx
  int v8; // r8d
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq(v7, (unsigned int)&Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 2544), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 2712);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v10 = (_QWORD *)WdLogNewEntry5_WdPower();
    v10[3] = *(int *)(v3 + 2776);
    v10[4] = *(int *)(v3 + 2780);
    v10[5] = 0LL;
    WdLogEvent5_WdPower(v10);
    if ( *(_DWORD *)(v3 + 2624) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 2776) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v12 + 24) = 3691LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 2780) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v3 + 2720), 1u);
    }
    v13 = *(_DWORD *)(v3 + 2776);
    if ( v13 == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( v13 != 2 )
      {
        if ( v13 == 3 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdPower();
          v16[3] = v3;
          v16[4] = 0LL;
          v16[5] = 0LL;
          WdLogEvent5_WdPower(v16);
          DpiSendAsyncResumeAdapterRequest(v3);
          v15 = 7;
        }
        else
        {
          if ( (unsigned int)(v13 - 4) > 1 )
            goto LABEL_23;
          v14 = (_QWORD *)WdLogNewEntry5_WdPower();
          v14[3] = v3;
          v14[4] = 0LL;
          v14[5] = 0LL;
          WdLogEvent5_WdPower(v14);
          DpiRequestDevicePowerIrp(v3, 1LL);
          v15 = 6;
        }
LABEL_22:
        DpiSetDevicePowerTransitionState(v3, v15);
LABEL_23:
        if ( (_DWORD)v4 != 2 )
        {
LABEL_26:
          p_LockHandle = &LockHandle;
          goto LABEL_43;
        }
LABEL_24:
        if ( *(_DWORD *)(v3 + 2776) != 6 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdPower();
          v18[3] = v3;
          v18[4] = *(int *)(v3 + 2776);
          v18[5] = 2LL;
          WdLogEvent5_WdPower(v18);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 2544));
        }
        goto LABEL_26;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdPower();
        v17[3] = v3;
        v17[4] = 0LL;
        v17[5] = 0LL;
        WdLogEvent5_WdPower(v17);
        goto LABEL_24;
      }
    }
    v15 = 0;
    goto LABEL_22;
  }
  KeAcquireInStackQueuedSpinLock(v9, &v27);
  v20 = (_QWORD *)WdLogNewEntry5_WdPower();
  v20[3] = *(int *)(v3 + 2776);
  v20[4] = *(int *)(v3 + 2780);
  v20[5] = 0LL;
  WdLogEvent5_WdPower(v20);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 2780) = 1;
  if ( !*(_DWORD *)(v3 + 2720) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 2780)) )
  {
    v21 = *(_DWORD *)(v3 + 2776);
    if ( v21 == 3 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdPower();
      v22[3] = v3;
      v22[4] = 0LL;
      v22[5] = 0LL;
      WdLogEvent5_WdPower(v22);
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v21 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdPower();
      v23[3] = v3;
      v23[4] = 0LL;
      v23[5] = 0LL;
      WdLogEvent5_WdPower(v23);
      DpiSetDevicePowerTransitionState(v3, 1);
      v24 = (_QWORD *)(v3 + 2632);
      if ( !*(_QWORD *)(v3 + 2632) )
      {
        *(_DWORD *)(v3 + 2656) = 1;
        v25 = *(_QWORD **)(v3 + 2616);
        *v24 = v3 + 2608;
        *(_QWORD *)(v3 + 2640) = v25;
        if ( *v25 != v3 + 2608 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v3 + 2616) = v24;
        KeSetEvent((PRKEVENT)(v3 + 2576), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 2776) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &v27;
LABEL_43:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}

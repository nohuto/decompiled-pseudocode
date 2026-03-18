/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C0010C28
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001CB44 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C002A060 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXXZ @ 0x1C0146B88 (-WakeUpAdapter@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DpiSetDevicePowerTransitionState @ 0x1C000D7FC (DpiSetDevicePowerTransitionState.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 *     DxgkReportDevicePoweredOn @ 0x1C001F444 (DxgkReportDevicePoweredOn.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0029BF8 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0029C8C (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0029EC4 (DpiRequestDevicePowerIrp.c)
 *     DpiCancelAsyncRequest @ 0x1C002FE78 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C002FEDC (DpiSendAsyncResumeAdapterRequest.c)
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
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pqq(v7, (unsigned int)&Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 3688), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 3864);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &v26);
    v17 = (_QWORD *)WdLogNewEntry5_WdPower();
    v17[3] = *(int *)(v3 + 3928);
    v17[4] = *(int *)(v3 + 3932);
    v17[5] = 0LL;
    WdLogEvent5_WdPower(v17);
    if ( *(_DWORD *)(v3 + 3768) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 3928) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v20 + 24) = 3773LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 3932) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 3872LL), 1u);
    }
    if ( *(_DWORD *)(v3 + 3928) == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 3928) != 2 )
      {
        if ( *(_DWORD *)(v3 + 3928) == 3 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdPower();
          v24[3] = v3;
          v24[4] = 0LL;
          v24[5] = 0LL;
          WdLogEvent5_WdPower(v24);
          DpiSendAsyncResumeAdapterRequest(v3);
          v16 = 7;
        }
        else
        {
          if ( *(_DWORD *)(v3 + 3928) != 4 )
          {
            if ( *(_DWORD *)(v3 + 3928) != 5 )
            {
LABEL_21:
              if ( (_DWORD)v4 != 2 )
              {
LABEL_22:
                p_LockHandle = &v26;
                goto LABEL_23;
              }
LABEL_34:
              if ( *(_DWORD *)(v3 + 3928) != 6 )
              {
                v23 = (_QWORD *)WdLogNewEntry5_WdPower();
                v23[3] = v3;
                v23[4] = *(int *)(v3 + 3928);
                v23[5] = 2LL;
                WdLogEvent5_WdPower(v23);
                DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3688));
              }
              goto LABEL_22;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
              Template_pqq(1, (unsigned int)&EventPowerRequestDuringD3, v19, *(_QWORD *)(v3 + 3688), 1, v4);
          }
          v15 = (_QWORD *)WdLogNewEntry5_WdPower();
          v15[3] = v3;
          v15[4] = 0LL;
          v15[5] = 0LL;
          WdLogEvent5_WdPower(v15);
          DpiRequestDevicePowerIrp(v3, 1LL);
          v16 = 6;
        }
LABEL_20:
        DpiSetDevicePowerTransitionState(v3, v16);
        goto LABEL_21;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdPower();
        v22[3] = v3;
        v22[4] = 0LL;
        v22[5] = 0LL;
        WdLogEvent5_WdPower(v22);
        goto LABEL_34;
      }
    }
    v16 = 0;
    goto LABEL_20;
  }
  KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
  v10 = (_QWORD *)WdLogNewEntry5_WdPower();
  v10[3] = *(int *)(v3 + 3928);
  v10[4] = *(int *)(v3 + 3932);
  v10[5] = 0LL;
  WdLogEvent5_WdPower(v10);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 3932) = 1;
  if ( !*(_DWORD *)(v3 + 3872) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 3932)) )
  {
    v11 = *(_DWORD *)(v3 + 3928);
    if ( v11 == 3 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdPower();
      v21[3] = v3;
      v21[4] = 0LL;
      v21[5] = 0LL;
      WdLogEvent5_WdPower(v21);
      DpiRequestDevicePowerIrp(v3, 4LL);
      DpiSetDevicePowerTransitionState(v3, 4);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v11 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdPower();
      v12[3] = v3;
      v12[4] = 0LL;
      v12[5] = 0LL;
      WdLogEvent5_WdPower(v12);
      DpiSetDevicePowerTransitionState(v3, 1);
      v13 = (_QWORD *)(v3 + 3776);
      if ( !*(_QWORD *)(v3 + 3776) )
      {
        *(_DWORD *)(v3 + 3800) = 1;
        v25 = *(_QWORD **)(v3 + 3760);
        if ( *v25 != v3 + 3752 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 3784) = v25;
        *v13 = v3 + 3752;
        *v25 = v13;
        *(_QWORD *)(v3 + 3760) = v13;
        KeSetEvent((PRKEVENT)(v3 + 3720), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 3928) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &LockHandle;
LABEL_23:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}

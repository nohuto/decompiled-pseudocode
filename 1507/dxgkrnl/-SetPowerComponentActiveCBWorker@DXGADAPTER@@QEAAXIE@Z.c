/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A838
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A748 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXIE@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A7D0 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0019C38 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0019F64 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EDF0 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  char v8; // r14
  char v9; // r15
  char v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+60h] [rbp-48h] BYREF

  v3 = a2;
  v4 = a3;
  if ( !*((_QWORD *)this + 252) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(this, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
  v6 = *((_QWORD *)this + 251) + 520 * v3;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
  {
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
    if ( *((_DWORD *)this + 672) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 387, &LockHandle);
      *(_BYTE *)(*(_QWORD *)(v6 + 512) + 240LL) = 1;
      if ( !*((_BYTE *)this + 3104) )
      {
        *((_BYTE *)this + 3104) = 1;
        DXGADAPTER::AcquireReference(this);
        KeSetTimer((PKTIMER)((char *)this + 2968), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 3032));
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  v8 = v4;
  v9 = 0;
  v10 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &v23);
  if ( (int)++*(_DWORD *)(v6 + 352) > 1 )
  {
LABEL_20:
    v9 = 1;
    goto LABEL_25;
  }
  v11 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v6 + 480);
  if ( !*(_BYTE *)(v6 + 360) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 318, &v21);
    v12 = v6 + 440;
    if ( !*(_QWORD *)(v6 + 440) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
      v15 = *(_QWORD *)(v6 + 496);
      if ( v11 < v15 )
        *(_QWORD *)(v6 + 472) = v15;
      v8 = 1;
      goto LABEL_25;
    }
    v13 = *(_QWORD *)v12;
    v14 = *(_QWORD **)(v6 + 448);
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)v12 = 0LL;
    if ( *((DXGADAPTER **)this + 312) == (DXGADAPTER *)((char *)this + 2496) )
    {
      KeCancelTimer((PKTIMER)this + 40);
      *((_BYTE *)this + 2445) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    if ( v11 > *(_QWORD *)(v6 + 496) )
      *(_QWORD *)(v6 + 472) = 0LL;
    goto LABEL_20;
  }
  v10 = 1;
  v8 = 0;
LABEL_25:
  KeReleaseInStackQueuedSpinLock(&v23);
  if ( v8 )
  {
    if ( v4 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v18[3] = 275LL;
        v18[4] = 20LL;
        v18[5] = this;
        v18[6] = 0LL;
        v18[7] = 0LL;
        WdLogEvent5_WdCriticalError(v18);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v16, (unsigned int)&Dxgk_ReportPowerComponentState, v17, (_DWORD)this, v3, 1);
      v19 = 1LL;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v16, (unsigned int)&Dxgk_ReportPowerComponentState, v17, (_DWORD)this, v3, 1);
      v19 = 0LL;
    }
    PoFxActivateComponent(*((_QWORD *)this + 252), (unsigned int)v3, v19);
    if ( v9 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v16, (unsigned int)&Dxgk_ReportPowerComponentState, v17, (_DWORD)this, v3, 0);
      PoFxIdleComponent(*((_QWORD *)this + 252), (unsigned int)v3, 0LL);
    }
  }
  if ( v10 )
  {
    DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v3, 0LL, 1);
    DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v3, 1, v20);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_xq(v16, &Dxgk_SetPowerComponentActiveCBEnd, v17, this, v3);
  }
}

/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C001ABEC
 * Callers:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z @ 0x1C001AB94 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z.c)
 *     DxgSetPowerComponentIdleCB @ 0x1C001D0E0 (DxgSetPowerComponentIdleCB.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0019C38 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0019F64 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C001A718 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EE38 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // r8d
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+48h] [rbp-20h] BYREF

  v4 = a2;
  if ( !*((_QWORD *)this + 252) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(this, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v5 = *((_QWORD *)this + 251) + 520 * v4;
  v6 = *(_QWORD *)(v5 + 512);
  if ( v6 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v5 + 352) <= 0 )
  {
    if ( *(_BYTE *)(v5 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0, v7);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1LL, 1);
      goto LABEL_28;
    }
    v10 = MEMORY[0xFFFFF78000000014];
    v11 = *(_QWORD *)(v5 + 472);
    *(_QWORD *)(v5 + 480) = MEMORY[0xFFFFF78000000014];
    if ( !v11 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v12, (unsigned int)&Dxgk_ReportPowerComponentState, v13, (_DWORD)this, v4, 0);
      PoFxIdleComponent(*((_QWORD *)this + 252), (unsigned int)v4, 0LL);
      goto LABEL_28;
    }
    *(_QWORD *)(v5 + 488) = v11 + v10;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 318, &v21);
    v14 = (__int64 *)*((_QWORD *)this + 313);
    v15 = (__int64 *)((char *)this + 2496);
    if ( v14 == (__int64 *)((char *)this + 2496) )
      goto LABEL_23;
    while ( *(_QWORD *)(v5 + 488) < v14[6] )
    {
      v14 = (__int64 *)v14[1];
      if ( v14 == v15 )
        goto LABEL_22;
    }
    v16 = *v14;
    v17 = v5 + 440;
    *(_QWORD *)(v5 + 440) = *v14;
    *(_QWORD *)(v5 + 448) = v14;
    if ( *(__int64 **)(v16 + 8) != v14 )
      __fastfail(3u);
    *(_QWORD *)(v16 + 8) = v17;
    *v14 = v17;
LABEL_22:
    if ( v14 == v15 )
    {
LABEL_23:
      v18 = *v15;
      v19 = v5 + 440;
      *(_QWORD *)(v5 + 440) = *v15;
      *(_QWORD *)(v5 + 448) = v15;
      if ( *(__int64 **)(v18 + 8) != v15 )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v19;
      *v15 = v19;
      DXGADAPTER::ScheduleComponentIdleListTimer(this, *(_QWORD *)(v5 + 472));
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_28:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_xq(v8, &Dxgk_SetPowerComponentIdleCBEnd, v9, this, v4);
  }
}

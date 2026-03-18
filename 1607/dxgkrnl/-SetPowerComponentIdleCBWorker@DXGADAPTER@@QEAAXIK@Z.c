/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0008B04
 * Callers:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0008CC8 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001E640 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00088B0 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010FA4 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001CB8C (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001D000 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     Template_pqq @ 0x1C001E8AC (Template_pqq.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  char *v13; // rax
  char *v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 272) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_xq(this, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 271) + 520 * v4;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v6 + 352) > 0 )
  {
LABEL_8:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(v6 + 360) )
  {
    v10 = MEMORY[0xFFFFF78000000014];
    v11 = *(_QWORD *)(v6 + 472);
    *(_QWORD *)(v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( !v11 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_pqq(v12, (unsigned int)&Dxgk_ReportPowerComponentState, v9, (_DWORD)this, v4, 0);
      v8 = *((_QWORD *)this + 272);
      if ( v8 )
        PoFxIdleComponent(v8, (unsigned int)v4, v3);
      goto LABEL_9;
    }
    *(_QWORD *)(v6 + 488) = v11 + v10;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 338, &v20);
    v13 = (char *)*((_QWORD *)this + 333);
    v14 = (char *)this + 2656;
    if ( v13 == (char *)this + 2656 )
      goto LABEL_31;
    while ( *(_QWORD *)(v6 + 488) < *((_QWORD *)v13 + 6) )
    {
      v13 = (char *)*((_QWORD *)v13 + 1);
      if ( v13 == v14 )
        goto LABEL_30;
    }
    v15 = *(_QWORD *)v13;
    v16 = (_QWORD *)(v6 + 440);
    if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v6 + 448) = v13;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)v13 = v16;
LABEL_30:
    if ( v13 == v14 )
    {
LABEL_31:
      v17 = *(_QWORD *)v14;
      v18 = (_QWORD *)(v6 + 440);
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v6 + 448) = v14;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *(_QWORD *)v14 = v18;
      DXGADAPTER::ScheduleComponentIdleListTimer(this, *(_QWORD *)(v6 + 472));
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
    goto LABEL_8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
  DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
LABEL_9:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_xq(v8, &Dxgk_SetPowerComponentIdleCBEnd, v9, this, v4);
  }
}

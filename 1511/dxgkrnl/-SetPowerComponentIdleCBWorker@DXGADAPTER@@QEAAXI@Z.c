/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C0002C94
 * Callers:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z @ 0x1C0002EC8 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001BA80 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00029A0 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010894 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00189B8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0018E84 (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // r8d
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-20h] BYREF

  v4 = a2;
  if ( !*((_QWORD *)this + 254) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_xq(this, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v5 = *((_QWORD *)this + 253) + 520 * v4;
  v6 = *(_QWORD *)(v5 + 512);
  if ( v6 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v5 + 352) <= 0 )
  {
    if ( *(_BYTE *)(v5 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
      goto LABEL_28;
    }
    v9 = MEMORY[0xFFFFF78000000014];
    v10 = *(_QWORD *)(v5 + 472);
    *(_QWORD *)(v5 + 480) = MEMORY[0xFFFFF78000000014];
    if ( !v10 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        Template_pqq(v11, (unsigned int)&Dxgk_ReportPowerComponentState, v12, (_DWORD)this, v4, 0);
      PoFxIdleComponent(*((_QWORD *)this + 254), (unsigned int)v4, 0LL);
      goto LABEL_28;
    }
    *(_QWORD *)(v5 + 488) = v10 + v9;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 320, &v20);
    v13 = (__int64 *)*((_QWORD *)this + 315);
    v14 = (__int64 *)((char *)this + 2512);
    if ( v13 == (__int64 *)((char *)this + 2512) )
      goto LABEL_23;
    while ( *(_QWORD *)(v5 + 488) < v13[6] )
    {
      v13 = (__int64 *)v13[1];
      if ( v13 == v14 )
        goto LABEL_22;
    }
    v15 = *v13;
    v16 = v5 + 440;
    *(_QWORD *)(v5 + 440) = *v13;
    *(_QWORD *)(v5 + 448) = v13;
    if ( *(__int64 **)(v15 + 8) != v13 )
      __fastfail(3u);
    *(_QWORD *)(v15 + 8) = v16;
    *v13 = v16;
LABEL_22:
    if ( v13 == v14 )
    {
LABEL_23:
      v17 = *v14;
      v18 = v5 + 440;
      *(_QWORD *)(v5 + 440) = *v14;
      *(_QWORD *)(v5 + 448) = v14;
      if ( *(__int64 **)(v17 + 8) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v17 + 8) = v18;
      *v14 = v18;
      DXGADAPTER::ScheduleComponentIdleListTimer(this, *(_QWORD *)(v5 + 472));
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_28:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      Template_xq(v7, &Dxgk_SetPowerComponentIdleCBEnd, v8, this, v4);
  }
}

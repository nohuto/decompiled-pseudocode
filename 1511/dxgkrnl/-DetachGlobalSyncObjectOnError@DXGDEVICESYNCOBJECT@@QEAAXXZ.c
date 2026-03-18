/*
 * XREFs of ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0152E7C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00068C4 (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(DXGSYNCOBJECT **this, __int64 a2, __int64 a3)
{
  DXGSYNCOBJECT *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  DXGSYNCOBJECT *v9; // rax

  DXGDEVICESYNCOBJECT::DestroyCoreState((DXGDEVICESYNCOBJECT *)this, a2, a3);
  if ( this[7] )
  {
    v4 = this[2];
    v5 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 72LL);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 8);
    else
      v6 = 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 424LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(this[4]);
    (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v7 + 8) + 928LL))(
      v6,
      MonitoredFenceStorage);
    this[7] = 0LL;
  }
  v9 = this[4];
  if ( v9 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v9 + 6);
    this[4] = 0LL;
  }
}

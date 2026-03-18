/*
 * XREFs of ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0177BE4
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C000A0CC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C008FCC4 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(DXGSYNCOBJECT **this)
{
  DXGSYNCOBJECT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  DXGSYNCOBJECT *v7; // rax

  DXGDEVICESYNCOBJECT::DestroyCoreState((DXGDEVICESYNCOBJECT *)this);
  if ( this[7] )
  {
    v2 = this[2];
    v3 = *(_QWORD *)(*((_QWORD *)v2 + 5) + 64LL);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 8);
    else
      v4 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)v2 + 2) + 400LL);
    MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(this[4]);
    (*(void (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v5 + 8) + 944LL))(
      v4,
      MonitoredFenceStorage);
    this[7] = 0LL;
  }
  v7 = this[4];
  if ( v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v7 + 6);
    this[4] = 0LL;
  }
}

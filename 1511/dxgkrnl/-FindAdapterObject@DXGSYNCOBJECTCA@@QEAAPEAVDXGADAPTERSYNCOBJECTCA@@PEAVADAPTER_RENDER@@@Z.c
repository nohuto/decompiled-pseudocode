/*
 * XREFs of ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C001FA40
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C0066680 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0077910 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0094C04 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00989D0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0150F48 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTERSYNCOBJECTCA *__fastcall DXGSYNCOBJECTCA::FindAdapterObject(
        DXGSYNCOBJECTCA *this,
        struct ADAPTER_RENDER *a2)
{
  DXGSYNCOBJECTCA *i; // rax

  for ( i = (DXGSYNCOBJECTCA *)*((_QWORD *)this + 30); ; i = *(DXGSYNCOBJECTCA **)i )
  {
    if ( i == (DXGSYNCOBJECTCA *)((char *)this + 240) )
      return 0LL;
    if ( !a2 || *((struct ADAPTER_RENDER **)i - 3) == a2 )
      break;
  }
  return (DXGSYNCOBJECTCA *)((char *)i - 40);
}

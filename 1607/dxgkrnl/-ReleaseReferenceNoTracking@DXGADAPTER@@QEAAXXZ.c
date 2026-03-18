/*
 * XREFs of ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C009FCAC (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00CD300 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C00D2320 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     DxgkReleaseAdapter @ 0x1C00E2F40 (DxgkReleaseAdapter.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01470C4 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0147588 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0149F44 (DxgkReleaseAdapterFdoReference.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::ReleaseReferenceNoTracking(DXGADAPTER *this)
{
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
}

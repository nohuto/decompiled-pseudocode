/*
 * XREFs of ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C54
 * Callers:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0023224 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0023264 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C002FFC0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D4B90 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D4CC4 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireShared(struct _ERESOURCE *this)
{
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(this, 1u);
}

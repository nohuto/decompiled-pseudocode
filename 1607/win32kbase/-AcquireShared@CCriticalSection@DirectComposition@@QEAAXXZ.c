/*
 * XREFs of ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1C0
 * Callers:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0018F60 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00191A4 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0041DA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C00423C0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00E3FA0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00E40CC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireShared(struct _ERESOURCE *this)
{
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(this, 1u);
}

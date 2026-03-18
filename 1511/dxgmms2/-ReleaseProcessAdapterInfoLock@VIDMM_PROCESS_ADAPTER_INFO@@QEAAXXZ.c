/*
 * XREFs of ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0014D3C
 * Callers:
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  ExReleasePushLockExclusiveEx((char *)this + 352, 0LL);
  KeLeaveCriticalRegion();
}

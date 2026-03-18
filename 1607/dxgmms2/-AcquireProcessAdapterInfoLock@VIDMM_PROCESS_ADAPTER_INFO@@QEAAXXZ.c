/*
 * XREFs of ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0010124
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 400, 0LL);
}

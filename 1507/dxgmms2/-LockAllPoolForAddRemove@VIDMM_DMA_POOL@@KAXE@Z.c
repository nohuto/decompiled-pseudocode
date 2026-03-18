/*
 * XREFs of ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0040D6C
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0040A50 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0059A28 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C005AC14 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::LockAllPoolForAddRemove(char a1)
{
  if ( a1 )
    ExAcquireResourceExclusiveLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
  else
    ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
}

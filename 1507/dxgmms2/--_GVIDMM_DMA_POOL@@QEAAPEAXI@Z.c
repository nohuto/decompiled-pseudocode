/*
 * XREFs of ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C000DFD4
 * Callers:
 *     VidMmDestoryDmaPool @ 0x1C000E600 (VidMmDestoryDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003B67C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C004B3E4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0059A28 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::`scalar deleting destructor'(VIDMM_DMA_POOL *this)
{
  VIDMM_DMA_POOL::~VIDMM_DMA_POOL(this);
  operator delete(this);
  return this;
}

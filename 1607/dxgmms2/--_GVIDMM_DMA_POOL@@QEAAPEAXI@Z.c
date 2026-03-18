/*
 * XREFs of ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C0012B58
 * Callers:
 *     VidMmDestoryDmaPool @ 0x1C0012A80 (VidMmDestoryDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006D96C (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0087FC8 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0069760 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::`scalar deleting destructor'(VIDMM_DMA_POOL *this)
{
  VIDMM_DMA_POOL::~VIDMM_DMA_POOL(this);
  operator delete(this);
  return this;
}

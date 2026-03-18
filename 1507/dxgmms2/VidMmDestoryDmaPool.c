/*
 * XREFs of VidMmDestoryDmaPool @ 0x1C000E600
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C000DFD4 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 */

VIDMM_DMA_POOL *__fastcall VidMmDestoryDmaPool(VIDMM_DMA_POOL *a1)
{
  VIDMM_DMA_POOL *result; // rax

  if ( a1 )
    return VIDMM_DMA_POOL::`scalar deleting destructor'(a1);
  return result;
}

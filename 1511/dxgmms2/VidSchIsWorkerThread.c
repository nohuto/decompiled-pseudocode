/*
 * XREFs of VidSchIsWorkerThread @ 0x1C0012180
 * Callers:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0052D30 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsWorkerThread(__int64 a1)
{
  return KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 128);
}

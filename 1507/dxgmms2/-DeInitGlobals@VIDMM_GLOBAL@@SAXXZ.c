/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C004C840
 * Callers:
 *     VidMmDeInitGlobals @ 0x1C000E5F0 (VidMmDeInitGlobals.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C000DF94 (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     McGenEventUnregister @ 0x1C000F34C (McGenEventUnregister.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  PREGHANDLE v0; // rcx

  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'(VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock )
  {
    ExDeleteResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    VIDMM_GLOBAL::_RotationHistory = 0LL;
    qword_1C00273D8 = 0LL;
  }
  EtwUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1C0027010 = 0;
  McGenEventUnregister(v0);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
}

/*
 * XREFs of ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B7D4
 * Callers:
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0053844 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059E78 (-PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::AddGlobalAllocReferenceToDmaBuffer(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // r10d

  if ( a3 )
  {
    v5 = a2;
    if ( (int)_VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + a2 + 143), a3) < 0 )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v6, 1, 0LL, 0LL, 0);
      _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(*((_VIDMM_DMA_BUFFER **)this + v5 + 143), a3);
    }
  }
}

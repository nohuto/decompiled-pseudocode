/*
 * XREFs of ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z @ 0x1C004DDA0
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  if ( !*((_DWORD *)this + a2 + 1155) )
  {
    *((_DWORD *)this + a2 + 1155) = 1;
    ++*((_QWORD *)this + a2 + 610);
  }
  *a3 = *((_QWORD *)this + a2 + 610);
}

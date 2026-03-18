/*
 * XREFs of ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x18010445C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessExposeToCoRenderer(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_EXPOSETOCORENDERER *a3)
{
  return CoRenderHost::ExposeVisual(
           *(CoRenderHost **)(*((_QWORD *)this + 2) + 512LL),
           *((_DWORD *)a3 + 2),
           this,
           *((_DWORD *)a3 + 3) != 0);
}

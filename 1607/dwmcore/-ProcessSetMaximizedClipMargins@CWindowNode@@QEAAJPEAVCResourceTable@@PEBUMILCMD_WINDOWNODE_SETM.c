/*
 * XREFs of ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x180020140
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800234A4 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetMaximizedClipMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *a3)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // rcx
  struct CVisual *v5; // r10

  if ( (unsigned __int8)operator!=((char *)this + 916, (char *)a3 + 8) )
  {
    *v4 = *v3;
    CVisual::PropagateFlags(v5, 1, 1, 0, 0, 0, 0);
  }
  return 0LL;
}

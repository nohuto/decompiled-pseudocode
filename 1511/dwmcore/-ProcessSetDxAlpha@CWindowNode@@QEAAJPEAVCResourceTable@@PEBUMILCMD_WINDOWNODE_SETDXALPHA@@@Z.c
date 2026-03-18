/*
 * XREFs of ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x1800F6E20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxAlpha(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXALPHA *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 1208) != v3 )
  {
    *((_BYTE *)this + 1208) = v3;
    *((_BYTE *)this + 1224) = 1;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  }
  return 0LL;
}

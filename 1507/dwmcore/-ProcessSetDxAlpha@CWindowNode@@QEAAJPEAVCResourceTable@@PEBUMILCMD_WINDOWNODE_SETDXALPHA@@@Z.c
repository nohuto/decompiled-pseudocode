/*
 * XREFs of ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x180105EC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetDxAlpha(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETDXALPHA *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 1256) != v3 )
  {
    *((_BYTE *)this + 1256) = v3;
    *((_BYTE *)this + 1272) = 1;
    CVisual::PropagateFlags(this, 1, 1, 0, 0, 0, 0);
  }
  return 0LL;
}

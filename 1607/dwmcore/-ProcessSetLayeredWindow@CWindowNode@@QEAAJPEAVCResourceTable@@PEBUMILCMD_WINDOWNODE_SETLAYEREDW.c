/*
 * XREFs of ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x180026404
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetLayeredWindow(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETLAYEREDWINDOW *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 1035) != v3 )
  {
    *((_BYTE *)this + 1035) = v3;
    CVisual::PropagateFlags(this, 0, 1, 0, 0, 0, 0);
  }
  return 0LL;
}

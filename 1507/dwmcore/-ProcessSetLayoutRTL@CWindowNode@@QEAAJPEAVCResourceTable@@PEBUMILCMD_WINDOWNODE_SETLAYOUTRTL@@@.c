/*
 * XREFs of ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x180079A48
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetLayoutRTL(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETLAYOUTRTL *a3)
{
  char v3; // al

  v3 = *((_DWORD *)a3 + 2) != 0;
  if ( *((_BYTE *)this + 1274) != v3 )
  {
    *((_BYTE *)this + 1274) = v3;
    CVisual::PropagateFlags(this, 0, 1, 0, 0, 0, 0);
  }
  return 0LL;
}

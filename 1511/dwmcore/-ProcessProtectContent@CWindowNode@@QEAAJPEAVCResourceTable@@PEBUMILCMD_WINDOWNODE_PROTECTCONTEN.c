/*
 * XREFs of ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x1800F6F20
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?AdjustRestrictedEntityCount@CComposition@@QEAAX_N@Z @ 0x1800FACC8 (-AdjustRestrictedEntityCount@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessProtectContent(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_PROTECTCONTENT *a3)
{
  int v4; // ecx
  bool v5; // zf
  CComposition *v6; // rcx
  bool v7; // r8
  struct CVisual *v8; // r10

  v4 = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 1199) != (v4 != 0) )
  {
    v5 = v4 == 0;
    v6 = (CComposition *)*((_QWORD *)this + 2);
    *((_BYTE *)this + 1199) = !v5;
    CComposition::AdjustRestrictedEntityCount(v6, !v5);
    CVisual::PropagateFlags(v8, 1, 1, 0, v7, v7, v7);
  }
  return 0LL;
}

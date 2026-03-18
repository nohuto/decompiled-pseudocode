/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x18004F76C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18004FBE8 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_TOPLEVELNODE *a3)
{
  unsigned __int64 v3; // rdx

  if ( *((_DWORD *)a3 + 4) )
  {
    *((_BYTE *)this + 153) |= 4u;
    v3 = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 153) &= ~4u;
    v3 = 0LL;
  }
  CVisual::SetTopLevelWindow(this, v3);
  return 0LL;
}

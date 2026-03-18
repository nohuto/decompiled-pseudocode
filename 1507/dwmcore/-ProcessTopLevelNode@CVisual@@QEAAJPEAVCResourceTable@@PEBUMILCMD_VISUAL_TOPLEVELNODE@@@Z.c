/*
 * XREFs of ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180035A9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessTopLevelNode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_TOPLEVELNODE *a3)
{
  if ( *((_DWORD *)a3 + 4) )
  {
    *((_BYTE *)this + 89) |= 0x10u;
    *((_QWORD *)this + 28) = *((_QWORD *)a3 + 1);
  }
  else
  {
    *((_BYTE *)this + 89) &= ~0x10u;
    *((_QWORD *)this + 28) = 0LL;
  }
  return 0LL;
}

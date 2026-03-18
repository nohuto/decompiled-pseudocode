/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETSLICER@@@Z @ 0x180107E14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     Template_xdddddd @ 0x18011F5AC (Template_xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETSLICER *a3)
{
  *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 83) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 692) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 42),
      *((_DWORD *)this + 162),
      *((_DWORD *)this + 163),
      *((_DWORD *)this + 164),
      *((_DWORD *)this + 165),
      *((_DWORD *)this + 166),
      *((_DWORD *)this + 167));
  return 0LL;
}

/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETSLICER@@@Z @ 0x1800F4154
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     Template_xdddddd @ 0x180108B2C (Template_xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETSLICER *a3)
{
  *((_OWORD *)this + 36) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 74) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 620) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 33),
      *((_DWORD *)this + 144),
      *((_DWORD *)this + 145),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_DWORD *)this + 148),
      *((_DWORD *)this + 149));
  return 0LL;
}

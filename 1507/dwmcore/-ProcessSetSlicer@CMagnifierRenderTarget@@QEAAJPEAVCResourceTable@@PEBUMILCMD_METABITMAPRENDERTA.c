/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETSLICER@@@Z @ 0x1800ECDCC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     Template_xdddddd @ 0x1800EDDB4 (Template_xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_METABITMAPRENDERTARGET_SETSLICER *a3)
{
  *(_OWORD *)((char *)this + 600) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 77) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 644) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 36),
      *((_DWORD *)this + 150),
      *((_DWORD *)this + 151),
      *((_DWORD *)this + 152),
      *((_DWORD *)this + 153),
      *((_DWORD *)this + 154),
      *((_DWORD *)this + 155));
  return 0LL;
}

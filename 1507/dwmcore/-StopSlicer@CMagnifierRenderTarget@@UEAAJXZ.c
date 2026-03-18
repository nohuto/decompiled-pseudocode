/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800EDBD0
 * Callers:
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800ECEEC (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800ED9C0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 644) )
  {
    *((_BYTE *)this + 644) = 0;
    *((_DWORD *)this + 157) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd(this, &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop, *((_QWORD *)this + 36), *((unsigned int *)this + 156));
  }
  return *((unsigned int *)this + 162);
}

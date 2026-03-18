/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801089C0
 * Callers:
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x1800F3F9C (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800FADE4 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801087B0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 620) )
  {
    *((_BYTE *)this + 620) = 0;
    *((_DWORD *)this + 151) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd((__int64)this, &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop, *((_QWORD *)this + 33), *((_DWORD *)this + 150));
  }
  return *((unsigned int *)this + 156);
}

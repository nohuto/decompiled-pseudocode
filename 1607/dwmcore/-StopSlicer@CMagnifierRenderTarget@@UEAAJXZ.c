/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18011F440
 * Callers:
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET@@@Z @ 0x180107C58 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x18010F858 (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011F230 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 692) )
  {
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 169) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_xd((__int64)this, &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop, *((_QWORD *)this + 42), *((_DWORD *)this + 168));
  }
  return *((unsigned int *)this + 174);
}

/*
 * XREFs of ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x1800845A0
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800C26E0 (-Release@CMILBrushBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WDI@EAAKXZ @ 0x1800C26F0 (-Release@CMILBrushBitmap@@WDI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::Release(CMILBrushBitmap *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CMILBrushBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}

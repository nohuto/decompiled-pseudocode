/*
 * XREFs of ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x18005A2B0
 * Callers:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18005D400 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 * Callees:
 *     ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x1800896F0 (-SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::FreeRealizationResources(CImageLegacyMilBrush *this)
{
  if ( *((_DWORD *)this + 90) )
    CMILBrushBitmap::SetBitmap((CImageLegacyMilBrush *)((char *)this + 96), 0LL);
}

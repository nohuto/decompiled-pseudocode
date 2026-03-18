/*
 * XREFs of ?FreeRealizationResources@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800327A0
 * Callers:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18002EC50 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 * Callees:
 *     ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x180084628 (-SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::FreeRealizationResources(CImageLegacyMilBrush *this)
{
  if ( *((_DWORD *)this + 110) )
    CMILBrushBitmap::SetBitmap((CImageLegacyMilBrush *)((char *)this + 168), 0LL);
}

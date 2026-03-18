/*
 * XREFs of ?FreeRealizationResources@CImageBrush@@UEAAXXZ @ 0x180085970
 * Callers:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x1800834C0 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImageBrush::FreeRealizationResources(CImageBrush *this)
{
  if ( *((_DWORD *)this + 90) )
    CMILBrushBitmap::SetBitmap((CImageBrush *)((char *)this + 96), 0LL);
}

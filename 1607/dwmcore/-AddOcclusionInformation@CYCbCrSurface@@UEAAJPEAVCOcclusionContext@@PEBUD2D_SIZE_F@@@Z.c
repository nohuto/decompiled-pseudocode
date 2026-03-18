/*
 * XREFs of ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801450A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 */

__int64 __fastcall CYCbCrSurface::AddOcclusionInformation(
        CCompositionSurfaceBitmap **this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( this[14] )
  {
    if ( this[15] )
      return CCompositionSurfaceBitmap::AddOcclusionInformation(this[14], a2, a3);
  }
  return result;
}

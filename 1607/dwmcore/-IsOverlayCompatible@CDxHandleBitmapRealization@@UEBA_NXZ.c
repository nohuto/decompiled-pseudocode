/*
 * XREFs of ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180010370
 * Callers:
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FD80 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsOverlayCompatible(CDxHandleBitmapRealization *this)
{
  bool result; // al

  result = (*((_BYTE *)this + 132) & 0x40) != 0;
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    return 1;
  return result;
}

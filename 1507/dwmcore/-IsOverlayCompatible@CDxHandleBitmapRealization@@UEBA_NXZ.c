/*
 * XREFs of ?IsOverlayCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007A50
 * Callers:
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007FF0 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleBitmapRealization::IsOverlayCompatible(CDxHandleBitmapRealization *this)
{
  bool v1; // cl

  v1 = *((_DWORD *)this + 34) != 0;
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    return 1;
  return v1;
}

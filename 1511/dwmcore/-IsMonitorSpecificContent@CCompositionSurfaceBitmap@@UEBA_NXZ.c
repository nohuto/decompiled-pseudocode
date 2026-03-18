/*
 * XREFs of ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BF90
 * Callers:
 *     ?NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BEE0 (-NeedsCachedRenderingRealizationUpdate@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BCEC0 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BCED0 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ @ 0x18000DBC4 (-IsMonitorSpecificContent@CBitmapRealization@@QEBA_NXZ.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsMonitorSpecificContent(CCompositionSurfaceBitmap *this)
{
  CBitmapRealization *v1; // rcx
  bool result; // al

  v1 = (CBitmapRealization *)*((_QWORD *)this + 51);
  result = 0;
  if ( v1 )
    return CBitmapRealization::IsMonitorSpecificContent(v1);
  return result;
}

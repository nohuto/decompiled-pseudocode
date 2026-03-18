/*
 * XREFs of ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BF70
 * Callers:
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BCEE0 (-IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BCEF0 (-IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 *     ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@@Z @ 0x180121ED0 (-GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonB.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsProtectedContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 51);
  result = 0;
  if ( v1 )
    return *(_DWORD *)(v1 + 168) != 0;
  return result;
}

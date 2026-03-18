/*
 * XREFs of ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000FC40
 * Callers:
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ @ 0x1800BFD60 (-IsProtectedContent@CCompositionSurfaceBitmap@@W7EBA_NXZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ @ 0x1800BFD70 (-IsProtectedContent@CCompositionSurfaceBitmap@@WCA@EBA_NXZ.c)
 *     ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013A3E0 (-GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonB.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceBitmap::IsProtectedContent(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 52);
  result = 0;
  if ( v1 )
    return (*(_BYTE *)(v1 + 244) & 2) != 0;
  return result;
}

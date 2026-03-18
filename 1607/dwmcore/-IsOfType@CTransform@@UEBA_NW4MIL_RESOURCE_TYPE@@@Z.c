/*
 * XREFs of ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800234E0
 * Callers:
 *     ?IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180001720 (-IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022220 (-IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTranslateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022A00 (-IsOfType@CTranslateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022B90 (-IsOfType@CScaleTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransformGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800230A0 (-IsOfType@CTransformGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180023370 (-IsOfType@CRotateTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024420 (-IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024170 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 58 )
    return 1;
  v2 = CTransform3D::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}

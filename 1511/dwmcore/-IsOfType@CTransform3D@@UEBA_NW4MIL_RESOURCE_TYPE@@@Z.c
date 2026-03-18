/*
 * XREFs of ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180067A60
 * Callers:
 *     ?IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B380 (-IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D280 (-IsOfType@CScaleTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180066530 (-IsOfType@CRotateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180068580 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180068820 (-IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180113860 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 24 && a2 != 7 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}

/*
 * XREFs of ?IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B380
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180067A60 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTranslateTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 25 )
    return 1;
  v2 = CTransform3D::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}

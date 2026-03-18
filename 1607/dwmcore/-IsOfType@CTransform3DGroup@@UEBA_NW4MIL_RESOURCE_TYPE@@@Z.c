/*
 * XREFs of ?IsOfType@CTransform3DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180021BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024170 (-IsOfType@CTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CTransform3DGroup::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 31 )
    return 1;
  v4 = CTransform3D::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}

/*
 * XREFs of ?IsOfType@CMatrixTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180066650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180067450 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CMatrixTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 63 )
    return 1;
  v2 = CTransform::IsOfType();
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}

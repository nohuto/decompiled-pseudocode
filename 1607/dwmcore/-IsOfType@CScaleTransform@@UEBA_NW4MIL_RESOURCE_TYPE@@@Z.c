/*
 * XREFs of ?IsOfType@CScaleTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800234E0 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CScaleTransform::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 61 )
    return 1;
  v4 = CTransform::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}

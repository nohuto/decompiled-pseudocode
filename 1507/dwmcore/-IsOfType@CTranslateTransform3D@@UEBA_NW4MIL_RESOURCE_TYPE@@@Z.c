/*
 * XREFs of ?IsOfType@CTranslateTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18000E560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CTranslateTransform3D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 24) > 1 )
    return a2 == 7;
  return v2;
}

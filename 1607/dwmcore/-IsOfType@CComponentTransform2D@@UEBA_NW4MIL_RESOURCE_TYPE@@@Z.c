/*
 * XREFs of ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180020510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CComponentTransform2D::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 29 )
    return (unsigned int)(a2 - 109) <= 1;
  return v2;
}

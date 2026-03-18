/*
 * XREFs of ?IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180113920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGeometryGroup::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 65) > 1 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}

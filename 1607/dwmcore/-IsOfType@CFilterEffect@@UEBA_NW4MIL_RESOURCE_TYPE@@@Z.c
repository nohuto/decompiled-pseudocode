/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180014DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 9 && (unsigned int)(a2 - 109) > 1 )
    return a2 == 7;
  return v2;
}

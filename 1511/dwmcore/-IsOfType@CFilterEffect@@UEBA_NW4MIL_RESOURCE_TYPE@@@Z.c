/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001A810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 9 && a2 != 7 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}

/*
 * XREFs of ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180139030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 32) > 1 )
    return (unsigned int)(a2 - 109) <= 1;
  return v2;
}

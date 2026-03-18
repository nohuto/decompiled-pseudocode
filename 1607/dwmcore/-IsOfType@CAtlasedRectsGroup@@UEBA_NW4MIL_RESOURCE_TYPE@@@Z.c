/*
 * XREFs of ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasedRectsGroup::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 4) & 0xFFFFFFFD) == 0;
}

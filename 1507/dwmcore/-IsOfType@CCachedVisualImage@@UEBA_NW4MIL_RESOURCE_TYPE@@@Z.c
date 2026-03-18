/*
 * XREFs of ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800529D0
 * Callers:
 *     ?IsOfType@CCachedVisualImage@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AA00 (-IsOfType@CCachedVisualImage@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 51) > 1 )
    return a2 == 73;
  return v2;
}

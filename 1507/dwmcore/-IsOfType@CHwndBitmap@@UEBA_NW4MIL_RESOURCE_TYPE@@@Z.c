/*
 * XREFs of ?IsOfType@CHwndBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180011DE0
 * Callers:
 *     ?IsOfType@CHwndBitmap@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009A930 (-IsOfType@CHwndBitmap@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 51;
  result = 0;
  if ( v2 <= 0x1E )
  {
    v3 = 1145044993;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}

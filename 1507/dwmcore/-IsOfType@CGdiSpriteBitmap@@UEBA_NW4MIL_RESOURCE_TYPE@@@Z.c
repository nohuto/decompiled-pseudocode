/*
 * XREFs of ?IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007E9C0
 * Callers:
 *     ?IsOfType@CGdiSpriteBitmap@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009A7D0 (-IsOfType@CGdiSpriteBitmap@@W7EBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGdiSpriteBitmap@@WEA@EBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009A7E0 (-IsOfType@CGdiSpriteBitmap@@WEA@EBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGdiSpriteBitmap::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  _BOOL8 result; // rax

  v2 = a2 - 51;
  result = 0;
  if ( v2 <= 0x1D )
  {
    v3 = 608174081;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}

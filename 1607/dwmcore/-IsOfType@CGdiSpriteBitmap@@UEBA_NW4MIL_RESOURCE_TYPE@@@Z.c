/*
 * XREFs of ?IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AE890 (-IsOfType@CBitmapResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CGdiSpriteBitmap::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 93 )
    return 1;
  v4 = CBitmapResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}

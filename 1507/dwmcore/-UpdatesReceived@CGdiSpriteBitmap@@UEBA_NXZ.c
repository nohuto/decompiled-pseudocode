/*
 * XREFs of ?UpdatesReceived@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18000DC90
 * Callers:
 *     ?UpdatesReceived@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x18009A820 (-UpdatesReceived@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::UpdatesReceived(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 436) & 3) != 0;
}

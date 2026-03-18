/*
 * XREFs of ?UpdatesReceived@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18001B830
 * Callers:
 *     ?UpdatesReceived@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x1800BD490 (-UpdatesReceived@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::UpdatesReceived(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 436) & 3) != 0;
}

/*
 * XREFs of ?UpdatesReceived@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180021110
 * Callers:
 *     ?UpdatesReceived@CGdiSpriteBitmap@@WII@EBA_NXZ @ 0x1800C0510 (-UpdatesReceived@CGdiSpriteBitmap@@WII@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::UpdatesReceived(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 508) & 3) != 0;
}

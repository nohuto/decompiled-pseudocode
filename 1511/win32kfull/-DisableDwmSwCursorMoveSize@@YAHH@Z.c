/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0205330
 * Callers:
 *     xxxCancelTrackingForThread @ 0x1C020BCE0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01E6DA8 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1)
{
  if ( a1 )
    ChangeComposableCursor(0);
  return 1LL;
}

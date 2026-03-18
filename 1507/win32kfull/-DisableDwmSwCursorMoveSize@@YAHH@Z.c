/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C0204F7C
 * Callers:
 *     xxxCancelTrackingForThread @ 0x1C020B640 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01E6918 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1)
{
  if ( a1 )
    ChangeComposableCursor(0);
  return 1LL;
}

/*
 * XREFs of ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x1C01FC62C
 * Callers:
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     ChangeComposableCursor @ 0x1C01DD530 (ChangeComposableCursor.c)
 */

__int64 __fastcall DisableDwmSwCursorMoveSize(int a1)
{
  if ( a1 )
    ChangeComposableCursor(0);
  return 1LL;
}

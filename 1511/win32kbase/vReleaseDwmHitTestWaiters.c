/*
 * XREFs of vReleaseDwmHitTestWaiters @ 0x1C00A90FC
 * Callers:
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

LONG vReleaseDwmHitTestWaiters()
{
  LONG result; // eax

  if ( !gbNoMoreDITHitTest )
  {
    gbDITInHitTest = 0;
    if ( gcDITHitTestWaiters )
    {
      result = KeReleaseSemaphore(gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
    gbNoMoreDITHitTest = 1;
  }
  return result;
}

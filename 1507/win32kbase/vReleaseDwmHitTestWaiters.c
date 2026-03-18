/*
 * XREFs of vReleaseDwmHitTestWaiters @ 0x1C00A468C
 * Callers:
 *     NtUserReleaseDwmHitTestWaiters @ 0x1C0019540 (NtUserReleaseDwmHitTestWaiters.c)
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
      result = KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
      gcDITHitTestWaiters = 0;
    }
    gbNoMoreDITHitTest = 1;
  }
  return result;
}

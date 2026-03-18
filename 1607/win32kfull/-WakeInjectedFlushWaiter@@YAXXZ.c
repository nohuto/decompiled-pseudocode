/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C000CEF0
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     <none>
 */

void WakeInjectedFlushWaiter(void)
{
  if ( (unsigned int)IsDwmInputThread() )
  {
    if ( gbMouseInjectionBlockedOnDIT )
      KeSetEvent(gpkeDITMouseInjectionResponseEvent, 1, 0);
  }
}

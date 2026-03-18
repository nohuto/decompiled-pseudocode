/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C000C7A4
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
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

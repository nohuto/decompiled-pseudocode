/*
 * XREFs of ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C0008CC8
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
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

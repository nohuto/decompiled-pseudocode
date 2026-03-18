/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C001D798
 * Callers:
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     ?DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z @ 0x1C00E31F4 (-DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C001D810 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C001D850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}

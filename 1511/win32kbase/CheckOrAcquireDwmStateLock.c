/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C0037478
 * Callers:
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00D5DE0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     UserIsUserCritSecIn @ 0x1C00374B0 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00374F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
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

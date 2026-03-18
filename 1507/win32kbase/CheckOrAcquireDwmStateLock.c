/*
 * XREFs of CheckOrAcquireDwmStateLock @ 0x1C00456A8
 * Callers:
 *     OpenDwmHandle @ 0x1C0021D1C (OpenDwmHandle.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D41D0 (NtDCompositionSendDwmLpcMessage.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C00456E0 (UserIsUserCritSecIn.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0045720 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 */

char CheckOrAcquireDwmStateLock()
{
  char v0; // bl

  v0 = 0;
  if ( !(unsigned int)UserIsUserCritSecIn() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState) )
  {
    GreLockDwmState();
    return 1;
  }
  return v0;
}

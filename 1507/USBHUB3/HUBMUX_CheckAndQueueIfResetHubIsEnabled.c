/*
 * XREFs of HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000C964
 * Callers:
 *     HUBPSM20_IssuingHubResetFromDisconnected @ 0x1C000D760 (HUBPSM20_IssuingHubResetFromDisconnected.c)
 *     HUBPSM20_IssuingHubResetWithTimer @ 0x1C000D780 (HUBPSM20_IssuingHubResetWithTimer.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C000DC40 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000DE40 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C000DEA0 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x1C000DF60 (HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000E530 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent @ 0x1C000E7F0 (HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0065794 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

char __fastcall HUBMUX_CheckAndQueueIfResetHubIsEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // dl

  v1 = (KSPIN_LOCK *)(a1 + 2240);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2240));
  if ( (*(_DWORD *)(a1 + 2272) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2272), 0xFFFFFFFB);
    v3 = 1;
  }
  KeReleaseSpinLock(v1, v4);
  if ( v3 )
    HUBSM_AddEvent(a1 + 1184, 0x7FFu);
  return v3;
}

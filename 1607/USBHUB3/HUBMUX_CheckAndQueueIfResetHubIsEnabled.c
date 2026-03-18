/*
 * XREFs of HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000CF94
 * Callers:
 *     HUBPSM20_IssuingHubResetFromDisconnected @ 0x1C000DDD0 (HUBPSM20_IssuingHubResetFromDisconnected.c)
 *     HUBPSM20_IssuingHubResetWithTimer @ 0x1C000DDF0 (HUBPSM20_IssuingHubResetWithTimer.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x1C000E2B0 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000E4B0 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C000E510 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x1C000E5D0 (HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000EBA0 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent @ 0x1C000EE60 (HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0066EB4 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 */

char __fastcall HUBMUX_CheckAndQueueIfResetHubIsEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // dl

  v1 = (KSPIN_LOCK *)(a1 + 2264);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2264));
  if ( (*(_DWORD *)(a1 + 2296) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2296), 0xFFFFFFFB);
    v3 = 1;
  }
  KeReleaseSpinLock(v1, v4);
  if ( v3 )
    HUBSM_AddEvent(a1 + 1208, 0x7FFu);
  return v3;
}

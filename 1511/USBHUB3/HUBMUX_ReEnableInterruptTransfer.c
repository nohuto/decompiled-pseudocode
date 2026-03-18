/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x1C000CD04
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000E3B0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000E400 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C000E430 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1C000E500 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C000E5D0 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000F100 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2272), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1208, 0x7FEu);
}

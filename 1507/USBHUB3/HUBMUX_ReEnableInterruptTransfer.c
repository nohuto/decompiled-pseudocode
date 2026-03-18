/*
 * XREFs of HUBMUX_ReEnableInterruptTransfer @ 0x1C000C784
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C000DDF0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x1C000DE40 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_QueueingEnableInterruptTransferOnResume @ 0x1C000DE70 (HUBPSM20_QueueingEnableInterruptTransferOnResume.c)
 *     HUBPSM20_ReEnablingInterruptsOnErrorInSuspended @ 0x1C000DF40 (HUBPSM20_ReEnablingInterruptsOnErrorInSuspended.c)
 *     HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C000E010 (HUBPSM20_QueueingResumeToDSMFromSuspended.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C000EB40 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReEnableInterruptTransfer(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFE);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2248), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1184, 0x7FEu);
}

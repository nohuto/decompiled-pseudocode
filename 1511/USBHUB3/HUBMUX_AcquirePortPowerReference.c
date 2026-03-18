/*
 * XREFs of HUBMUX_AcquirePortPowerReference @ 0x1C000CB1C
 * Callers:
 *     HUBPSM20_AcquiringPortReferenceOnStart @ 0x1C000D8D0 (HUBPSM20_AcquiringPortReferenceOnStart.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C000E460 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000F150 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_AcquirePortPowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFB);
  _InterlockedOr(a1 + 66, 8u);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 2288));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2276), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1208, 0x806u);
}

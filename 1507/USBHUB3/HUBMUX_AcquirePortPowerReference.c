/*
 * XREFs of HUBMUX_AcquirePortPowerReference @ 0x1C000C59C
 * Callers:
 *     HUBPSM20_AcquiringPortReferenceOnStart @ 0x1C000D350 (HUBPSM20_AcquiringPortReferenceOnStart.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x1C000DEA0 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C000EB90 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_AcquirePortPowerReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFFB);
  _InterlockedOr(a1 + 66, 8u);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 2264));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2252), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1184, 0x806u);
}

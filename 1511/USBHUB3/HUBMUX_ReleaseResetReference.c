/*
 * XREFs of HUBMUX_ReleaseResetReference @ 0x1C000CBF4
 * Callers:
 *     HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x1C000E110 (HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1C000ED80 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReleaseResetReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFEF);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2280), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1208, 0x80Eu);
}

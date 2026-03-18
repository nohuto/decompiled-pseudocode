/*
 * XREFs of HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C000DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CreatingDeviceInConnectedWithResetInProgress(__int64 a1)
{
  return HUBMISC_CreateNewDSM(*(_QWORD *)(a1 + 960));
}

/*
 * XREFs of HUBPSM30_IssuingAttachDeviceToDsm @ 0x1C000EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_IssuingAttachDeviceToDsm(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1440LL) |= 0x20800u;
  return HUBMISC_AttachDevice();
}

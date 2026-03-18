/*
 * XREFs of HUBPSM20_IssuingAttachDeviceToPort @ 0x1C000E810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_IssuingAttachDeviceToPort(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1328LL) + 1440LL) |= 0x10000u;
  return HUBMISC_AttachDevice();
}

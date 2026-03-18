/*
 * XREFs of HUBPSM30_DetachingDeviceFromPortOnOverCurrent @ 0x1C000D9E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_DetachDevice @ 0x1C0025E0C (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM30_DetachingDeviceFromPortOnOverCurrent(__int64 a1)
{
  HUBMISC_DetachDevice(*(_QWORD *)(a1 + 960));
  return 3013LL;
}

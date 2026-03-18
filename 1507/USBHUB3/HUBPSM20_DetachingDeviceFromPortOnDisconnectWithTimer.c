/*
 * XREFs of HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C000D440
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000C808 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMISC_DetachDevice @ 0x1C00251BC (HUBMISC_DetachDevice.c)
 */

__int64 __fastcall HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMUX_ReleaseInterruptReference(v1);
  HUBMISC_DetachDevice(v1);
  return 3013LL;
}

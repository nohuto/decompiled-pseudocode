/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00B9640
 * Callers:
 *     <none>
 * Callees:
 *     IsFreePointerDeviceSupported_0 @ 0x1C00028C0 (IsFreePointerDeviceSupported_0.c)
 *     FreePointerDevice_0 @ 0x1C00028C8 (FreePointerDevice_0.c)
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  if ( (int)IsFreePointerDeviceSupported_0() >= 0 )
    FreePointerDevice_0();
}

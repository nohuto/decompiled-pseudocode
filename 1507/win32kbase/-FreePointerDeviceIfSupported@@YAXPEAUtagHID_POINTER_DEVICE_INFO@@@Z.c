/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00AB440
 * Callers:
 *     <none>
 * Callees:
 *     IsFreePointerDeviceSupported_0 @ 0x1C0002890 (IsFreePointerDeviceSupported_0.c)
 *     FreePointerDevice_0 @ 0x1C0002898 (FreePointerDevice_0.c)
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  if ( (int)IsFreePointerDeviceSupported_0() >= 0 )
    FreePointerDevice_0();
}

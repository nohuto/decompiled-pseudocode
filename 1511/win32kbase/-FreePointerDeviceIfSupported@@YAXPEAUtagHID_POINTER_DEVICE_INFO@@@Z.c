/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00AF940
 * Callers:
 *     <none>
 * Callees:
 *     IsFreePointerDeviceSupported_0 @ 0x1C00028B0 (IsFreePointerDeviceSupported_0.c)
 *     FreePointerDevice_0 @ 0x1C00028B8 (FreePointerDevice_0.c)
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  if ( (int)IsFreePointerDeviceSupported_0() >= 0 )
    FreePointerDevice_0();
}

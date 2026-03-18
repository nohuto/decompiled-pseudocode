/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x1406B4A80
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140097FFC (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406B2474 (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x1406C1EFC (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    VfXdvDriverCaptureIoCallbacks(*(struct _DRIVER_OBJECT **)(a1 + 8));
    return IovUtilFlushStackCache(a2);
  }
  return result;
}

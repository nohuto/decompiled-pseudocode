/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140734A80
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400D19EC (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407320D4 (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x14074379C (IovUtilFlushStackCache.c)
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

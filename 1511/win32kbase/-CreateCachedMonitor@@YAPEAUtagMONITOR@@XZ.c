/*
 * XREFs of ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D6FC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D720 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *CreateCachedMonitor(void)
{
  struct tagMONITOR *result; // rax

  result = (struct tagMONITOR *)gpMonitorCached;
  if ( !gpMonitorCached )
  {
    result = CreateMonitor();
    gpMonitorCached = result;
  }
  return result;
}

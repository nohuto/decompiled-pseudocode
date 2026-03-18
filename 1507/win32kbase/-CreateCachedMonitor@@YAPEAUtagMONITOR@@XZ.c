/*
 * XREFs of ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AB44
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AAB8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall CreateCachedMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagMONITOR *result; // rax

  result = (struct tagMONITOR *)gpMonitorCached;
  if ( !gpMonitorCached )
  {
    result = CreateMonitor(a1, a2, a3);
    gpMonitorCached = result;
  }
  return result;
}

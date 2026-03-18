/*
 * XREFs of ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000C8A8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C000C850 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D20C8 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D2528 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESSINFO *GetActivePpi(void)
{
  struct tagPROCESSINFO *result; // rax

  result = (struct tagPROCESSINFO *)grpdeskRitInput;
  if ( grpdeskRitInput )
    return *(struct tagPROCESSINFO **)(grpdeskRitInput + 248LL);
  return result;
}

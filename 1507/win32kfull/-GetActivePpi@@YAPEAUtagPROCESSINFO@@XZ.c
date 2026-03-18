/*
 * XREFs of ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C0009488
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0009430 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01D0470 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D092C (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESSINFO *GetActivePpi(void)
{
  struct tagPROCESSINFO *result; // rax

  result = (struct tagPROCESSINFO *)grpdeskRitInput;
  if ( grpdeskRitInput )
    return *(struct tagPROCESSINFO **)(grpdeskRitInput + 296LL);
  return result;
}

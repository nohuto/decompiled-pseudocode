/*
 * XREFs of ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000E4E8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C000E490 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     ?IsOrientationWithinPreferences@@YAHK@Z @ 0x1C01C9974 (-IsOrientationWithinPreferences@@YAHK@Z.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_.c)
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

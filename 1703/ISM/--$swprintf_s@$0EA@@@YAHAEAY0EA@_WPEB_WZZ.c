/*
 * XREFs of ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x18006681C
 * Callers:
 *     HidStatus @ 0x1800656A8 (HidStatus.c)
 *     ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4 (-CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ.c)
 * Callees:
 *     vswprintf_s @ 0x18009D89C (vswprintf_s.c)
 */

int swprintf_s<64>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x40uLL, a2, va);
}

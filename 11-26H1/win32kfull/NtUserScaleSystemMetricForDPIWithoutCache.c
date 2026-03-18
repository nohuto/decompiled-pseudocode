/*
 * XREFs of NtUserScaleSystemMetricForDPIWithoutCache @ 0x1401BF550
 * Callers:
 *     <none>
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall NtUserScaleSystemMetricForDPIWithoutCache(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ScaleSystemMetricForDPIWithoutCache(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}

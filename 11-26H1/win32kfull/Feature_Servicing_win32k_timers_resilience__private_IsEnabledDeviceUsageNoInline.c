/*
 * XREFs of Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030
 * Callers:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     DestroyThreadsTimers @ 0x14009A500 (DestroyThreadsTimers.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 *     DestroyWindowsTimers @ 0x1401C81D4 (DestroyWindowsTimers.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x1402970D0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_win32k_timers_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_resilience__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_resilience__private_featureState,
             3LL);
}

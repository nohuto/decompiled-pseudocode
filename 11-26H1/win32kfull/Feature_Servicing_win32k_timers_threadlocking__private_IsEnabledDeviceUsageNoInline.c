/*
 * XREFs of Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline @ 0x1401DDFA8
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback @ 0x1402970EC (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_win32k_timers_threadlocking__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_threadlocking__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_threadlocking__private_featureState,
             3LL);
}

/*
 * XREFs of ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800946B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceStateChanged(PVOID pv, const unsigned __int16 *a2, unsigned int a3)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, a3, a2);
}

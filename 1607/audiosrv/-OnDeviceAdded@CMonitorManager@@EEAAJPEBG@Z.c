/*
 * XREFs of ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18007D140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceAdded(PVOID pv, const unsigned __int16 *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 1u, a2);
}

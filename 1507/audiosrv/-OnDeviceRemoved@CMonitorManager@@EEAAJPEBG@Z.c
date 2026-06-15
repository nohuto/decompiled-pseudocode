/*
 * XREFs of ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x180096DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceRemoved(PVOID pv, const unsigned __int16 *a2)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 8u, a2);
}

/*
 * XREFs of MonitorIsHMDDevicePresent @ 0x1C00B930C
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00B917C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00F4120 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsHMDDevicePresent(struct HDXGMONITOR__ *a1, _BYTE *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v5 = v11;
    if ( !v11 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v7);
      v9 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v5 + 240), 1u);
    if ( *((_DWORD *)v5 + 94) != 1 )
    {
      if ( *((_BYTE *)v5 + 524) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v10);
      }
    }
    *a2 = *((_BYTE *)v5 + 524);
    ExReleaseResourceLite((PERESOURCE)((char *)v5 + 240));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}

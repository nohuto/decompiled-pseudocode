/*
 * XREFs of MonitorLogBadEDID @ 0x1C01B07F8
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00EFF58 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00F06A0 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00F07DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00F1D0C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00F1DE8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MonitorLogBadEDID(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = a2;
    if ( a2 >= -1071841278
      && (a2 <= -1071841270
       || a2 > -1071774967 && (a2 <= -1071774965 || a2 == -1071774942 || (unsigned int)(a2 + 1071774889) <= 1)) )
    {
      if ( byte_1C00573E8 )
      {
        v4 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v4 + 24) = a1;
        *(_QWORD *)(v4 + 32) = v2;
        WdLogEvent5_WdError(v4);
      }
    }
  }
}

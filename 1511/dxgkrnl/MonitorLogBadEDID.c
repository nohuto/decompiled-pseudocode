/*
 * XREFs of MonitorLogBadEDID @ 0x1C0186E88
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00DF9A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C00E0060 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00E00E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00E166C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00E1748 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
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
      if ( byte_1C00471E0 )
      {
        v4 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v4 + 24) = a1;
        *(_QWORD *)(v4 + 32) = v2;
        WdLogEvent5_WdError(v4);
      }
    }
  }
}

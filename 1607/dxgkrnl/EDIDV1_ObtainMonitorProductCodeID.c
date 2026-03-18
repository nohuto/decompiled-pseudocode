/*
 * XREFs of EDIDV1_ObtainMonitorProductCodeID @ 0x1C000ECEC
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00F07DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00F1C1C (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00F1D0C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00F2778 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorProductCodeID(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 )
    {
      *v2 = a0123456789abcd[(unsigned __int64)*(unsigned __int8 *)(v3 + 11) >> 4];
      v2[1] = a0123456789abcd[*(_BYTE *)(v3 + 11) & 0xF];
      v2[2] = a0123456789abcd[(unsigned __int64)*(unsigned __int8 *)(v3 + 10) >> 4];
      v4 = *(_BYTE *)(v3 + 10) & 0xF;
      v2[4] = 0;
      v2[3] = a0123456789abcd[v4];
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}

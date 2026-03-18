/*
 * XREFs of EDIDV1_ObtainMonitorManufacturerName @ 0x1C000EA58
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C009C328 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00E00E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E1588 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00E166C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00E1F1C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufacturerName(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE *v2; // r8
  __int64 v3; // r9
  char v4; // cl
  char v5; // al

  result = EDIDV1_IsEDIDBaseBlock(a1);
  if ( (int)result >= 0 )
  {
    if ( v2 )
    {
      v4 = ((*(_BYTE *)(v3 + 8) >> 2) & 0x1F) + 64;
      v2[1] = ((*(_BYTE *)(v3 + 9) >> 5) | (8 * (*(_BYTE *)(v3 + 8) & 3))) + 64;
      *v2 = v4;
      v5 = *(_BYTE *)(v3 + 9) & 0x1F;
      v2[3] = 0;
      v2[2] = v5 + 64;
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}

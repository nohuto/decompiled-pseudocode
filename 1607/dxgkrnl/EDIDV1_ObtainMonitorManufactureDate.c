/*
 * XREFs of EDIDV1_ObtainMonitorManufactureDate @ 0x1C000ED5C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00F07DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00F2778 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorManufactureDate(_QWORD *a1)
{
  __int64 result; // rax
  _WORD *v2; // r8
  _BYTE *v3; // r9
  _BYTE *v4; // r11
  unsigned int v5; // r10d
  unsigned __int8 v6; // al
  bool v7; // cc

  result = EDIDV1_IsEDIDBaseBlock(a1);
  v5 = result;
  if ( (int)result < 0 )
    return result;
  if ( !v3 || !v2 )
    return 3221225485LL;
  *v3 = v4[16];
  *v2 = (unsigned __int8)v4[17] + 1990;
  v6 = v4[18];
  if ( v6 == 1 )
  {
    if ( v4[19] == 3 )
    {
      v7 = *v3 <= 0x36u;
      goto LABEL_7;
    }
    if ( v4[19] >= 4u )
      goto LABEL_17;
  }
  if ( v6 >= 3u )
  {
LABEL_17:
    if ( *v3 == 0xFF )
      goto LABEL_19;
    v7 = *v3 <= 0x36u;
  }
  else
  {
    v7 = (unsigned __int8)(*v3 - 1) <= 0x35u;
  }
LABEL_7:
  if ( !v7 )
  {
    v5 = -1071841270;
LABEL_19:
    *v3 = 0;
  }
  if ( *v2 <= 0x7C9u )
  {
    *v2 = 0;
    return (unsigned int)-1071841270;
  }
  return v5;
}

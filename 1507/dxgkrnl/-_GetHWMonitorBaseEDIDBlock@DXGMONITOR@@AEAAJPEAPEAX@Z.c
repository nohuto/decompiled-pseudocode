/*
 * XREFs of ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAX@Z @ 0x1C0097EDC
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C00982C4 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00C8A90 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00C9AF0 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00C9BCC (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00C9CA8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     MonitorLogBadEDID @ 0x1C01827DC (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetHWMonitorBaseEDIDBlock(DXGMONITOR *this, void **a2, __int64 a3, __int64 a4)
{
  __int64 **v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 **v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_13;
  v5 = (__int64 **)*((_QWORD *)this + 15);
  if ( !v5 )
    goto LABEL_13;
  v6 = *v5;
  if ( !v6 )
    goto LABEL_13;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( v6 )
  {
    v7 = v6 + 3;
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v6 + 3);
    v13 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v15 + 24) = v7;
      *(_QWORD *)(v15 + 32) = v13;
      WdLogEvent5_WdWarning(v15);
      MonitorLogBadEDID(v7, (unsigned int)v13);
      return (unsigned int)v13;
    }
    else
    {
      *v11 = v7;
      return 0LL;
    }
  }
  else
  {
LABEL_13:
    v16 = WdLogNewEntry5_WdWarning(this, a2, a2, a4);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdWarning(v16);
    return 3223126017LL;
  }
}

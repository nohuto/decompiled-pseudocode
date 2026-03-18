/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00E1DD0 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0185350 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000148C (EDIDV1_IsEDIDBaseBlock.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DEE8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00DF830 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00DF918 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00DF9A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00DFD8C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00DFF94 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E2184 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00E7D6C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0186E88 (MonitorLogBadEDID.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C018A63C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(DXGMONITOR *this, char a2)
{
  __int64 *v2; // rbp
  DXGMONITOR *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rsi
  EDIDCACHE *v10; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // si
  char v16; // si
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  DXGMONITOR *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v29; // [rsp+68h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 15);
  v4 = this;
  LODWORD(v5) = 0;
  if ( v2 && *((_DWORD *)this + 28) )
  {
    v6 = *v2;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v6 + 8), &v29);
    v7 = *((_DWORD *)v4 + 7);
    v8 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 8LL);
    v9 = *(struct DXGADAPTER **)(v8 + 16);
    v10 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 98);
    if ( v10 )
      EDIDCACHE::AddEdid(v10, v9, v7, (const unsigned __int8 *)(v6 + 24), v29);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((_QWORD *)(v6 + 24));
    v5 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(this, v12, v13, v14);
      *(_QWORD *)(v24 + 24) = v6 + 24;
      *(_QWORD *)(v24 + 32) = v5;
      WdLogEvent5_WdWarning(v24);
      MonitorLogBadEDID(v6 + 24, (unsigned int)v5);
      LODWORD(v5) = 0;
      v6 = 0LL;
LABEL_8:
      v15 = v6 != *((_QWORD *)v4 + 16);
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    goto LABEL_8;
  this = (DXGMONITOR *)*((_QWORD *)v4 + 16);
  if ( !this )
    goto LABEL_8;
  v25 = *(_QWORD *)(v6 + 16);
  v15 = 0;
  if ( v25 != *((_QWORD *)this + 2)
    || v25
    && (v26 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v6, v25 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v6 + 16) + 31LL),
        v26 != this) )
  {
    v15 = 1;
  }
LABEL_9:
  v16 = a2 | v15;
  if ( v16 )
  {
    v17 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v17 + 24) = v4;
    WdLogEvent5_WdDmmEvent(v17);
    v21 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v4, v18, v19, v20);
    v5 = v21;
    if ( v21 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v27 + 24) = v5;
      WdLogEvent5_WdError(v27);
      return (unsigned int)v5;
    }
    if ( v6 )
    {
      *((_QWORD *)v4 + 16) = v6;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v4) < 0 )
        *((_QWORD *)v4 + 16) = 0LL;
      LODWORD(v5) = 0;
    }
    else
    {
      *((_QWORD *)v4 + 16) = 0LL;
    }
    if ( (*((_BYTE *)v4 + 24) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v4);
    DXGMONITOR::_CheckPortraitFirstMonitor(v4);
  }
  if ( !*((_DWORD *)v4 + 50) && !*((_DWORD *)v4 + 38) || v16 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v4);
  if ( !*((_DWORD *)v4 + 50) && !*((_DWORD *)v4 + 38) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v4);
  if ( v16 )
  {
    if ( !*((_QWORD *)v4 + 2) )
    {
      v28 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v28);
    }
    MONITOR_MGR::_IssueMonitorEvent(*((struct _FAST_MUTEX **)v4 + 2), *((_DWORD *)v4 + 7), 3, 0LL, *((_DWORD *)v4 + 94));
  }
  return (unsigned int)v5;
}

/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F1C7C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEAD0 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C000A364 (EDIDV1_IsEDIDBaseBlock.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00EFE70 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00EFF58 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00F033C (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00F0544 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00F0610 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00F2D00 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3320 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00FB1EC (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C01B07F8 (MonitorLogBadEDID.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01B40D8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 *v3; // rbp
  DXGMONITOR *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rsi
  EDIDCACHE *v12; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // si
  char v18; // si
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  DXGMONITOR *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v31; // [rsp+70h] [rbp+18h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 15);
  v6 = this;
  LODWORD(v7) = 0;
  if ( v3 && *((_DWORD *)this + 28) )
  {
    v8 = *v3;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), &v31);
    v9 = *((_DWORD *)v6 + 7);
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL);
    v11 = *(struct DXGADAPTER **)(v10 + 16);
    v12 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10) + 79);
    if ( v12 )
      EDIDCACHE::AddEdid(v12, v11, v9, (const unsigned __int8 *)(v8 + 24), v31);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((_QWORD *)(v8 + 24));
    v7 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v26 = WdLogNewEntry5_WdWarning(this, v14, v15, v16);
      *(_QWORD *)(v26 + 24) = v8 + 24;
      *(_QWORD *)(v26 + 32) = v7;
      WdLogEvent5_WdWarning(v26);
      MonitorLogBadEDID(v8 + 24, (unsigned int)v7);
      LODWORD(v7) = 0;
      v8 = 0LL;
LABEL_8:
      v17 = v8 != *((_QWORD *)v6 + 16);
      goto LABEL_9;
    }
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_8;
  this = (DXGMONITOR *)*((_QWORD *)v6 + 16);
  if ( !this )
    goto LABEL_8;
  v27 = *(_QWORD *)(v8 + 16);
  v17 = 0;
  if ( v27 != *((_QWORD *)this + 2)
    || v27
    && (v28 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v8, v27 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v8 + 16) + 31LL),
        v28 != this) )
  {
    v17 = 1;
  }
LABEL_9:
  v18 = a3 | v17;
  if ( v18 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v19);
    v23 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v6, v20, v21, v22);
    v7 = v23;
    if ( v23 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v29 + 24) = v7;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v7;
    }
    if ( v8 )
    {
      *((_QWORD *)v6 + 16) = v8;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v6) < 0 )
        *((_QWORD *)v6 + 16) = 0LL;
      LODWORD(v7) = 0;
    }
    else
    {
      *((_QWORD *)v6 + 16) = 0LL;
    }
    if ( (*((_BYTE *)v6 + 24) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v6);
    DXGMONITOR::_CheckPortraitFirstMonitor(v6);
  }
  if ( !*((_DWORD *)v6 + 50) && !*((_DWORD *)v6 + 38) || v18 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v6);
  if ( !*((_DWORD *)v6 + 50) && !*((_DWORD *)v6 + 38) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v6);
  if ( v18 )
  {
    if ( !*((_QWORD *)v6 + 2) )
    {
      v30 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v30);
    }
    MONITOR_MGR::_IssueMonitorEvent(*((_QWORD *)v6 + 2), *((unsigned int *)v6 + 7), 3LL, 0LL, *((_DWORD *)v6 + 94), a2);
  }
  return (unsigned int)v7;
}

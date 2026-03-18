/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C00CA2D8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0180E5C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C00C82F0 (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C00C83D8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00C87BC (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00C89C4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00CA448 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00CAFBC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00DBF78 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C01827DC (MonitorLogBadEDID.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0185E2C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  char v5; // r14
  DXGMONITOR *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  EDIDCACHE *v15; // rcx
  int IsEDIDBaseBlock; // eax
  bool v17; // si
  char v18; // si
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v25; // rax
  DXGMONITOR *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v29; // [rsp+68h] [rbp+10h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 15);
  v5 = a2;
  v6 = this;
  LODWORD(v7) = 0;
  if ( v4 && *((_DWORD *)this + 28) )
  {
    v8 = *v4;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), &v29);
    v9 = *((_DWORD *)v6 + 7);
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL);
    v11 = *(struct DXGADAPTER **)(v10 + 16);
    v15 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v12, v13, v14) + 80);
    if ( v15 )
      EDIDCACHE::AddEdid(v15, v11, v9, (const unsigned __int8 *)(v8 + 24), v29);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((_QWORD *)(v8 + 24));
    v7 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
      *(_QWORD *)(v25 + 24) = v8 + 24;
      *(_QWORD *)(v25 + 32) = v7;
      WdLogEvent5_WdWarning(v25);
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
  a3 = *(_QWORD *)(v8 + 16);
  v17 = 0;
  if ( a3 != *((_QWORD *)this + 2)
    || a3
    && (v26 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v8, a3 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v8 + 16) + 31LL),
        v26 != this) )
  {
    v17 = 1;
  }
LABEL_9:
  v18 = v5 | v17;
  if ( v18 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v19 + 24) = v6;
    WdLogEvent5_WdDmmEvent(v19);
    v23 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v6, v20, v21, v22);
    v7 = v23;
    if ( v23 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v27 + 24) = v7;
      WdLogEvent5_WdError(v27);
      return (unsigned int)v7;
    }
    if ( v8 )
    {
      *((_QWORD *)v6 + 16) = v8;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v6, a2, a3, a4) < 0 )
        *((_QWORD *)v6 + 16) = 0LL;
      LODWORD(v7) = 0;
    }
    else
    {
      *((_QWORD *)v6 + 16) = 0LL;
    }
    if ( (*((_BYTE *)v6 + 24) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI((struct _DEVICE_OBJECT **)v6, a2, a3, a4);
  }
  if ( !*((_DWORD *)v6 + 50) && !*((_DWORD *)v6 + 38) || v18 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)v6, a2, a3, a4);
  if ( !*((_DWORD *)v6 + 50) && !*((_DWORD *)v6 + 38) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v6);
  if ( v18 )
  {
    if ( !*((_QWORD *)v6 + 2) )
    {
      v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v28);
    }
    MONITOR_MGR::_IssueMonitorEvent(*((_QWORD *)v6 + 2), *((unsigned int *)v6 + 7), 3LL, 0LL, *((_DWORD *)v6 + 94));
  }
  return (unsigned int)v7;
}

/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00DF2E0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0185508 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00DFDFC (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00DFF94 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00E00E0 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E064C (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00E0838 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C00E09C4 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00E0B34 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00E0FB8 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C018A394 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C018A63C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018ADAC (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7)
{
  char v7; // r12
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // r14d
  struct DXGMONITOR *v14; // r15
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rcx
  int VideoOutputTechnology; // ebp
  unsigned int v19; // ebx
  int updated; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a6;
  *(_QWORD *)(v11 + 24) = a1;
  if ( !v13 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v25);
  }
  v14 = a7;
  if ( v13 != 1 )
  {
    v15 = a3 == 0;
LABEL_6:
    if ( v15 )
      goto LABEL_7;
    goto LABEL_24;
  }
  if ( a3 )
  {
    v15 = a7 == 0LL;
    goto LABEL_6;
  }
LABEL_24:
  v26 = WdLogNewEntry5_WdAssertion(v12);
  WdLogEvent5_WdAssertion(v26);
LABEL_7:
  *(_DWORD *)(a1 + 28) = v9;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 376) = v13;
  *(_DWORD *)(a1 + 380) = v13;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 24) |= 2u;
    *(_DWORD *)(a1 + 24) ^= (*(_DWORD *)(a1 + 24) ^ (4 * (a5 == 0))) & 4;
  }
  v16 = *(_QWORD *)(a1 + 16);
  v29 = -2;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v16 + 8) + 16LL), v9, &v29, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v27);
  }
  v19 = v29;
  if ( v29 == -2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v28);
  }
  *(_DWORD *)(a1 + 32) = v19;
  if ( v13 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, 0);
  }
  else
  {
    if ( v14 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 240), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v14);
      ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    if ( v13 == 5 )
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1);
    if ( *(_DWORD *)(a1 + 152) )
      goto LABEL_17;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_17:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((struct _UNICODE_STRING *)a1, v21, v22, v23);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v13 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 504));
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadHMDPresenceFromMonitorStore((DXGMONITOR *)a1, &v29);
        *(_BYTE *)(a1 + 508) = v29 != 0;
      }
      *(_DWORD *)(a1 + 24) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}

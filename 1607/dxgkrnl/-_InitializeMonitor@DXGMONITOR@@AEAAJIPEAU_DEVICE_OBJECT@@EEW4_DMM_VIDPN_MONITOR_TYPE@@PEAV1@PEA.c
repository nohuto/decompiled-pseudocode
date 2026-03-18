/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3684 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEC98 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00F03AC (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00F0544 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C00F0610 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C00F0720 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00F07DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0D48 (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00F0F34 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C00F10C0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00F122C (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F16AC (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01B40D8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C01B48A4 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        struct DXGMONITOR *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  char v8; // r12
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rax
  struct DXGMONITOR *v16; // r15
  char v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int VideoOutputTechnology; // ebp
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  int updated; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v10 = a2;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a6;
  *(_QWORD *)(v12 + 24) = a1;
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = a7;
  if ( v14 != 1 )
  {
    v17 = a3 == 0;
LABEL_7:
    if ( v17 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( a3 )
  {
    v17 = a7 == 0LL;
    goto LABEL_7;
  }
LABEL_8:
  v18 = WdLogNewEntry5_WdAssertion(v13);
  WdLogEvent5_WdAssertion(v18);
LABEL_9:
  *(_DWORD *)(a1 + 28) = v10;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 376) = v14;
  *(_DWORD *)(a1 + 380) = v14;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 24) |= 2u;
    *(_DWORD *)(a1 + 24) ^= (*(_DWORD *)(a1 + 24) ^ (4 * (a5 == 0))) & 4;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v30 = -2;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v19 + 8) + 16LL), v10, &v30, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = v30;
  if ( v30 == -2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v24);
  }
  *(_DWORD *)(a1 + 32) = v23;
  if ( v14 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, a8, 0);
  }
  else
  {
    if ( v16 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 240), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v16);
      ExReleaseResourceLite((PERESOURCE)((char *)v16 + 240));
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    if ( v14 == 5 )
    {
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
      DXGMONITOR::_CheckPortraitFirstMonitor((DXGMONITOR *)a1);
    }
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1);
    if ( *(_DWORD *)(a1 + 152) )
      goto LABEL_27;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_27:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((DXGMONITOR *)a1, v26, v27, v28);
    if ( VideoOutputTechnology >= 0 )
    {
      DXGMONITOR::_PrepareDefaultMonitorConfiguration((DXGMONITOR *)a1);
      if ( v14 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 520));
        DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore((DXGMONITOR *)a1);
        DXGMONITOR::_ReadHMDPresenceFromMonitorStore((DXGMONITOR *)a1, &v30);
        v17 = v30 == 1;
        *(_BYTE *)(a1 + 524) = v30 != 0;
        DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v17);
      }
      *(_DWORD *)(a1 + 24) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}

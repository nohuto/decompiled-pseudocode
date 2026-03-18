/*
 * XREFs of ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z @ 0x1C00CB3D0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181014 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00C882C (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00C89C4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00C8A90 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C00C90C8 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9590 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0185E2C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C018659C (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
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
  char v7; // r15
  unsigned int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebp
  struct DXGMONITOR *v17; // r14
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int VideoOutputTechnology; // esi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // r9
  int updated; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+58h] [rbp+20h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v16 = a6;
  *(_QWORD *)(v11 + 24) = a1;
  if ( !v16 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v33);
  }
  v17 = a7;
  if ( v16 != 1 )
  {
    v18 = a3 == 0;
LABEL_6:
    if ( v18 )
      goto LABEL_7;
    goto LABEL_24;
  }
  if ( a3 )
  {
    v18 = a7 == 0LL;
    goto LABEL_6;
  }
LABEL_24:
  v34 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
  WdLogEvent5_WdAssertion(v34);
LABEL_7:
  *(_DWORD *)(a1 + 28) = v9;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 376) = v16;
  *(_DWORD *)(a1 + 380) = v16;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 24) |= 2u;
    *(_DWORD *)(a1 + 24) ^= (*(_DWORD *)(a1 + 24) ^ (4 * (a5 == 0))) & 4;
  }
  v19 = *(_QWORD *)(a1 + 16);
  v37 = -2;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(*(DXGADAPTER **)(*(_QWORD *)(v19 + 8) + 16LL), v9, &v37, 0LL);
  if ( VideoOutputTechnology < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
    WdLogEvent5_WdAssertion(v35);
  }
  v25 = v37;
  if ( v37 == -2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v21, v20, v23, v24);
    WdLogEvent5_WdAssertion(v36);
  }
  *(_DWORD *)(a1 + 32) = v25;
  if ( v16 == 1 )
  {
    VideoOutputTechnology = DXGMONITOR::_RetrieveMonitorDescriptorsFromDriver((DXGMONITOR *)a1, v20, v23, v24);
    if ( VideoOutputTechnology < 0 )
      return (unsigned int)VideoOutputTechnology;
    updated = DXGMONITOR::_UpdateEDIDBaseBlock((DXGMONITOR *)a1, 0LL, v26, v27);
  }
  else
  {
    if ( v17 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 240), 1u);
      VideoOutputTechnology = DXGMONITOR::_CopyMonitorInformation((DXGMONITOR *)a1, v17);
      ExReleaseResourceLite((PERESOURCE)((char *)v17 + 240));
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    if ( v16 == 5 )
      DXGMONITOR::_RetrieveMonitorDescriptorsFromCache((DXGMONITOR *)a1);
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL)) >= 1105 )
      DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)a1, v29, v30, v31);
    if ( *(_DWORD *)(a1 + 152) )
      goto LABEL_17;
    updated = DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0((DXGMONITOR *)a1);
  }
  VideoOutputTechnology = updated;
LABEL_17:
  if ( VideoOutputTechnology >= 0 )
  {
    VideoOutputTechnology = DXGMONITOR::_PrepareMonitorCCDName((struct _UNICODE_STRING *)a1, v29, v30, v31);
    if ( VideoOutputTechnology >= 0 )
    {
      if ( v16 == 1 )
      {
        DXGMONITOR::_ReadVirtualModeSupportFromRegistry((DXGMONITOR *)a1);
        DXGMONITOR::_ReadScaleFactorFromMonitorStore((DXGMONITOR *)a1, (unsigned int *)(a1 + 488));
      }
      *(_DWORD *)(a1 + 24) |= 1u;
    }
  }
  return (unsigned int)VideoOutputTechnology;
}

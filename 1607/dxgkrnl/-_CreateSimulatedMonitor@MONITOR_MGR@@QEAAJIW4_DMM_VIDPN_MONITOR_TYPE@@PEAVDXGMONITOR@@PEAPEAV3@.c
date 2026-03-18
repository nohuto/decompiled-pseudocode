/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEC98
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0034E04 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089354 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00F242C (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        int a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  DXGMONITOR **v6; // r14
  __int64 v8; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rax
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGMONITOR *v24; // rbx
  __int64 v25; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // [rsp+78h] [rbp+10h] BYREF

  v6 = a5;
  v8 = a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v8 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a3 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  *v6 = 0LL;
  v14 = a6;
  if ( a3 == 5 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v31 = -2;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v15 + 16), v8, &v31, 0LL) < 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = v31;
    if ( v31 == -2 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( (v18 < 0 || v18 > 3 && v18 != 14)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v18)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((char *)a1, 0xFFFFFFFF, 0, 8u, 1LL, (__int64)v14);
    }
  }
  v20 = (char *)operator new(0x210uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v20 )
    v24 = DXGMONITOR::DXGMONITOR(v20, (struct MONITOR_MGR *)a1, v22, v23);
  else
    v24 = 0LL;
  if ( v24 )
  {
    v27 = DXGMONITOR::_InitializeMonitor((__int64)v24, (unsigned int)v8, 0LL, 0LL, 0, a3, a4, v14);
    v29 = v27;
    if ( v27 >= 0 )
    {
      *v6 = v24;
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v30 + 24) = v8;
      *(_QWORD *)(v30 + 32) = v29;
      WdLogEvent5_WdError(v30);
      DXGMONITOR::`scalar deleting destructor'(v24);
    }
    return (unsigned int)v29;
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v21);
    WdLogEvent5_WdError(v25);
    return 3221225495LL;
  }
}

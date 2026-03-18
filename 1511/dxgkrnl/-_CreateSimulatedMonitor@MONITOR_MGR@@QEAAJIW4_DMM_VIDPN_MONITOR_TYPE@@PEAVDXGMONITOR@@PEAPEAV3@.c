/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0185508
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002C5D4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00E1A8C (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        int a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5)
{
  DXGMONITOR **v5; // r14
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGMONITOR *v23; // rbx
  __int64 v24; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v7 = a2;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v7 == -1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a3 == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  *v5 = 0LL;
  if ( a3 == 5 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v30 = -2;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v13 + 16), v7, &v30, 0LL) < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = v30;
    if ( v30 == -2 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( (v16 < 0 || v16 > 3 && v16 != 14)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v16)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((char *)a1, v18, 0, 8, 1LL);
    }
  }
  v19 = (char *)operator new[](0x200uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v19 )
    v23 = DXGMONITOR::DXGMONITOR(v19, (struct MONITOR_MGR *)a1, v21, v22);
  else
    v23 = 0LL;
  if ( v23 )
  {
    v26 = DXGMONITOR::_InitializeMonitor((__int64)v23, (unsigned int)v7, 0LL, 0LL, 0, a3, a4);
    v28 = v26;
    if ( v26 >= 0 )
    {
      *v5 = v23;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = v7;
      *(_QWORD *)(v29 + 32) = v28;
      WdLogEvent5_WdError(v29);
      DXGMONITOR::`scalar deleting destructor'(v23);
    }
    return (unsigned int)v28;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v20);
    WdLogEvent5_WdError(v24);
    return 3221225495LL;
  }
}

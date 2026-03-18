/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181014
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C002CBC4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C00C9FE4 (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct DXGMONITOR *a4,
        DXGMONITOR **a5)
{
  DXGMONITOR **v5; // r14
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  DXGMONITOR *v26; // rbx
  __int64 v27; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v7 = (unsigned int)a2;
  v8 = a3;
  if ( !a5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v7 == -1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v8 == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  *v5 = 0LL;
  if ( v8 == 5 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v33 = -2;
    if ( (int)DmmGetVideoOutputTechnology(*(DXGADAPTER **)(v13 + 16), v7, &v33, 0LL) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = v33;
    if ( v33 == -2 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (v19 < 0 || v19 > 3 && v19 != 14)
      && *(_BYTE *)(a1 + 3)
      && (!IsInternalVideoOutput(v19)
       || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor((char *)a1, v21, 0, 8, 1LL);
    }
  }
  v22 = (char *)operator new[](0x1F0uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v22 )
    v26 = DXGMONITOR::DXGMONITOR(v22, (struct MONITOR_MGR *)a1, v24, v25);
  else
    v26 = 0LL;
  if ( v26 )
  {
    v29 = DXGMONITOR::_InitializeMonitor((__int64)v26, (unsigned int)v7, 0LL, 0LL, 0, v8, a4);
    v31 = v29;
    if ( v29 >= 0 )
    {
      *v5 = v26;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = v7;
      *(_QWORD *)(v32 + 32) = v31;
      WdLogEvent5_WdError(v32);
      DXGMONITOR::`scalar deleting destructor'(v26);
    }
    return (unsigned int)v31;
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v23);
    WdLogEvent5_WdError(v27);
    return 3221225495LL;
  }
}

/*
 * XREFs of DmmIsTargetForcable @ 0x1C0089AD0
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0089084 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3120 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178868 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C017A7D0 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01AFDF4 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmIsTargetForcable(__int64 a1, unsigned int a2, bool *a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // r8
  __int64 v15; // r8
  unsigned int v16; // r15d
  __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  bool v20; // al
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  int v22; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v25);
  }
  v8 = *(_QWORD *)(a1 + 2128);
  if ( !v8 )
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = a1;
    WdLogEvent5_WdError(v27);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 96) + 72LL));
  v13 = *(_QWORD *)(v9 + 96);
  v14 = (_QWORD *)(v13 + 24);
  if ( (_QWORD *)*v14 == v14 )
  {
    v16 = 0;
    v15 = 0LL;
  }
  else
  {
    v15 = *v14 - 8LL;
    if ( !v15 )
      goto LABEL_43;
    v16 = 0;
    while ( *(_DWORD *)(v15 + 24) != (_DWORD)v4 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 == v13 + 24 )
        v15 = 0LL;
      else
        v15 = v17 - 8;
      if ( !v15 )
        goto LABEL_43;
    }
  }
  if ( v15 )
  {
    if ( *(_DWORD *)(a1 + 276) == 21299
      && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2128) + 16LL)) < 1105 )
    {
      *a3 = 0;
    }
    else
    {
      if ( *(_DWORD *)(v15 + 112) == -1 )
      {
        v18 = *(_DWORD *)(v15 + 392);
        if ( v18 == -1 )
        {
          v19 = *(_DWORD *)(v15 + 72);
          v20 = (v19 < 4 || v19 >= 14) && v19 >= 0 && (v19 <= 3 || v19 == 14);
        }
        else
        {
          v20 = v18 == 1;
        }
        *a3 = v20;
      }
      else
      {
        *a3 = 1;
      }
      if ( a4 == 5 )
        *a3 = *(_QWORD *)(v15 + 96) == 0LL;
    }
    goto LABEL_25;
  }
LABEL_43:
  v29 = WdLogNewEntry5_WdWarning(v11, v10, v15, v12);
  *(_QWORD *)(v29 + 24) = v4;
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v28);
    WdLogEvent5_WdAssertion(v30);
  }
  *(_QWORD *)(v29 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
  WdLogEvent5_WdWarning(v29);
  v16 = -1071774971;
LABEL_25:
  if ( v13 )
  {
    v21 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 64);
    v22 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 72));
    if ( v22 )
    {
      if ( v22 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v31 + 24) = v22;
        WdLogEvent5_WdError(v31);
      }
    }
    else if ( v21 )
    {
      (**v21)(v21, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v9 + 40));
  return v16;
}

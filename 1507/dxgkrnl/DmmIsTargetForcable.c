/*
 * XREFs of DmmIsTargetForcable @ 0x1C008D4E4
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C008CF18 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00CADB4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z @ 0x1C01504D4 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0151B30 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmIsTargetForcable(__int64 a1, unsigned int a2, bool *a3, int a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rbx
  _QWORD *v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // edi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = 0LL;
LABEL_32:
    WdLogEvent5_WdError(v24);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1, v8, v9, v10);
    WdLogEvent5_WdAssertion(v25);
  }
  v11 = *(_QWORD *)(a1 + 1976);
  if ( !v11 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = a1;
    goto LABEL_32;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( !v12 )
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v12 + 40));
  v15 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v12 + 96) + 72LL), 1u);
  v16 = *(_QWORD *)(v12 + 96);
  v17 = (_QWORD *)(v16 + 24);
  if ( (_QWORD *)*v17 == v17 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = *v17 - 8LL;
    if ( !v18 )
    {
LABEL_38:
      v29 = WdLogNewEntry5_WdWarning(v14, v13, v18, 1LL);
      *(_QWORD *)(v29 + 24) = v4;
      if ( !*(_QWORD *)(v12 + 8) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
        WdLogEvent5_WdAssertion(v32);
      }
      *(_QWORD *)(v29 + 32) = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL);
      WdLogEvent5_WdWarning(v29);
      v22 = -1071774971;
      goto LABEL_27;
    }
    do
    {
      if ( *(_DWORD *)(v18 + 24) == (_DWORD)v4 )
        break;
      v19 = *(_QWORD *)(v18 + 8);
      v18 = v19 == v16 + 24 ? 0LL : v19 - 8;
    }
    while ( v18 );
  }
  if ( !v18 )
    goto LABEL_38;
  if ( *(_DWORD *)(a1 + 260) != 21299
    || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1976) + 16LL)) >= 1105 )
  {
    if ( *(_DWORD *)(v18 + 112) == -1 )
    {
      v20 = *(_DWORD *)(v18 + 392);
      if ( v20 != -1 )
      {
        *a3 = v20 == v15;
LABEL_24:
        if ( a4 == 5 )
          *a3 = *(_QWORD *)(v18 + 96) == 0LL;
        goto LABEL_26;
      }
      v21 = *(_DWORD *)(v18 + 72);
      if ( v21 < 0 || v21 > 3 && v21 != 14 )
        LOBYTE(v15) = 0;
    }
    *a3 = v15;
    goto LABEL_24;
  }
  *a3 = 0;
LABEL_26:
  v22 = 0;
LABEL_27:
  if ( v16 )
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 40));
  return v22;
}

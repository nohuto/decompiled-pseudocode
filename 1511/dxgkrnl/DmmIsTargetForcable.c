/*
 * XREFs of DmmIsTargetForcable @ 0x1C00987D8
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0098160 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z @ 0x1C01537E8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0155D90 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmIsTargetForcable(__int64 a1, unsigned int a2, bool *a3, int a4)
{
  __int64 v4; // r14
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rbx
  _QWORD *v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a1 + 1984);
  if ( !v11 )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 112);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v12 + 40));
  v16 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v12 + 96) + 72LL), 1u);
  v17 = *(_QWORD *)(v12 + 96);
  v18 = (_QWORD *)(v17 + 24);
  if ( (_QWORD *)*v18 == v18 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = *v18 - 8LL;
    if ( !v19 )
    {
LABEL_33:
      v25 = WdLogNewEntry5_WdWarning(v15, v14, v19, 1LL);
      *(_QWORD *)(v25 + 24) = v4;
      if ( !*(_QWORD *)(v12 + 8) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v26);
      }
      *(_QWORD *)(v25 + 32) = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL);
      WdLogEvent5_WdWarning(v25);
      v23 = -1071774971;
      goto LABEL_36;
    }
    do
    {
      if ( *(_DWORD *)(v19 + 24) == (_DWORD)v4 )
        break;
      v20 = *(_QWORD *)(v19 + 8);
      v19 = v20 == v17 + 24 ? 0LL : v20 - 8;
    }
    while ( v19 );
  }
  if ( !v19 )
    goto LABEL_33;
  if ( *(_DWORD *)(a1 + 260) != 21299
    || (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 1984) + 16LL)) >= 1105 )
  {
    if ( *(_DWORD *)(v19 + 112) == -1 )
    {
      v21 = *(_DWORD *)(v19 + 392);
      if ( v21 != -1 )
      {
        *a3 = v21 == v16;
        goto LABEL_30;
      }
      v22 = *(_DWORD *)(v19 + 72);
      if ( v22 > 3 && v22 != 14 )
        LOBYTE(v16) = 0;
    }
    *a3 = v16;
LABEL_30:
    if ( a4 == 5 )
      *a3 = *(_QWORD *)(v19 + 96) == 0LL;
    goto LABEL_32;
  }
  *a3 = 0;
LABEL_32:
  v23 = 0;
LABEL_36:
  if ( v17 )
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 64));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v12 + 40));
  return v23;
}

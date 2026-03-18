/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00108E0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00747D0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0077C70 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C008CC64 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00B6634 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6A44 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6BA8 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B6CAC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00B7318 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BC314 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C1250 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00C3CE0 (DxgkCompleteTopologyTransition.c)
 *     DxgkInternalDeviceIoctl @ 0x1C00D6AA0 (DxgkInternalDeviceIoctl.c)
 *     DxgkGetAdapter @ 0x1C00E2E20 (DxgkGetAdapter.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01504E0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkTrimProcessCommitment @ 0x1C0174760 (DxgkTrimProcessCommitment.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C017F490 (DxgkProcessLockScreen.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADF20 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01ADFB8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v9; // esi
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  _QWORD *v12; // rbx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  char v20; // [rsp+28h] [rbp-30h]

  v20 = 0;
  v19 = a1 + 376;
  if ( a1 == -376 )
  {
    v17 = WdLogNewEntry5_WdAssertion(-376LL);
    *(_QWORD *)(v17 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v19 + 8) == CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v18 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v9 = 0;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v19);
  v10 = (_QWORD *)(a1 + 416);
  v11 = *(_QWORD **)(a1 + 416);
LABEL_6:
  while ( 2 )
  {
    if ( v11 != v10 && v11 && !v9 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      _m_prefetchw(v12 + 3);
      v13 = v12[3];
      do
      {
        if ( !v13 )
          goto LABEL_6;
        v14 = v13;
        v13 = _InterlockedCompareExchange64(v12 + 3, v13 + 1, v13);
      }
      while ( v14 != v13 );
      if ( a4 == 1 )
      {
        v15 = v12[266] == 0LL;
      }
      else
      {
        if ( a4 != 2 )
        {
          if ( a4 == 3 && v12[266] )
            goto LABEL_16;
LABEL_15:
          v9 = a2(v12, a3);
LABEL_16:
          if ( _InterlockedExchangeAdd64(v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v12[2], (struct DXGADAPTER *)v12);
          continue;
        }
        v15 = v12[267] == 0LL;
      }
      if ( v15 )
        goto LABEL_16;
      goto LABEL_15;
    }
    break;
  }
  if ( v20 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v19);
  return v9;
}

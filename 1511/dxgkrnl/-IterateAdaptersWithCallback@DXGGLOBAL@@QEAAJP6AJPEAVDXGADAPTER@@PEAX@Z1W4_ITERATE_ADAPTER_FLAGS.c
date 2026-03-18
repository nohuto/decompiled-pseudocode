/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000D000 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006031C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C006043C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C0060540 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C00608EC (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C009D3B0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C009E3B4 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A2334 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00A640C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00AAB70 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00B90F0 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00B922C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1C00C0F10 (DxgkInternalDeviceIoctl.c)
 *     DxgkGetAdapter @ 0x1C00CCB40 (DxgkGetAdapter.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D4498 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0132040 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     DxgkProcessLockScreen @ 0x1C015A4B0 (DxgkProcessLockScreen.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0184804 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018489C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        int a4)
{
  unsigned int v8; // ebp
  _QWORD **v9; // r15
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  bool v15; // zf
  __int64 v16; // rdi
  __int64 v18; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(a1 + 472));
  v8 = 0;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v9 = (_QWORD **)(a1 + 536);
  v10 = *v9;
LABEL_2:
  while ( 2 )
  {
    if ( v10 != v9 && v10 && !v8 )
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
      _m_prefetchw(v11 + 3);
      v12 = v11[3];
      do
      {
        if ( !v12 )
          goto LABEL_2;
        v13 = v12 + 1;
        v14 = v12;
        v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
      }
      while ( v14 != v12 );
      if ( a4 == 1 )
      {
        v15 = v11[248] == 0LL;
      }
      else
      {
        if ( a4 != 2 )
        {
          if ( a4 == 3 && v11[248] )
            goto LABEL_12;
          goto LABEL_11;
        }
        v15 = v11[249] == 0LL;
      }
      if ( v15 )
      {
LABEL_12:
        v16 = _InterlockedDecrement64(v11 + 3);
        if ( !v16 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v11[2], (struct DXGADAPTER *)v11);
        if ( v16 < 0 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v18 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v18);
        }
        continue;
      }
LABEL_11:
      v8 = a2(v11, a3);
      goto LABEL_12;
    }
    break;
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  return v8;
}

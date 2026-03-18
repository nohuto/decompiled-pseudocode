/*
 * XREFs of ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4
 * Callers:
 *     ?EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C000A9A0 (-EnableDxgkrnlTelemetryProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0060640 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00630A0 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00631C0 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00632C4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0063448 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0063D58 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C008A9CC (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C009D8B4 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     DxgkCompleteTopologyTransition @ 0x1C00AE130 (DxgkCompleteTopologyTransition.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C00AE26C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1C00AE840 (DxgkInternalDeviceIoctl.c)
 *     DxgkGetAdapter @ 0x1C00BDD00 (DxgkGetAdapter.c)
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00BDEAC (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00C323C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C012BA90 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkProcessLockScreen @ 0x1C01561D0 (DxgkProcessLockScreen.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018033C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01803D4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::IterateAdaptersWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD *, __int64),
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r15
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  bool v19; // zf
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  DXGFASTMUTEX *v26; // [rsp+20h] [rbp-38h] BYREF
  char v27; // [rsp+28h] [rbp-30h]

  v26 = (DXGFASTMUTEX *)(a1 + 376);
  v4 = a4;
  v27 = 0;
  if ( a1 == -376 )
  {
    v22 = WdLogNewEntry5_WdAssertion(-376LL, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v26 + 1) == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v9 = 0;
  if ( v27 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v24[5] = &v26;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  DXGFASTMUTEX::Acquire(v26);
  v13 = (_QWORD *)(a1 + 416);
  v27 = 1;
  v14 = *(_QWORD **)(a1 + 416);
LABEL_8:
  while ( 2 )
  {
    if ( v14 != v13 && v14 && !v9 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      _m_prefetchw(v15 + 3);
      v16 = v15[3];
      do
      {
        if ( !v16 )
          goto LABEL_8;
        v17 = v16 + 1;
        v18 = v16;
        v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
      }
      while ( v18 != v16 );
      if ( v4 == 1 )
      {
        v19 = v15[247] == 0LL;
      }
      else
      {
        if ( v4 != 2 )
        {
          if ( v4 == 3 && v15[247] )
            goto LABEL_18;
          goto LABEL_17;
        }
        v19 = v15[248] == 0LL;
      }
      if ( v19 )
      {
LABEL_18:
        v20 = _InterlockedDecrement64(v15 + 3);
        if ( !v20 )
          DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v15[2], (struct DXGADAPTER *)v15);
        if ( v20 < 0 )
        {
          v25 = WdLogNewEntry5_WdAssertion(v17, v10, v11, v12);
          *(_QWORD *)(v25 + 24) = 1067LL;
          WdLogEvent5_WdAssertion(v25);
        }
        continue;
      }
LABEL_17:
      v9 = a2(v15, a3);
      goto LABEL_18;
    }
    break;
  }
  if ( v27 )
  {
    v27 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v26);
  }
  return v9;
}

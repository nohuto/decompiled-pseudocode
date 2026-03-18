/*
 * XREFs of DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08
 * Callers:
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0086898 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00C1D80 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C3980 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00C5260 (DxgkIsSourceInHardwareClone.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C5DC0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r12
  DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v7 = a1;
  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v25 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v25 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v25);
    return 3223191554LL;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)v7 + 266);
  if ( !v9 )
  {
    v25 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v25 + 24) = v7;
    goto LABEL_15;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v10 + 40));
    v15 = *(_QWORD *)(v10 + 80);
    v28 = -1;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v10 + 80);
      v27[0] = v16;
      if ( v16 )
      {
        v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v16 + 96), v4, a3, &v28);
        v7 = (DXGADAPTER *)v17;
        if ( v17 >= 0 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v16 + 24));
          LODWORD(v7) = 0;
          *a4 = v28;
LABEL_9:
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v10 + 40));
          return (unsigned int)v7;
        }
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        v23[3] = a3;
        v23[4] = v4;
        v23[5] = v16 + 96;
        v23[6] = v7;
LABEL_11:
        auto_rc<DMMVIDPN const>::reset(v27, 0LL);
        goto LABEL_9;
      }
    }
    else
    {
      v27[0] = 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v7;
    LODWORD(v7) = -1071774884;
    goto LABEL_11;
  }
  v26 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v26 + 24) = v7;
  WdLogEvent5_WdError(v26);
  return 3223192373LL;
}

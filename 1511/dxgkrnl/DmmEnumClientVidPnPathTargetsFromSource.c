/*
 * XREFs of DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8
 * Callers:
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0099E74 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00ABB60 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00ADA04 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C00C61B0 (DxgkIsSourceInHardwareClone.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r14
  DXGADAPTER *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v29[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v7 = a1;
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v24 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v24 + 24) = 0LL;
    goto LABEL_12;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v9 = *((_QWORD *)v7 + 248);
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v24 + 24) = v7;
LABEL_12:
    WdLogEvent5_WdError(v24);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v29, v10);
    v11 = *(_QWORD *)(v10 + 80);
    v30 = -1;
    v28 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 80);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, v12);
    if ( v28 )
    {
      v17 = v28 + 96;
      v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v28 + 96), v4, a3, &v30);
      v7 = (DXGADAPTER *)v18;
      if ( v18 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
        LODWORD(v7) = 0;
        *a4 = v30;
LABEL_10:
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v29[0] + 40LL));
        return (unsigned int)v7;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
      v25[3] = a3;
      v25[4] = v4;
      v25[5] = v17;
      v25[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13, v15, v16) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    goto LABEL_10;
  }
  v27 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v27 + 24) = v7;
  WdLogEvent5_WdError(v27);
  return 3223192373LL;
}

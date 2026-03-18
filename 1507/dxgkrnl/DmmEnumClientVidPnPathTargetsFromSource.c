/*
 * XREFs of DmmEnumClientVidPnPathTargetsFromSource @ 0x1C005FDB4
 * Callers:
 *     DxgkIsSourceInHardwareClone @ 0x1C005E7F0 (DxgkIsSourceInHardwareClone.c)
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmEnumClientVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r14
  DXGADAPTER *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v33[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v34; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v7 = a1;
  if ( !a4 )
  {
    v29 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v29 + 24) = 0LL;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v28 + 24) = 0LL;
    goto LABEL_17;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v30);
  }
  v12 = *((_QWORD *)v7 + 247);
  if ( !v12 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v7;
LABEL_17:
    WdLogEvent5_WdError(v28);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v33, v13);
    v14 = *(_QWORD *)(v13 + 80);
    v34 = -1;
    v32 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v13 + 80);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, v15);
    if ( v32 )
    {
      v20 = v32 + 96;
      v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY *)(v32 + 96), v4, a3, &v34);
      v7 = (DXGADAPTER *)v21;
      if ( v21 >= 0 )
      {
        auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
        LODWORD(v7) = 0;
        *a4 = v34;
LABEL_12:
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33[0] + 40LL));
        return (unsigned int)v7;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      v27[3] = a3;
      v27[4] = v4;
      v27[5] = v20;
      v27[6] = v7;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = v7;
      LODWORD(v7) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
    goto LABEL_12;
  }
  v31 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v31 + 24) = v7;
  WdLogEvent5_WdError(v31);
  return 3223192373LL;
}

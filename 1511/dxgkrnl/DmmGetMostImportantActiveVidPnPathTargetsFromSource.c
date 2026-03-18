/*
 * XREFs of DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00C4C40
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0007810 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0007CB4 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00C4D34 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantActiveVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        char a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = 0LL;
    goto LABEL_13;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = a1;
LABEL_13:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v27, v10);
    v28 = 0LL;
    if ( a2 )
    {
      v19 = *(_QWORD *)(v10 + 80);
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
        v20 = *(_QWORD *)(v10 + 80);
      }
      else
      {
        v20 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v28, v20);
      v12 = v28;
      if ( !v28 )
      {
        v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = a1;
        WdLogEvent5_WdWarning(v25);
        MostImportantVidPnPathTargetsFromSource = -1071774973;
        goto LABEL_11;
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 32LL));
      auto_rc<DMMVIDPN const>::reset(&v28, *(_QWORD *)(v10 + 72));
      v12 = v28;
      if ( !v28 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v26);
      }
    }
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                (const struct DMMVIDPNTOPOLOGY *)(v12 + 96),
                                                a3,
                                                a4);
LABEL_11:
    auto_rc<DMMVIDPN const>::reset(&v28, 0LL);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v27[0] + 40LL));
    return MostImportantVidPnPathTargetsFromSource;
  }
  v18 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v18 + 24) = a1;
  WdLogEvent5_WdError(v18);
  return 3223192373LL;
}

/*
 * XREFs of DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00CFF38
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00066BC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C000E398 (-UpdateVidPnTargetList@ADAPTER_DISPLAY@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D002C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantActiveVidPnPathTargetsFromSource(
        DXGADAPTER *a1,
        char a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD v33[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = 0LL;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v21 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v21 + 24) = 0LL;
    goto LABEL_13;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = *((_QWORD *)a1 + 247);
  if ( !v12 )
  {
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = a1;
LABEL_13:
    WdLogEvent5_WdError(v21);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v33, v13);
    v34 = 0LL;
    if ( a2 )
    {
      v25 = *(_QWORD *)(v13 + 80);
      if ( v25 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
        v26 = *(_QWORD *)(v13 + 80);
      }
      else
      {
        v26 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v34, v26);
      v18 = v34;
      if ( !v34 )
      {
        v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
        *(_QWORD *)(v31 + 24) = a1;
        WdLogEvent5_WdWarning(v31);
        MostImportantVidPnPathTargetsFromSource = -1071774973;
        goto LABEL_11;
      }
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 72) + 32LL));
      auto_rc<DMMVIDPN const>::reset(&v34, *(_QWORD *)(v13 + 72));
      v18 = v34;
      if ( !v34 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        WdLogEvent5_WdAssertion(v32);
      }
    }
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                (const struct DMMVIDPNTOPOLOGY *)(v18 + 96),
                                                a3,
                                                a4);
LABEL_11:
    auto_rc<DMMVIDPN const>::reset(&v34, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33[0] + 40LL));
    return MostImportantVidPnPathTargetsFromSource;
  }
  v24 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v24 + 24) = a1;
  WdLogEvent5_WdError(v24);
  return 3223192373LL;
}

/*
 * XREFs of DmmIsVidPnTargetConnectedToSource @ 0x1C01771A4
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AAEC0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmIsVidPnTargetConnectedToSource(DXGADAPTER *a1, int a2, unsigned int a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD v25[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)a1 + 247);
  if ( !v17 )
  {
    v11 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v25, v18);
    v20 = *(_QWORD *)(v18 + 80);
    v26 = 0LL;
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 32));
      v21 = *(_QWORD *)(v18 + 80);
    }
    else
    {
      v21 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v26, v21);
    if ( v26 )
    {
      *a4 = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v26 + 96), a3, v23, v24) == a2;
      auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v22, v23, v24) + 24) = a1;
      auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
      v4 = -1071774884;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25[0] + 40LL));
    return v4;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}

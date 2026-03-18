/*
 * XREFs of DmmIsPresentPathInClientVidPnTopology @ 0x1C00AA078
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = 0LL;
    goto LABEL_12;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v16);
  }
  v9 = *((_QWORD *)a1 + 248);
  if ( !v9 )
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = a1;
LABEL_12:
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v18, v10);
    v11 = *(_QWORD *)(v10 + 80);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 80);
      v19 = v12;
      if ( v12 )
      {
        *a4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v12 + 96), a2, a3) != 0LL;
LABEL_10:
        auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v18[0] + 40LL));
        return 0LL;
      }
    }
    else
    {
      v19 = 0LL;
    }
    *a4 = 0;
    goto LABEL_10;
  }
  v17 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v17 + 24) = a1;
  WdLogEvent5_WdError(v17);
  return 3223192373LL;
}

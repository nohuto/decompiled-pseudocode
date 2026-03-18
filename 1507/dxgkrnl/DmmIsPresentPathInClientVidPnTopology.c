/*
 * XREFs of DmmIsPresentPathInClientVidPnTopology @ 0x1C0061F38
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 0LL;
    goto LABEL_14;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = *((_QWORD *)a1 + 247);
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = a1;
LABEL_14:
    WdLogEvent5_WdError(v17);
    return 3223191554LL;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v21, v13);
    v14 = *(_QWORD *)(v13 + 80);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v13 + 80);
      v22 = v15;
      if ( v15 )
      {
        *a4 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v15 + 96), a2, a3) != 0LL;
LABEL_10:
        auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21[0] + 40LL));
        return 0LL;
      }
    }
    else
    {
      v22 = 0LL;
    }
    *a4 = 0;
    goto LABEL_10;
  }
  v20 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v20 + 24) = a1;
  WdLogEvent5_WdError(v20);
  return 3223192373LL;
}

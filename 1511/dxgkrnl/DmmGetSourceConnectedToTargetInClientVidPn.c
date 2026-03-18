/*
 * XREFs of DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C017AF1C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkOpmGetRedirectionInfo @ 0x1C0131178 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DmmGetSourceConnectedToTargetInClientVidPn(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int PathSourceFromTarget; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+18h] BYREF
  __int64 v26; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a3 )
    return 3221225485LL;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)a1 + 248);
  if ( !v11 )
  {
    v8 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_5;
  }
  v12 = *(_QWORD *)(v11 + 112);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, v12);
    v14 = *(_QWORD *)(v12 + 80);
    v25 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v12 + 80);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v25, v15);
    if ( v25 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                               (DMMVIDPNTOPOLOGY *)(v25 + 96),
                               (unsigned int)v4,
                               v17,
                               v18);
      if ( PathSourceFromTarget == -1 )
      {
        v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        v3 = -1071774912;
        *(_QWORD *)(v24 + 24) = v4;
        *(_QWORD *)(v24 + 32) = a1;
      }
      else
      {
        *a3 = PathSourceFromTarget;
      }
    }
    else
    {
      v3 = -1071774884;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v16, v17, v18) + 24) = a1;
    }
    auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v26 + 40));
    return v3;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}

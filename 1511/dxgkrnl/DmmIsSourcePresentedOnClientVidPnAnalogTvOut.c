/*
 * XREFs of DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C017B414
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0153088 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(DXGADAPTER *a1, unsigned int a2, _BYTE *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  DMMVIDPNTOPOLOGY *v25; // r15
  __int64 v26; // rbx
  __int64 i; // rbp
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v39[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v40; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
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
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 248);
  if ( !v14 )
  {
    v11 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v14 + 112);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v39, v15);
    v17 = *(_QWORD *)(v15 + 80);
    v38 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v15 + 80);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, v18);
    if ( v38 )
    {
      v25 = (DMMVIDPNTOPOLOGY *)(v38 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 96) + 72LL));
      v26 = *(_QWORD *)(v15 + 96);
      for ( i = 0LL; ; ++i )
      {
        v40 = -1;
        v28 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, v5, i, &v40);
        v24 = v28;
        if ( v28 < 0 )
          break;
        v33 = v40;
        if ( v40 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v26, v40);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 88) )
          {
            *a3 = 1;
            *a4 = v33;
LABEL_23:
            if ( v26 )
              ReferenceCounted::Release((ReferenceCounted *)(v26 + 64));
            auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
            goto LABEL_31;
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v36 + 24) = v33;
          *(_QWORD *)(v36 + 32) = v26;
          WdLogEvent5_WdError(v36);
        }
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
      v37[3] = i;
      v37[4] = v5;
      v37[5] = v25;
      v37[6] = v24;
      if ( v26 )
        ReferenceCounted::Release((ReferenceCounted *)(v26 + 64));
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdWarning(v23);
      LODWORD(v24) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
    v4 = v24;
LABEL_31:
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v39[0] + 40LL));
    return v4;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}

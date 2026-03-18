/*
 * XREFs of DmmGetPathContentFromClientVidPnSource @ 0x1C01765AC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C014FD7C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(DXGADAPTER *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rbx
  DMMVIDPNTOPOLOGY *v26; // r13
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v38; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD v43[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+80h] [rbp+18h] BYREF
  __int64 v46; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)a1 + 247);
  if ( !v15 )
  {
    v9 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    v18 = 0;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v43, v16);
    v19 = *(_QWORD *)(v16 + 80);
    v46 = 0LL;
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
      v20 = *(_QWORD *)(v16 + 80);
    }
    else
    {
      v20 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v46, v20);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 96) + 72LL));
      v24 = 0LL;
      v25 = *(_QWORD *)(v16 + 96);
      v26 = (DMMVIDPNTOPOLOGY *)(v46 + 96);
      while ( 1 )
      {
        v45 = -1;
        v27 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v26, v5, v24, &v45);
        v23 = v27;
        if ( v27 < 0 )
          break;
        v32 = v45;
        if ( v45 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath(v26, v5, v45);
        if ( !Path )
        {
          v38 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
          WdLogEvent5_WdAssertion(v38);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v25, v32);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 88) )
          {
            v18 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v25 )
              ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
            auto_rc<DMMVIDPN const>::reset(&v46, 0LL);
            *a3 = v18;
            goto LABEL_33;
          }
        }
        else
        {
          v41 = WdLogNewEntry5_WdError(v40);
          *(_QWORD *)(v41 + 24) = v32;
          *(_QWORD *)(v41 + 32) = v25;
          WdLogEvent5_WdError(v41);
        }
        v5 = a2;
        ++v24;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      v42[3] = v24;
      v42[4] = v5;
      v42[5] = v26;
      v42[6] = v23;
      if ( v25 )
        ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdError(v22);
      LODWORD(v23) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v46, 0LL);
    v3 = v23;
LABEL_33:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40LL));
    return v3;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}

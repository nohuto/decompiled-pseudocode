/*
 * XREFs of DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C0175EF8
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C014FD7C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  DMMVIDPNTOPOLOGY *v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v33; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+20h] [rbp-20h] BYREF
  DMMVIDPNTOPOLOGY *v39; // [rsp+28h] [rbp-18h]
  __int64 v40; // [rsp+30h] [rbp-10h] BYREF
  int v42; // [rsp+90h] [rbp+50h]
  char v43; // [rsp+90h] [rbp+50h]
  unsigned int v44; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a3 = 0;
  *a3 |= 1u;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(a1 + 1976);
  if ( !v9 )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    v12 = v42;
    v43 = 0;
    v13 = v12 | 7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v40, v10);
    v14 = *(_QWORD *)(v10 + 80);
    v38 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v10 + 80);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, v15);
    if ( v38 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 96) + 72LL));
      v19 = 0LL;
      v20 = *(_QWORD *)(v10 + 96);
      v21 = (DMMVIDPNTOPOLOGY *)(v38 + 96);
      v39 = (DMMVIDPNTOPOLOGY *)(v38 + 96);
      while ( 1 )
      {
        v44 = -1;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, a2, v19, &v44);
        v18 = v22;
        if ( v22 < 0 )
          break;
        v27 = v44;
        if ( v44 == -1 )
        {
          if ( v20 )
            ReferenceCounted::Release((ReferenceCounted *)(v20 + 64));
          auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
          if ( v43 )
            *a3 = v13;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v21, a2, v44);
        if ( !Path )
        {
          v33 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          WdLogEvent5_WdAssertion(v33);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, v27);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 88) )
          {
            v43 = 1;
            v13 &= *((_DWORD *)Path + 42) | 0xFFFFFFF8;
          }
        }
        else
        {
          v36 = WdLogNewEntry5_WdError(v35);
          *(_QWORD *)(v36 + 24) = v27;
          *(_QWORD *)(v36 + 32) = v20;
          WdLogEvent5_WdError(v36);
        }
        v21 = v39;
        ++v19;
      }
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v37[3] = v19;
      v37[4] = a2;
      v37[5] = v21;
      v37[6] = v18;
      if ( v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 64));
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      LODWORD(v18) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
    v3 = v18;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40 + 40));
    return v3;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}

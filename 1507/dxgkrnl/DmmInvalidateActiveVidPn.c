/*
 * XREFs of DmmInvalidateActiveVidPn @ 0x1C0176ACC
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C013C3E0 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C016D870 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C0171F7C (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C017375C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(DXGADAPTER *this, __int64 a2, void *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct DMMVIDPN *v36; // rbx
  char v37; // r14
  char *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  DMMVIDPNTOPOLOGY *v46; // r12
  __int64 v47; // rax
  _QWORD *v48; // rdi
  char *v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r13d
  __int64 v53; // rax
  __int64 v54; // rax
  char *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v62; // [rsp+38h] [rbp-18h] BYREF
  __int64 v63; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v64; // [rsp+80h] [rbp+30h] BYREF

  v5 = a4;
  v7 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v13);
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *((_QWORD *)this + 247);
  if ( !v22 )
  {
    v15 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v15 + 24) = this;
    goto LABEL_3;
  }
  v23 = *(_QWORD *)(v22 + 88);
  if ( v23 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v63, *(_QWORD *)(v22 + 88));
    v64 = 0LL;
    v62 = 0LL;
    v25 = VIDPN_MGR::RecommendFunctionalVidPn((ADAPTER_DISPLAY **)v23, v7, a3, v5, &v62);
    v30 = v25;
    if ( v25 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v64, (__int64)v62);
      v36 = v64;
      v37 = 0;
      if ( v7 == 1 )
      {
        v37 = 1;
        v38 = (char *)v64 + 96;
        if ( v64 == (struct DMMVIDPN *)-96LL )
        {
          v39 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = *(_QWORD *)(v23 + 80);
        v61 = 0LL;
        if ( v40 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 32));
          v41 = *(_QWORD *)(v23 + 80);
          v36 = v64;
        }
        else
        {
          v41 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v61, v41);
        if ( v61 )
        {
          v46 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
          if ( v61 == -96 )
          {
            v47 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
            WdLogEvent5_WdAssertion(v47);
          }
          if ( *((_QWORD *)v46 + 5) == *((_QWORD *)v38 + 5) )
          {
            v48 = v38 + 24;
            if ( (_QWORD *)*v48 == v48 )
              goto LABEL_34;
            v49 = (char *)(*v48 - 8LL);
            if ( !v49 )
              goto LABEL_34;
            do
            {
              v50 = *(unsigned int *)(*((_QWORD *)v49 + 11) + 24LL);
              v51 = *((_QWORD *)v49 + 12);
              a5 = v50;
              v52 = *(_DWORD *)(v51 + 24);
              if ( (_DWORD)v50 == -1 )
              {
                v53 = WdLogNewEntry5_WdAssertion(v50, v42, v44, v45);
                WdLogEvent5_WdAssertion(v53);
              }
              if ( v52 == -1 )
              {
                v54 = WdLogNewEntry5_WdAssertion(v50, v42, v44, v45);
                WdLogEvent5_WdAssertion(v54);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v46, a5, v52) )
                break;
              v55 = (char *)*((_QWORD *)v49 + 1);
              v49 = v55 == v38 + 24 ? 0LL : v55 - 8;
            }
            while ( v49 );
            if ( !v49 )
LABEL_34:
              v37 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v61, 0LL);
        if ( v37 )
        {
          v57 = WdLogNewEntry5_WdDmmEvent(v56);
          *(_QWORD *)(v57 + 24) = v36;
          WdLogEvent5_WdDmmEvent(v57);
        }
      }
      LOBYTE(v34) = v37;
      v58 = VIDPN_MGR::CommitVidPnViaSDC((VIDPN_MGR *)v23, v36, v34);
      v30 = v58;
      if ( v58 >= 0 )
      {
        LODWORD(v30) = 0;
      }
      else
      {
        v60 = WdLogNewEntry5_WdError(v59);
        *(_QWORD *)(v60 + 24) = v36;
        *(_QWORD *)(v60 + 32) = v30;
        WdLogEvent5_WdError(v60);
      }
    }
    else
    {
      v31 = WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      *(_QWORD *)(v31 + 24) = 0LL;
      *(_QWORD *)(v31 + 32) = v30;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v64, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v63 + 40));
    return (unsigned int)v30;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}

/*
 * XREFs of DmmInvalidateActiveVidPn @ 0x1C017B064
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C0142810 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C0172080 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z @ 0x1C01767FC (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@E@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0177D78 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(DXGADAPTER *this, __int64 a2, void *a3, __int64 a4, unsigned int a5)
{
  UINT v5; // edi
  __int32 v7; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  struct DMMVIDPN *v27; // rbx
  char v28; // r14
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  DMMVIDPNTOPOLOGY *v34; // r12
  __int64 v35; // rax
  _QWORD *v36; // rdi
  char *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r13d
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v50; // [rsp+38h] [rbp-18h] BYREF
  __int64 v51; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v52; // [rsp+80h] [rbp+30h] BYREF

  v5 = a4;
  v7 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v12);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)this + 248);
  if ( !v16 )
  {
    v12 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v12 + 24) = this;
    goto LABEL_3;
  }
  v17 = *(_QWORD *)(v16 + 112);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v51, *(_QWORD *)(v16 + 112));
    v52 = 0LL;
    v50 = 0LL;
    v19 = VIDPN_MGR::RecommendFunctionalVidPn((ADAPTER_DISPLAY **)v17, v7, a3, v5, &v50);
    v24 = v19;
    if ( v19 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v52, (__int64)v50);
      v27 = v52;
      v28 = 0;
      if ( v7 == 1 )
      {
        v28 = 1;
        v29 = (char *)v52 + 96;
        if ( v52 == (struct DMMVIDPN *)-96LL )
        {
          v30 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v30);
        }
        v31 = *(_QWORD *)(v17 + 80);
        v49 = 0LL;
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 32));
          v32 = *(_QWORD *)(v17 + 80);
          v27 = v52;
        }
        else
        {
          v32 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v49, v32);
        if ( v49 )
        {
          v34 = (DMMVIDPNTOPOLOGY *)(v49 + 96);
          if ( v49 == -96 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v35);
          }
          if ( *((_QWORD *)v34 + 5) == *((_QWORD *)v29 + 5) )
          {
            v36 = v29 + 24;
            if ( (_QWORD *)*v36 == v36 )
              goto LABEL_34;
            v37 = (char *)(*v36 - 8LL);
            if ( !v37 )
              goto LABEL_34;
            do
            {
              v38 = *(unsigned int *)(*((_QWORD *)v37 + 11) + 24LL);
              v39 = *((_QWORD *)v37 + 12);
              a5 = v38;
              v40 = *(_DWORD *)(v39 + 24);
              if ( (_DWORD)v38 == -1 )
              {
                v41 = WdLogNewEntry5_WdAssertion(v38);
                WdLogEvent5_WdAssertion(v41);
              }
              if ( v40 == -1 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v38);
                WdLogEvent5_WdAssertion(v42);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v34, a5, v40) )
                break;
              v43 = (char *)*((_QWORD *)v37 + 1);
              v37 = v43 == v29 + 24 ? 0LL : v43 - 8;
            }
            while ( v37 );
            if ( !v37 )
LABEL_34:
              v28 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v49, 0LL);
        if ( v28 )
        {
          v45 = WdLogNewEntry5_WdDmmEvent(v44);
          *(_QWORD *)(v45 + 24) = v27;
          WdLogEvent5_WdDmmEvent(v45);
        }
      }
      v46 = VIDPN_MGR::CommitVidPnViaSDC((struct _KTHREAD ***)v17, v27, v28);
      v24 = v46;
      if ( v46 >= 0 )
      {
        LODWORD(v24) = 0;
      }
      else
      {
        v48 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v48 + 24) = v27;
        *(_QWORD *)(v48 + 32) = v24;
        WdLogEvent5_WdError(v48);
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = 0LL;
      *(_QWORD *)(v25 + 32) = v24;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v52, 0LL);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v51 + 40));
    return (unsigned int)v24;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}

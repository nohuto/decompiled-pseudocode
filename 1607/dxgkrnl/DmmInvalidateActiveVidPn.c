/*
 * XREFs of DmmInvalidateActiveVidPn @ 0x1C01A46EC
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C0164290 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C019BD20 (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A00B0 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        unsigned int a6)
{
  UINT v6; // edi
  __int32 v8; // r14d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  struct DMMVIDPN *v28; // rbx
  char v29; // r15
  char *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  DMMVIDPNTOPOLOGY *v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rdi
  char *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rax
  char *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v51; // [rsp+38h] [rbp-18h] BYREF
  __int64 v52; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v53; // [rsp+80h] [rbp+30h] BYREF

  v6 = a4;
  v8 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v13);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 266);
  if ( !v17 )
  {
    v13 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v13 + 24) = this;
    goto LABEL_3;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v52, *(_QWORD *)(v17 + 88));
    v53 = 0LL;
    v51 = 0LL;
    v20 = VIDPN_MGR::RecommendFunctionalVidPn((ADAPTER_DISPLAY **)v18, v8, a3, v6, &v51);
    v25 = v20;
    if ( v20 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v53, (__int64)v51);
      v28 = v53;
      v29 = 0;
      if ( v8 == 1 )
      {
        v29 = 1;
        v30 = (char *)v53 + 96;
        if ( v53 == (struct DMMVIDPN *)-96LL )
        {
          v31 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v31);
        }
        v32 = *(_QWORD *)(v18 + 80);
        v50 = 0LL;
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
          v33 = *(_QWORD *)(v18 + 80);
          v28 = v53;
        }
        else
        {
          v33 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v50, v33);
        if ( v50 )
        {
          v35 = (DMMVIDPNTOPOLOGY *)(v50 + 96);
          if ( v50 == -96 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v34);
            WdLogEvent5_WdAssertion(v36);
          }
          if ( *((_QWORD *)v35 + 5) == *((_QWORD *)v30 + 5) )
          {
            v37 = v30 + 24;
            if ( (_QWORD *)*v37 == v37 )
              goto LABEL_34;
            v38 = (char *)(*v37 - 8LL);
            if ( !v38 )
              goto LABEL_34;
            do
            {
              v39 = *(unsigned int *)(*((_QWORD *)v38 + 11) + 24LL);
              v40 = *((_QWORD *)v38 + 12);
              a6 = v39;
              v41 = *(_DWORD *)(v40 + 24);
              if ( (_DWORD)v39 == -1 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v39);
                WdLogEvent5_WdAssertion(v42);
              }
              if ( v41 == -1 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v39);
                WdLogEvent5_WdAssertion(v43);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v35, a6, v41) )
                break;
              v44 = (char *)*((_QWORD *)v38 + 1);
              v38 = v44 == v30 + 24 ? 0LL : v44 - 8;
            }
            while ( v38 );
            if ( !v38 )
LABEL_34:
              v29 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v50, 0LL);
        if ( v29 )
        {
          v46 = WdLogNewEntry5_WdDmmEvent(v45);
          *(_QWORD *)(v46 + 24) = v28;
          WdLogEvent5_WdDmmEvent(v46);
        }
      }
      v47 = VIDPN_MGR::CommitVidPnViaSDC((VIDPN_MGR *)v18, v28, v29, a5);
      v25 = v47;
      if ( v47 >= 0 )
      {
        LODWORD(v25) = 0;
      }
      else
      {
        v49 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v49 + 24) = v28;
        *(_QWORD *)(v49 + 32) = v25;
        WdLogEvent5_WdError(v49);
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 32) = v25;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v53, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
    return (unsigned int)v25;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}

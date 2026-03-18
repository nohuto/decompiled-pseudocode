/*
 * XREFs of ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00AE750
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0003E38 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DMMVIDPNTARGETMODESET *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // [rsp+50h] [rbp+18h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 6037);
  v5 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 48) + 72LL) == v5 )
    {
      v21 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v21 + 24) = v8;
      WdLogEvent5_WdError(v21);
      v7 = -1071774909;
    }
    else
    {
      v9 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
      v14 = (struct DMMVIDPNTARGETMODESET *)v9;
      if ( v9 )
      {
        v15 = *(_QWORD *)(v9 + 112);
        if ( !v15 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
          WdLogEvent5_WdAssertion(v23);
        }
        if ( !*(_QWORD *)(v15 + 40) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
          WdLogEvent5_WdAssertion(v24);
        }
        if ( ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL) == v8 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, *(_QWORD *)(v8 + 48));
          DMMVIDPNTARGET::ReleaseModeSet((struct DMMVIDPNTARGETMODESET **)v15, v14);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
        }
        else
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          if ( !*(_QWORD *)(v15 + 40) )
          {
            v30 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
            WdLogEvent5_WdAssertion(v30);
          }
          v29[3] = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
          v29[4] = v14;
          v29[5] = v8;
          WdLogEvent5_WdError(v29);
          v7 = -1071774928;
        }
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v22 + 24) = a2;
        WdLogEvent5_WdError(v22);
        v7 = -1071774967;
      }
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    v7 = -1071774973;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 6037);
  return v7;
}

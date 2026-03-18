/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00D06F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  DMMVIDPNTARGETMODESET *v5; // rax
  __int64 v6; // rcx
  DMMVIDPNTARGETMODESET *v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 Container; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rbp
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  DXGK_ENUM_PIVOT v41; // [rsp+50h] [rbp+18h] BYREF

  v3 = (char)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( !v5 )
  {
    v30 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    LODWORD(v13) = -1071774967;
    goto LABEL_17;
  }
  v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v13 = v8;
  if ( v8 < 0 )
  {
    v31 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v13;
    goto LABEL_17;
  }
  v14 = *((_QWORD *)v7 + 14);
  if ( !v14 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*(_QWORD *)(v14 + 40) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v33);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
  v19 = Container;
  v20 = *(_QWORD *)(Container + 48);
  v21 = Container + 88;
  v41.VidPnSourceId = -1;
  v22 = *(unsigned int *)(v14 + 24);
  v41.VidPnTargetId = *(_DWORD *)(v14 + 24);
  if ( Container != -88 )
    v21 = Container;
  if ( !v21 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v22, v16, v17, v18);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( v3 )
  {
    v23 = VIDPN_MGR::_EnumVidPnCofuncModality(v20, v21, 6, &v41);
    v13 = v23;
    if ( v23 < 0 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v37[3] = v21;
      v37[4] = 6LL;
      v37[5] = &v41;
      if ( !*(_QWORD *)(v20 + 8) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v36, v35, v26, v38);
        WdLogEvent5_WdAssertion(v39);
      }
      v25 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL);
      v37[6] = v25;
      v37[7] = v13;
      goto LABEL_15;
    }
  }
  else
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
    v29[3] = 6LL;
    v29[4] = v21;
    v29[5] = v41.VidPnSourceId;
    v29[6] = v41.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v29);
  }
  LODWORD(v13) = 0;
LABEL_15:
  if ( (int)v13 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v40[3] = *(unsigned int *)(v14 + 24);
    v40[5] = (int)v13;
    v40[4] = v19;
    WdLogEvent5_WdError(v40);
  }
  else
  {
    LODWORD(v13) = 0;
  }
LABEL_17:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 6016);
  return (unsigned int)v13;
}

/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00E6230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0004F58 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000FB9C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F9B8 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
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
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rbp
  __int64 v34; // rax
  _QWORD *v35; // rax
  DXGK_ENUM_PIVOT v36; // [rsp+50h] [rbp+18h] BYREF

  v3 = (char)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6016);
  v5 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( !v5 )
  {
    v27 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    LODWORD(v13) = -1071774967;
    goto LABEL_17;
  }
  v8 = DMMVIDPNTARGETMODESET::UnpinMode(v5);
  v13 = v8;
  if ( v8 < 0 )
  {
    v28 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    *(_QWORD *)(v28 + 24) = this;
    *(_QWORD *)(v28 + 32) = v13;
    goto LABEL_17;
  }
  v14 = *((_QWORD *)v7 + 14);
  if ( !v14 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !*(_QWORD *)(v14 + 40) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v30);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL);
  v16 = Container;
  v17 = *(_QWORD *)(Container + 48);
  v18 = Container + 88;
  v36.VidPnSourceId = -1;
  v19 = *(unsigned int *)(v14 + 24);
  v36.VidPnTargetId = *(_DWORD *)(v14 + 24);
  if ( Container != -88 )
    v18 = Container;
  if ( !v18 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( v3 )
  {
    v20 = VIDPN_MGR::_EnumVidPnCofuncModality(v17, v18, 6, &v36);
    v13 = v20;
    if ( v20 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v33[3] = v18;
      v33[4] = 6LL;
      v33[5] = &v36;
      if ( !*(_QWORD *)(v17 + 8) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32);
        WdLogEvent5_WdAssertion(v34);
      }
      v22 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL);
      v33[6] = v22;
      v33[7] = v13;
      goto LABEL_15;
    }
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v26[3] = 6LL;
    v26[4] = v18;
    v26[5] = v36.VidPnSourceId;
    v26[6] = v36.VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v26);
  }
  LODWORD(v13) = 0;
LABEL_15:
  if ( (int)v13 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v35[3] = *(unsigned int *)(v14 + 24);
    v35[5] = (int)v13;
    v35[4] = v16;
    WdLogEvent5_WdError(v35);
  }
  else
  {
    LODWORD(v13) = 0;
  }
LABEL_17:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 6016);
  return (unsigned int)v13;
}

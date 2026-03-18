/*
 * XREFs of ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00CBBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UnpinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 Container; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rsi
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  DXGK_ENUM_PIVOT v42[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a3;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6027);
  v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
  v10 = v8;
  if ( !v8 )
  {
    v32 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v32 + 24) = v6;
    WdLogEvent5_WdError(v32);
    LODWORD(v6) = -1071774976;
    goto LABEL_15;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v8, v7, v5);
  if ( !Path )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v33[3] = v7;
    v33[4] = v5;
    v33[5] = v6;
    WdLogEvent5_WdError(v33);
    LODWORD(v6) = -1071774937;
    goto LABEL_15;
  }
  if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v34);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v10 + 160);
  v22 = Container;
  v42[0].VidPnSourceId = v7;
  v42[0].VidPnTargetId = v5;
  v23 = *(_QWORD *)(Container + 48);
  v24 = Container + 88;
  if ( Container != -88 )
    v24 = Container;
  if ( !v24 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( a4 )
  {
    v25 = VIDPN_MGR::_EnumVidPnCofuncModality(v23, v24, 8, v42);
    v6 = v25;
    if ( v25 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v38[3] = v24;
      v38[4] = 8LL;
      v38[5] = v42;
      if ( !*(_QWORD *)(v23 + 8) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36, v28, v39);
        WdLogEvent5_WdAssertion(v40);
      }
      v27 = *(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL);
      v38[6] = v27;
      v38[7] = v6;
      goto LABEL_13;
    }
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v31[3] = 8LL;
    v31[4] = v24;
    v31[5] = v42[0].VidPnSourceId;
    v31[6] = v42[0].VidPnTargetId;
    WdLogEvent5_WdDmmEvent(v31);
  }
  LODWORD(v6) = 0;
LABEL_13:
  if ( (int)v6 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v41[6] = (int)v6;
    v41[3] = v7;
    v41[4] = v5;
    v41[5] = v22;
    WdLogEvent5_WdError(v41);
  }
  else
  {
    LODWORD(v6) = 0;
  }
LABEL_15:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 6027);
  return (unsigned int)v6;
}

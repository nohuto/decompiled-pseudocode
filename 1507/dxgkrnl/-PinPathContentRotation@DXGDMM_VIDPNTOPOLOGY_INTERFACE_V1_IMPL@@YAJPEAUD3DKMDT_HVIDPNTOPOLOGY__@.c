/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C009ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000620C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE48 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0096EE4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DMMVIDPNPRESENTPATH *v17; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v18; // ebp
  int v19; // eax
  __int64 v20; // rcx
  __int64 Container; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  D3DKMDT_HVIDPN v27; // rdi
  int IsSupportedVidPn; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rbp
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rbp
  _QWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  unsigned __int8 v62[4]; // [rsp+20h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v63; // [rsp+24h] [rbp-34h]
  DXGK_ENUM_PIVOT v64[6]; // [rsp+28h] [rbp-30h] BYREF

  v5 = (__int64)this;
  v6 = a4;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v5);
  v11 = v9;
  if ( !v9 )
  {
    v42 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v42 + 24) = v5;
    WdLogEvent5_WdError(v42);
    LODWORD(v5) = -1071774976;
    goto LABEL_17;
  }
  if ( (_DWORD)v6 == 254 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v43[3] = 254LL;
    v43[4] = v8;
    v43[5] = v7;
    v43[6] = v5;
    WdLogEvent5_WdError(v43);
    LODWORD(v5) = -1071774907;
    goto LABEL_17;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v7);
  v17 = Path;
  if ( !Path )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    v44[3] = v8;
    v44[4] = v7;
    v44[5] = v5;
    WdLogEvent5_WdWarning(v44);
    LODWORD(v5) = -1071774937;
    goto LABEL_17;
  }
  v18 = *((_DWORD *)Path + 29);
  v63 = v18;
  v19 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v6);
  v5 = v19;
  if ( v19 < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v45[3] = v6;
    v45[4] = v8;
    v45[5] = v7;
    v45[6] = v5;
    WdLogEvent5_WdError(v45);
    goto LABEL_17;
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v11 + 160);
  v64[0].VidPnSourceId = v8;
  v64[0].VidPnTargetId = v7;
  v26 = *(_QWORD *)(Container + 48);
  v27 = (D3DKMDT_HVIDPN)(Container + 88);
  if ( Container != -88 )
    v27 = (D3DKMDT_HVIDPN)Container;
  if ( !v27 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    WdLogEvent5_WdAssertion(v46);
  }
  v62[0] = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn((ADAPTER_DISPLAY **)v26, v27, v62, v25);
  v5 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v49[3] = v27;
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v48, v47, v50, v51);
      WdLogEvent5_WdAssertion(v52);
    }
    v49[4] = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    v49[5] = v5;
    WdLogEvent5_WdError(v49);
  }
  else
  {
    if ( !v62[0] )
    {
      v5 = WdLogNewEntry5_WdDmmEvent(v29);
      *(_QWORD *)(v5 + 24) = v27;
      if ( !*(_QWORD *)(v26 + 8) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
        WdLogEvent5_WdAssertion(v54);
      }
      *(_QWORD *)(v5 + 32) = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
      WdLogEvent5_WdDmmEvent(v5);
      LODWORD(v5) = -1071774970;
LABEL_23:
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v41[3] = v8;
      v41[4] = v7;
      v41[5] = v6;
      WdLogEvent5_WdWarning(v41);
      goto LABEL_39;
    }
    if ( !(_BYTE)a5 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
      v36[3] = 9LL;
      v36[4] = v27;
      v36[5] = v64[0].VidPnSourceId;
      v36[6] = v64[0].VidPnTargetId;
      WdLogEvent5_WdDmmEvent(v36);
      goto LABEL_14;
    }
    v30 = VIDPN_MGR::_EnumVidPnCofuncModality(v26, (__int64)v27, 9, v64);
    v5 = v30;
    if ( v30 >= 0 )
    {
LABEL_14:
      LODWORD(v5) = 0;
      goto LABEL_15;
    }
    v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
    v56[3] = v27;
    v56[4] = 9LL;
    v56[5] = v64;
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v55, v31, v33, v34);
      WdLogEvent5_WdAssertion(v53);
    }
    v32 = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    v56[6] = v32;
    v56[7] = v5;
  }
  v18 = v63;
LABEL_15:
  if ( (int)v5 >= 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_17;
  }
  if ( (_DWORD)v5 == -1071774970 )
    goto LABEL_23;
  v57 = (_QWORD *)WdLogNewEntry5_WdError(v32);
  v57[6] = (int)v5;
  v57[3] = v6;
  v57[4] = v8;
  v57[5] = v7;
  WdLogEvent5_WdError(v57);
LABEL_39:
  if ( v18 == D3DKMDT_VPPR_UNPINNED )
    v58 = DMMVIDPNPRESENTPATH::UnpinContentRotation(v17);
  else
    v58 = DMMVIDPNPRESENTPATH::PinContentRotation(v17, v18);
  if ( v58 < 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v32, v59, v33, v60);
    WdLogEvent5_WdAssertion(v61);
  }
LABEL_17:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 6028);
  return (unsigned int)v5;
}

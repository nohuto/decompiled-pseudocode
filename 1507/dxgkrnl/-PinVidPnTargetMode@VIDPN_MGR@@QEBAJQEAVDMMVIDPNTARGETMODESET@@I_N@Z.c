/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     BmlPinNextBestTargetMode @ 0x1C009AFAC (BmlPinNextBestTargetMode.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00D4290 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0088704 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  char v5; // di
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 Container; // rax
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // r12
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  int v53; // [rsp+68h] [rbp+10h] BYREF
  int v54; // [rsp+6Ch] [rbp+14h]

  v4 = (unsigned int)a3;
  v5 = a4;
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v32[3] = v4;
    v32[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
      WdLogEvent5_WdAssertion(v35);
    }
    v32[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v32[6] = v14;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v14;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 14);
    if ( !v15 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v36);
    }
    if ( !*(_QWORD *)(v15 + 40) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v37);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
    v18 = *(_DWORD *)(v15 + 24);
    v19 = Container;
    v53 = -1;
    v54 = v18;
    v20 = Container + 88;
    if ( Container != -88 )
      v20 = Container;
    LOBYTE(v17) = v5;
    v21 = VIDPN_MGR::FormalizeVidPnChange(this, v20, 5LL, v17, &v53);
    v26 = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1071774970 )
      {
        v38 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        *(_QWORD *)(v38 + 24) = v4;
        *(_QWORD *)(v38 + 32) = a2;
        WdLogEvent5_WdWarning(v38);
      }
      else
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v40[3] = v4;
        v40[4] = a2;
        v40[5] = v26;
        WdLogEvent5_WdError(v40);
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39);
      v42[3] = v4;
      v45 = *(unsigned int *)(v15 + 24);
      v42[4] = v45;
      v42[5] = v19;
      if ( !*((_QWORD *)this + 1) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, v41, v43, v44);
        WdLogEvent5_WdAssertion(v46);
      }
      v42[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v42);
      if ( v8 )
        v47 = DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v47 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v47 < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
        WdLogEvent5_WdAssertion(v52);
      }
      return (unsigned int)v26;
    }
    else
    {
      return 0LL;
    }
  }
}

/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     BmlFunctionalizePath @ 0x1C009B4A4 (BmlFunctionalizePath.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00D79D0 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
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
  __int64 v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  int v52; // [rsp+68h] [rbp+10h] BYREF
  int v53; // [rsp+6Ch] [rbp+14h]

  v4 = (unsigned int)a3;
  v5 = a4;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v14 = v9;
  if ( v9 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v31[3] = v4;
    v31[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
      WdLogEvent5_WdAssertion(v34);
    }
    v31[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v31[6] = v14;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v14;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 14);
    if ( !v15 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v35);
    }
    if ( !*(_QWORD *)(v15 + 40) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v36);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL);
    v18 = Container;
    v52 = *(_DWORD *)(v15 + 24);
    v53 = -1;
    v19 = Container + 88;
    if ( Container != -88 )
      v19 = Container;
    LOBYTE(v17) = v5;
    v20 = VIDPN_MGR::FormalizeVidPnChange(this, v19, 3LL, v17, &v52);
    v25 = v20;
    if ( v20 < 0 )
    {
      if ( v20 == -1071774970 )
      {
        v37 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        *(_QWORD *)(v37 + 24) = v4;
        *(_QWORD *)(v37 + 32) = a2;
        WdLogEvent5_WdWarning(v37);
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v39[3] = v4;
        v39[4] = a2;
        v39[5] = v25;
        WdLogEvent5_WdError(v39);
      }
      v41 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v38);
      v41[3] = v4;
      v44 = *(unsigned int *)(v15 + 24);
      v41[4] = v44;
      v41[5] = v18;
      if ( !*((_QWORD *)this + 1) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v44, v40, v42, v43);
        WdLogEvent5_WdAssertion(v45);
      }
      v41[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v41);
      if ( v8 )
        v46 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v46 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v46 < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
        WdLogEvent5_WdAssertion(v51);
      }
      return (unsigned int)v25;
    }
    else
    {
      return 0LL;
    }
  }
}

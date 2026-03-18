/*
 * XREFs of ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     sub_1C00A7A84 @ 0x1C00A7A84 (sub_1C00A7A84.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C00E4C60 (-PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000FB9C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0092F28 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnTargetMode(
        VIDPN_MGR *this,
        struct DMMVIDPNTARGETMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 Container; // rax
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r12
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // [rsp+68h] [rbp+10h] BYREF
  int v41; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNTARGETMODESET::PinMode(a2, v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v28[3] = v4;
    v28[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v29);
    }
    v28[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v28[6] = v11;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 14);
    if ( !v12 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v30);
    }
    if ( !*(_QWORD *)(v12 + 40) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v31);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
    v15 = *(_DWORD *)(v12 + 24);
    v16 = Container;
    v40 = -1;
    v41 = v15;
    v17 = Container + 88;
    if ( Container != -88 )
      v17 = Container;
    LOBYTE(v14) = a4;
    v18 = VIDPN_MGR::FormalizeVidPnChange(this, v17, 5LL, v14, &v40);
    v23 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1071774970 )
      {
        v32 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
        *(_QWORD *)(v32 + 24) = v4;
        *(_QWORD *)(v32 + 32) = a2;
        WdLogEvent5_WdWarning(v32);
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v33[3] = v4;
        v33[4] = a2;
        v33[5] = v23;
        WdLogEvent5_WdError(v33);
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v34[3] = v4;
      v35 = *(unsigned int *)(v12 + 24);
      v34[4] = v35;
      v34[5] = v16;
      if ( !*((_QWORD *)this + 1) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v36);
      }
      v34[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v34);
      if ( v8 )
        v37 = DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v37 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v37 < 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v38);
        WdLogEvent5_WdAssertion(v39);
      }
      return (unsigned int)v23;
    }
    else
    {
      return 0LL;
    }
  }
}

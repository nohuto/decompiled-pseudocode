/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     sub_1C00A7898 @ 0x1C00A7898 (sub_1C00A7898.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00E6420 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000FB9C (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0092860 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
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
  __int64 v15; // r12
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // [rsp+68h] [rbp+10h] BYREF
  int v40; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v11 = v9;
  if ( v9 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v27[3] = v4;
    v27[4] = a2;
    if ( !*((_QWORD *)this + 1) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v28);
    }
    v27[5] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v27[6] = v11;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v11;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 14);
    if ( !v12 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( !*(_QWORD *)(v12 + 40) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v30);
    }
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v12 + 40) + 64LL);
    v15 = Container;
    v39 = *(_DWORD *)(v12 + 24);
    v40 = -1;
    v16 = Container + 88;
    if ( Container != -88 )
      v16 = Container;
    LOBYTE(v14) = a4;
    v17 = VIDPN_MGR::FormalizeVidPnChange(this, v16, 3LL, v14, &v39);
    v22 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -1071774970 )
      {
        v31 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        *(_QWORD *)(v31 + 24) = v4;
        *(_QWORD *)(v31 + 32) = a2;
        WdLogEvent5_WdWarning(v31);
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v32[3] = v4;
        v32[4] = a2;
        v32[5] = v22;
        WdLogEvent5_WdError(v32);
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v33[3] = v4;
      v34 = *(unsigned int *)(v12 + 24);
      v33[4] = v34;
      v33[5] = v15;
      if ( !*((_QWORD *)this + 1) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v34);
        WdLogEvent5_WdAssertion(v35);
      }
      v33[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v33);
      if ( v8 )
        v36 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v36 = DMMVIDPNTARGETMODESET::UnpinMode(a2);
      if ( v36 < 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v37);
        WdLogEvent5_WdAssertion(v38);
      }
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
}

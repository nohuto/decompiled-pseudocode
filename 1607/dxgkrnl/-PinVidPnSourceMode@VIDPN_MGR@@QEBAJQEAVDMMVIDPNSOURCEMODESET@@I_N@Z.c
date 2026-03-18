/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00844C8
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0083584 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     BmlFunctionalizePath @ 0x1C00BD088 (BmlFunctionalizePath.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C00BE360 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01A1A24 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0005A90 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0081690 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
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
  __int64 v32; // rcx
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
    v40 = *(_DWORD *)(v12 + 24);
    v41 = -1;
    v16 = Container + 88;
    if ( Container != -88 )
      v16 = Container;
    LOBYTE(v14) = a4;
    v17 = VIDPN_MGR::FormalizeVidPnChange(this, v16, 3LL, v14, &v40);
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
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v33[3] = v4;
        v33[4] = a2;
        v33[5] = v22;
        WdLogEvent5_WdError(v33);
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
      v34[3] = v4;
      v35 = *(unsigned int *)(v12 + 24);
      v34[4] = v35;
      v34[5] = v15;
      if ( !*((_QWORD *)this + 1) )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v36);
      }
      v34[6] = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v34);
      if ( v8 )
        v37 = DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
      else
        v37 = DMMVIDPNSOURCEMODESET::UnpinMode(a2);
      if ( v37 < 0 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v38);
        WdLogEvent5_WdAssertion(v39);
      }
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
}

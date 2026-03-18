/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00843E4 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00844C8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0084728 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00BD640 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00BDEF0 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00BDFE0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00C55A0 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00C5720 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01A1478 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A1594 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01A1A24 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01A20B0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01A2844 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01A3FE4 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084A60 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0084BC4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        unsigned __int64 a1,
        struct D3DKMDT_HVIDPN__ *a2,
        int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  VIDPN_MGR *v8; // rdi
  int IsSupportedVidPn; // eax
  __int64 v10; // rsi
  unsigned int *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 result; // rax
  _QWORD *v19; // rax
  unsigned int *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rsi
  __int64 v31; // rax
  unsigned __int8 v32; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v8 = (VIDPN_MGR *)a1;
  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_7;
    if ( (_DWORD)v5 != 1 )
    {
      a1 = (unsigned int)(v5 - 2);
      if ( (_DWORD)v5 == 2 )
        goto LABEL_7;
      if ( (_DWORD)v5 != 3 )
      {
        a1 = (unsigned int)(v5 - 4);
        if ( (_DWORD)v5 == 4 )
          goto LABEL_7;
        if ( (_DWORD)v5 != 5 )
          goto LABEL_27;
      }
    }
  }
  else if ( (_DWORD)v5 != 7 )
  {
    if ( (_DWORD)v5 == 8 )
      goto LABEL_7;
    if ( (_DWORD)v5 != 9 )
    {
      if ( (int)v5 <= 11 )
        goto LABEL_7;
LABEL_27:
      v24 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v24 + 24) = v5;
      WdLogEvent5_WdError(v24);
      goto LABEL_7;
    }
  }
  v32 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v8, a2, &v32);
  v10 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v26[3] = a2;
    if ( !*((_QWORD *)v8 + 1) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v26[4] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
    v26[5] = v10;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v10;
  }
  if ( !v32 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(a1);
    *(_QWORD *)(v22 + 24) = a2;
    if ( !*((_QWORD *)v8 + 1) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v28);
    }
    *(_QWORD *)(v22 + 32) = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
    WdLogEvent5_WdDmmEvent(v22);
    result = 3223192326LL;
    if ( (_DWORD)v5 == 1 )
      return 3223192321LL;
    return result;
  }
LABEL_7:
  if ( !a4 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
    v20 = a5;
    v19[3] = v5;
    v19[4] = a2;
    v19[5] = *v20;
    v19[6] = v20[1];
    WdLogEvent5_WdDmmEvent(v19);
    return 0LL;
  }
  v11 = a5;
  v12 = VIDPN_MGR::_EnumVidPnCofuncModality(v8, a2, (unsigned int)v5, a5);
  v17 = v12;
  if ( v12 >= 0 )
    return 0LL;
  v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v30[3] = a2;
  v30[4] = v5;
  v30[5] = v11;
  if ( !*((_QWORD *)v8 + 1) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v29);
    WdLogEvent5_WdAssertion(v31);
  }
  result = (unsigned int)v17;
  v30[6] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
  v30[7] = v17;
  return result;
}

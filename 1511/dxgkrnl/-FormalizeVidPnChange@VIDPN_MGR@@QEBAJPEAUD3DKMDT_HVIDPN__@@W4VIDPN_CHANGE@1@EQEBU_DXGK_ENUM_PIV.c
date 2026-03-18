/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C008F33C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C008F420 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00BCF80 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00BD090 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00E4680 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00E4770 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00E4940 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0177AA8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C0177BC4 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01786D0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C0178E64 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C017A7E0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F9B8 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C008FB18 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        VIDPN_MGR *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  VIDPN_MGR *v8; // rdi
  int IsSupportedVidPn; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 result; // rax
  _QWORD *v20; // rax
  unsigned int *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  unsigned __int8 v33; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v8 = a1;
  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (int)v5 <= 6 )
  {
    if ( (_DWORD)v5 == 6 )
      goto LABEL_8;
    if ( (_DWORD)v5 != 1 )
    {
      if ( (_DWORD)v5 == 2 )
        goto LABEL_8;
      if ( (_DWORD)v5 != 3 )
      {
        a1 = (VIDPN_MGR *)(unsigned int)(v5 - 4);
        if ( (_DWORD)v5 == 4 )
          goto LABEL_8;
        if ( (_DWORD)v5 != 5 )
        {
LABEL_27:
          v25 = WdLogNewEntry5_WdError(a1);
          *(_QWORD *)(v25 + 24) = v5;
          WdLogEvent5_WdError(v25);
          goto LABEL_8;
        }
      }
    }
    goto LABEL_6;
  }
  switch ( (_DWORD)v5 )
  {
    case 7:
      goto LABEL_6;
    case 8:
      goto LABEL_8;
    case 9:
LABEL_6:
      v33 = 0;
      IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v8, a2, &v33);
      v11 = IsSupportedVidPn;
      if ( IsSupportedVidPn < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v27[3] = a2;
        if ( !*((_QWORD *)v8 + 1) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v28);
        }
        v27[4] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
        v27[5] = v11;
        WdLogEvent5_WdError(v27);
        return (unsigned int)v11;
      }
      if ( !v33 )
      {
        v23 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v23 + 24) = a2;
        if ( !*((_QWORD *)v8 + 1) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v22);
          WdLogEvent5_WdAssertion(v29);
        }
        *(_QWORD *)(v23 + 32) = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
        WdLogEvent5_WdDmmEvent(v23);
        result = 3223192326LL;
        if ( (_DWORD)v5 == 1 )
          return 3223192321LL;
        return result;
      }
      goto LABEL_8;
  }
  if ( (int)v5 > 11 )
    goto LABEL_27;
LABEL_8:
  if ( !a4 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v21 = a5;
    v20[3] = v5;
    v20[4] = a2;
    v20[5] = *v21;
    v20[6] = v21[1];
    WdLogEvent5_WdDmmEvent(v20);
    return 0LL;
  }
  v12 = a5;
  v13 = VIDPN_MGR::_EnumVidPnCofuncModality(v8, a2, (unsigned int)v5, a5);
  v18 = v13;
  if ( v13 >= 0 )
    return 0LL;
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
  v31[3] = a2;
  v31[4] = v5;
  v31[5] = v12;
  if ( !*((_QWORD *)v8 + 1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v30);
    WdLogEvent5_WdAssertion(v32);
  }
  result = (unsigned int)v18;
  v31[6] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
  v31[7] = v18;
  return result;
}

/*
 * XREFs of ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0096710 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00967F4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00C7C30 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C0174088 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 * Callees:
 *     ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84 (-_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_.c)
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C0096EE4 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::FormalizeVidPnChange(
        unsigned __int64 a1,
        struct D3DKMDT_HVIDPN__ *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  char v6; // r14
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
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+50h] [rbp+18h] BYREF

  v5 = (int)a3;
  v6 = a4;
  v8 = (VIDPN_MGR *)a1;
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( (int)v5 > 6 )
  {
    switch ( (_DWORD)v5 )
    {
      case 7:
        goto LABEL_12;
      case 8:
        goto LABEL_14;
      case 9:
        goto LABEL_12;
    }
    if ( (int)v5 <= 11 )
      goto LABEL_14;
LABEL_27:
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = v5;
    WdLogEvent5_WdError(v27);
    goto LABEL_14;
  }
  if ( (_DWORD)v5 == 6 )
    goto LABEL_14;
  if ( (_DWORD)v5 != 1 )
  {
    a1 = (unsigned int)(v5 - 2);
    if ( (_DWORD)v5 == 2 )
      goto LABEL_14;
    if ( (_DWORD)v5 != 3 )
    {
      a1 = (unsigned int)(v5 - 4);
      if ( (_DWORD)v5 == 4 )
        goto LABEL_14;
      if ( (_DWORD)v5 != 5 )
        goto LABEL_27;
    }
  }
LABEL_12:
  v41 = 0;
  IsSupportedVidPn = VIDPN_MGR::_IsSupportedVidPn(v8, a2, &v41);
  v10 = IsSupportedVidPn;
  if ( IsSupportedVidPn < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v30[3] = a2;
    if ( !*((_QWORD *)v8 + 1) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
      WdLogEvent5_WdAssertion(v33);
    }
    v30[4] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
    v30[5] = v10;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v10;
  }
  if ( !v41 )
  {
    v23 = WdLogNewEntry5_WdDmmEvent(a1);
    *(_QWORD *)(v23 + 24) = a2;
    if ( !*((_QWORD *)v8 + 1) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v22, v21, v24, v25);
      WdLogEvent5_WdAssertion(v34);
    }
    *(_QWORD *)(v23 + 32) = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
    WdLogEvent5_WdDmmEvent(v23);
    result = 3223192326LL;
    if ( (_DWORD)v5 == 1 )
      return 3223192321LL;
    return result;
  }
LABEL_14:
  if ( !v6 )
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
  v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
  v37[3] = a2;
  v37[4] = v5;
  v37[5] = v11;
  if ( !*((_QWORD *)v8 + 1) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v36, v35, v38, v39);
    WdLogEvent5_WdAssertion(v40);
  }
  result = (unsigned int)v17;
  v37[6] = *(_QWORD *)(*((_QWORD *)v8 + 1) + 16LL);
  v37[7] = v17;
  return result;
}

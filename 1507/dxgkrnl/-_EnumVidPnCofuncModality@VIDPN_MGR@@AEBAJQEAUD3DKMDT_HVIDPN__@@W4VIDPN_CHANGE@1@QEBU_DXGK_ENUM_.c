/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096D84
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00998D0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C009ADE0 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00CBBF0 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00D06F0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00DE8E0 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C017327C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01734A0 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C017481C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007520 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00953C4 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v5; // rbx
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v32; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v33[24]; // [rsp+58h] [rbp-18h] BYREF

  v5 = a3;
  v8 = D3DKMDT_EPT_VIDPNTARGET;
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v13 = 2LL;
  LOBYTE(v12) = *(_BYTE *)(v11 + 172);
  LOWORD(v13) = (2 << v12) - 1;
  if ( ((unsigned __int16)v13 & *(_WORD *)(v11 + 174)) != 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v9, v10, v13);
    WdLogEvent5_WdAssertion(v26);
  }
  LOBYTE(v10) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v33, (v11 + 152) & -(__int64)(v11 != -96), v10);
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v28);
  }
  v32.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  *(_QWORD *)&v32.EnumPivotType = 0LL;
  *(_QWORD *)&v32.EnumPivot.VidPnTargetId = 0LL;
  if ( (int)v5 > 8 )
  {
    if ( (int)v5 <= 10 )
    {
      v8 = D3DKMDT_EPT_ROTATION;
      goto LABEL_14;
    }
    if ( (_DWORD)v5 == 11 )
    {
LABEL_22:
      v8 = D3DKMDT_EPT_NOPIVOT;
      goto LABEL_14;
    }
LABEL_26:
    v29 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v29 + 24) = v5;
    WdLogEvent5_WdError(v29);
    v8 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_14;
  }
  if ( (int)v5 >= 7 )
  {
    v8 = D3DKMDT_EPT_SCALING;
    goto LABEL_14;
  }
  if ( (int)v5 <= 0 )
    goto LABEL_26;
  if ( (int)v5 <= 2 )
    goto LABEL_22;
  if ( (int)v5 <= 4 )
    v8 = D3DKMDT_EPT_VIDPNSOURCE;
LABEL_14:
  v32.EnumPivotType = v8;
  if ( a4 )
  {
    v32.EnumPivot = *a4;
  }
  else
  {
    v32.EnumPivot.VidPnSourceId = -1;
    v32.EnumPivot.VidPnTargetId = -1;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v30);
  }
  v22 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(*(ADAPTER_DISPLAY **)(a1 + 8), &v32, v20, v21);
  v24 = v22;
  if ( v22 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    v31[3] = a2;
    v31[4] = v32.EnumPivot.VidPnSourceId;
    v31[5] = v32.EnumPivot.VidPnTargetId;
    v31[6] = v24;
    WdLogEvent5_WdError(v31);
  }
  else
  {
    LODWORD(v24) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v33);
  return (unsigned int)v24;
}

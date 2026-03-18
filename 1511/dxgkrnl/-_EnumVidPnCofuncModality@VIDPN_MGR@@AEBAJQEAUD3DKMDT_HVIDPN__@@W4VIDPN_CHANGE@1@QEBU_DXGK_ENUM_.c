/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F9B8
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00E6230 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0004F44 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00992F4 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v5; // rbx
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v8; // edi
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v24; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v25[24]; // [rsp+58h] [rbp-18h] BYREF

  v5 = a3;
  v8 = D3DKMDT_EPT_VIDPNTARGET;
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  LOBYTE(v11) = *(_BYTE *)(v10 + 172);
  if ( ((unsigned __int16)((2 << v11) - 1) & *(_WORD *)(v10 + 174)) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v18);
  }
  LOBYTE(v9) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v25, (v10 + 152) & -(__int64)(v10 != -96), v9);
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v20);
  }
  v24.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  *(_QWORD *)&v24.EnumPivotType = 0LL;
  *(_QWORD *)&v24.EnumPivot.VidPnTargetId = 0LL;
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
    v21 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v21 + 24) = v5;
    WdLogEvent5_WdError(v21);
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
  v24.EnumPivotType = v8;
  if ( a4 )
  {
    v24.EnumPivot = *a4;
  }
  else
  {
    v24.EnumPivot.VidPnSourceId = -1;
    v24.EnumPivot.VidPnTargetId = -1;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v22);
  }
  v14 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(*(ADAPTER_DISPLAY **)(a1 + 8), &v24);
  v16 = v14;
  if ( v14 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v23[3] = a2;
    v23[4] = v24.EnumPivot.VidPnSourceId;
    v23[5] = v24.EnumPivot.VidPnTargetId;
    v23[6] = v16;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    LODWORD(v16) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v25);
  return (unsigned int)v16;
}

/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084A60
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C00BD9E0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C0085A38 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(__int64 a1, __int64 a2, int a3, DXGK_ENUM_PIVOT *a4)
{
  __int64 v5; // rbx
  D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE v8; // edi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-50h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v28; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-18h] BYREF

  v5 = a3;
  v8 = D3DKMDT_EPT_VIDPNTARGET;
  v9 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v11 = 2LL;
  LOBYTE(v10) = *(_BYTE *)(v9 + 172);
  LOWORD(v11) = (2 << v10) - 1;
  if ( ((unsigned __int16)v11 & *(_WORD *)(v9 + 174)) != 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v21);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v29,
    (v9 + 152) & -(__int64)(v9 != -96),
    3u,
    v11,
    v27,
    *(_QWORD *)(v9 + 136));
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v23);
  }
  v28.hConstrainingVidPn = (D3DKMDT_HVIDPN)a2;
  *(_QWORD *)&v28.EnumPivotType = 0LL;
  *(_QWORD *)&v28.EnumPivot.VidPnTargetId = 0LL;
  if ( (int)v5 > 8 )
  {
    if ( (int)v5 <= 10 )
    {
      v8 = D3DKMDT_EPT_ROTATION;
      goto LABEL_10;
    }
    if ( (_DWORD)v5 == 11 )
      goto LABEL_23;
LABEL_25:
    v24 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v24 + 24) = v5;
    WdLogEvent5_WdError(v24);
    v8 = D3DKMDT_EPT_UNINITIALIZED;
    goto LABEL_10;
  }
  if ( (int)v5 >= 7 )
  {
    v8 = D3DKMDT_EPT_SCALING;
    goto LABEL_10;
  }
  if ( (int)v5 <= 0 )
    goto LABEL_25;
  if ( (int)v5 <= 2 )
  {
LABEL_23:
    v8 = D3DKMDT_EPT_NOPIVOT;
    goto LABEL_10;
  }
  if ( (int)v5 <= 4 )
    v8 = D3DKMDT_EPT_VIDPNSOURCE;
LABEL_10:
  v28.EnumPivotType = v8;
  if ( a4 )
  {
    v28.EnumPivot = *a4;
  }
  else
  {
    v28.EnumPivot.VidPnSourceId = -1;
    v28.EnumPivot.VidPnTargetId = -1;
  }
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v25);
  }
  v14 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(*(ADAPTER_DISPLAY **)(a1 + 8), &v28);
  v19 = v14;
  if ( v14 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v26[3] = a2;
    v26[4] = v28.EnumPivot.VidPnSourceId;
    v26[5] = v28.EnumPivot.VidPnTargetId;
    v26[6] = v19;
    WdLogEvent5_WdError(v26);
  }
  else
  {
    LODWORD(v19) = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v29, v15, v17, v18);
  return (unsigned int)v19;
}

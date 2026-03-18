/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080CB8
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C007E558 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00042C0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  DMMVIDPNSOURCEMODE *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v4 = *((_QWORD *)this + 11);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v5 = *(_QWORD *)(v4 + 104);
  }
  v6 = *(DMMVIDPNSOURCEMODE **)(v5 + 144);
  v14 = v5;
  if ( v6 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v6, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, 0LL);
    v7 = *((_QWORD *)this + 12);
    v8 = *(_QWORD *)(v7 + 104);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 96));
      v8 = *(_QWORD *)(v7 + 104);
    }
    v9 = *(_QWORD *)(v8 + 144);
    v15 = v8;
    if ( v9 )
    {
      a2[1].VisibleFromActiveBROffset.cy = *(_DWORD *)(v9 + 24);
      a2[1].VidPnTargetColorCoeffDynamicRanges = *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)(v9 + 72);
      *(_OWORD *)&a2[1].Content = *(_OWORD *)(v9 + 88);
      *(_OWORD *)&a2[1].CopyProtection.OEMCopyProtection[4] = *(_OWORD *)(v9 + 104);
      *(_QWORD *)&a2[1].CopyProtection.OEMCopyProtection[20] = *(_QWORD *)(v9 + 120);
      *(_DWORD *)&a2[1].CopyProtection.OEMCopyProtection[28] = *(_DWORD *)(v9 + 128);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[36] = *((_WORD *)this + 54);
      return 0LL;
    }
    v13 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdError(v12);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v14, 0LL);
  }
  return 1075708679LL;
}

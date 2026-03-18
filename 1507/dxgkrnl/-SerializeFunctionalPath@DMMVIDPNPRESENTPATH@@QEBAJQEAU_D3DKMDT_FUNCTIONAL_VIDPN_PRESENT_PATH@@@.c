/*
 * XREFs of ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBD24
 * Callers:
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBA5C (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DEF8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SerializeFunctionalPath(
        DMMVIDPNPRESENTPATH *this,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  DMMVIDPNSOURCEMODE *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  DMMVIDPNPRESENTPATH::Serialize(this, a2);
  v6 = *((_QWORD *)this + 11);
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v7 = *(_QWORD *)(v6 + 104);
  }
  v8 = *(DMMVIDPNSOURCEMODE **)(v7 + 144);
  v16 = v7;
  if ( v8 )
  {
    DMMVIDPNSOURCEMODE::Serialize(v8, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)&a2[1]);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, 0LL);
    v9 = *((_QWORD *)this + 12);
    v10 = *(_QWORD *)(v9 + 104);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 96));
      v10 = *(_QWORD *)(v9 + 104);
    }
    v11 = *(_QWORD *)(v10 + 144);
    v17 = v10;
    if ( v11 )
    {
      a2[1].VisibleFromActiveBROffset.cy = *(_DWORD *)(v11 + 24);
      a2[1].VidPnTargetColorCoeffDynamicRanges = *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)(v11 + 72);
      *(_OWORD *)&a2[1].Content = *(_OWORD *)(v11 + 88);
      *(_OWORD *)&a2[1].CopyProtection.OEMCopyProtection[4] = *(_OWORD *)(v11 + 104);
      *(_QWORD *)&a2[1].CopyProtection.OEMCopyProtection[20] = *(_QWORD *)(v11 + 120);
      *(_DWORD *)&a2[1].CopyProtection.OEMCopyProtection[28] = *(_DWORD *)(v11 + 128);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
      *(_WORD *)&a2[1].CopyProtection.OEMCopyProtection[36] = *((_WORD *)this + 54);
      return 0LL;
    }
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, 0LL);
  }
  return 1075708679LL;
}

/*
 * XREFs of ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C017CF70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0004F58 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C002BCD8 (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0180A8C (-AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::FindClosestTargetMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a6)
{
  struct _D3DKMDT_VIDPN_TARGET_MODE *v6; // rsi
  DMMVIDPNTARGETMODESET *v8; // rax
  struct _D3DDDI_RATIONAL *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r9
  DMMVIDPNTARGETMODESET *v13; // rbx
  __int64 v14; // rax
  const struct DMMVIDPNTARGETMODE *ClosestTargetMode; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  struct _D3DKMDT_VIDPN_TARGET_MODE *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax

  v6 = a6;
  if ( a6 && this )
  {
    *(_QWORD *)&a6->Id = 0LL;
    v8 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)a2);
    v13 = v8;
    if ( !v8 )
    {
      v14 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v14 + 24) = a2;
      WdLogEvent5_WdError(v14);
      return 3223192329LL;
    }
    ClosestTargetMode = DMMVIDPNTARGETMODESET::FindClosestTargetMode(
                          v8,
                          v9->Numerator,
                          v9->Denominator,
                          v9[2],
                          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)v9[3].Numerator,
                          v11,
                          v12,
                          a5);
    if ( !ClosestTargetMode )
      return 0LL;
    a6 = 0LL;
    v17 = DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
            v13,
            ClosestTargetMode,
            (const struct _D3DKMDT_VIDPN_TARGET_MODE **)&a6);
    v22 = v17;
    if ( v17 == -1071774902 )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = v13;
      WdLogEvent5_WdWarning(v23);
      if ( a6 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        WdLogEvent5_WdAssertion(v25);
      }
      return 1075708747LL;
    }
    else
    {
      if ( v17 >= 0 )
      {
        v27 = a6;
        if ( !a6 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v28);
        }
        *(_QWORD *)&v6->Id = v27;
        return 0LL;
      }
      v26 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v26 + 24) = v13;
      WdLogEvent5_WdDmmEvent(v26);
      return v22;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v29 + 24) = a2;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
}

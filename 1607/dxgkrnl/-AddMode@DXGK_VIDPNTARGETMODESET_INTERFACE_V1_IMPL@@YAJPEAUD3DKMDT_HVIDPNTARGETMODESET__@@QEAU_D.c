/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0001BE8 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0001D70 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C0002448 (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C007E7D0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007EA74 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AddMode(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTARGETMODESET *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // eax
  DMMVIDPNTARGETMODE *v19; // rax
  __int64 v20; // rcx
  enum _D3DKMDT_MODE_PREFERENCE v21; // r8d
  DMMVIDPNTARGETMODE *v22; // rsi
  DMMVIDPNTARGETMODE *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  UINT Numerator; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  DMMVIDPNTARGETMODE *v49; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v38 + 24) = 0LL;
    *(_QWORD *)(v38 + 32) = this;
    WdLogEvent5_WdError(v38);
    LODWORD(v29) = -1071774959;
    goto LABEL_25;
  }
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v10 = (DMMVIDPNTARGETMODESET *)v8;
  if ( !v8 )
  {
    v39 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdError(v39);
    LODWORD(v29) = -1071774967;
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(v8 + 112);
  if ( !*(_QWORD *)(v11 + 40) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v40);
  }
  v14 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v14 + 8) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v41);
  }
  v17 = *(_QWORD *)(v14 + 8);
  if ( !v17 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 )
    goto LABEL_11;
  if ( a2->VideoSignalInfo.VSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    if ( a2->VideoSignalInfo.VSyncFreq.Denominator == -2 )
      goto LABEL_52;
LABEL_11:
    v13 = *(_QWORD *)(v17 + 16);
    if ( (*(_DWORD *)(v13 + 300) & 0x100) == 0 && !*(_QWORD *)(v13 + 560) )
      goto LABEL_52;
    if ( a2->VideoSignalInfo.HSyncFreq.Numerator == -2 && a2->VideoSignalInfo.HSyncFreq.Denominator == -2 )
    {
      if ( !VIDPN_MGR::_bAllowUnspecifiedHSync )
        goto LABEL_46;
      a2->VideoSignalInfo.HSyncFreq.Numerator = 1000;
      a2->VideoSignalInfo.HSyncFreq.Denominator = 1;
    }
    if ( a2->VideoSignalInfo.PixelRate != 4294967294 )
      goto LABEL_15;
    if ( VIDPN_MGR::_bAllowUnspecifiedPixelRate )
    {
      a2->VideoSignalInfo.PixelRate = 1000000LL;
      goto LABEL_15;
    }
LABEL_46:
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v44[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v44[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v44[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v44[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v44);
    LODWORD(v29) = -1071774966;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 560LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_52;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = *(_QWORD *)(v17 + 16);
  }
  else
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v15, v16);
    v43[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v43[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v43[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v43[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_15:
  v13 = *(_QWORD *)(*((_QWORD *)v10 + 14) + 96LL);
  v18 = *(_DWORD *)(v13 + 76);
  if ( v18 < 15 || v18 > 16 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_17;
LABEL_52:
    v46 = WdLogNewEntry5_WdError(v13);
    LODWORD(v29) = -1071774966;
    *(_QWORD *)(v46 + 24) = *(_QWORD *)(v17 + 16);
    *(_QWORD *)(v46 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_25;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_52;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v13 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    if ( 10 * Numerator / (unsigned int)v13 < 0xEF )
      goto LABEL_52;
  }
LABEL_17:
  v19 = (DMMVIDPNTARGETMODE *)operator new(0x88uLL, 0x4E506456u, PagedPool);
  if ( v19 )
    v22 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v19, a2->Id, v21);
  else
    v22 = 0LL;
  v23 = v22;
  if ( v22 )
  {
    v24 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v22 + 72), &a2->VideoSignalInfo);
    v29 = v24;
    if ( v24 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      v48[3] = v22;
    }
    else
    {
      v49 = v22;
      v23 = 0LL;
      v30 = DMMVIDPNTARGETMODESET::AddMode(v10, &v49);
      v29 = v30;
      if ( v30 >= 0 )
      {
        LODWORD(v29) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v10, a2);
        goto LABEL_23;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
      v48[3] = a2;
    }
    v48[5] = v29;
    v48[4] = this;
  }
  else
  {
    v47 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v47 + 24) = this;
    WdLogEvent5_WdLowResource(v47);
    LODWORD(v29) = -1073741801;
  }
LABEL_23:
  if ( v23 )
    (**(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v23)(v23, 1LL);
LABEL_25:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 7014);
  return (unsigned int)v29;
}

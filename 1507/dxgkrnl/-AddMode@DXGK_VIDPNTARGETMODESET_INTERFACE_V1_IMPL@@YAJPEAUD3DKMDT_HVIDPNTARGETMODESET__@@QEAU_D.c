/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00977C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C0007DB8 (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007E3C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0007FC4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C008841C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00886AC (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DMMVIDPNTARGETMODESET *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  DMMVIDPNTARGETMODE *v21; // rax
  __int64 v22; // rcx
  enum _D3DKMDT_MODE_PREFERENCE v23; // r8d
  DMMVIDPNTARGETMODE *v24; // rsi
  DMMVIDPNTARGETMODE *v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  UINT Numerator; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  DMMVIDPNTARGETMODE *v51; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v40 + 24) = 0LL;
    *(_QWORD *)(v40 + 32) = this;
    WdLogEvent5_WdError(v40);
    LODWORD(v31) = -1071774959;
    goto LABEL_25;
  }
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v13 = (DMMVIDPNTARGETMODESET *)v8;
  if ( !v8 )
  {
    v41 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v41 + 24) = this;
    WdLogEvent5_WdError(v41);
    LODWORD(v31) = -1071774967;
    goto LABEL_25;
  }
  v14 = *(_QWORD *)(v8 + 112);
  if ( !*(_QWORD *)(v14 + 40) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v42);
  }
  v17 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v17 + 8) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
    WdLogEvent5_WdAssertion(v43);
  }
  v20 = *(_QWORD *)(v17 + 8);
  if ( !v20 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( a2->VideoSignalInfo.VSyncFreq.Numerator != -2 )
    goto LABEL_11;
  if ( a2->VideoSignalInfo.VSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.HSyncFreq.Numerator != -2
    || a2->VideoSignalInfo.HSyncFreq.Denominator != -2
    || a2->VideoSignalInfo.PixelRate != 4294967294 )
  {
    if ( a2->VideoSignalInfo.VSyncFreq.Denominator == -2 )
      goto LABEL_51;
LABEL_11:
    v16 = *(_QWORD *)(v20 + 16);
    if ( (*(_DWORD *)(v16 + 284) & 0x80u) == 0 && !*(_QWORD *)(v16 + 544) )
      goto LABEL_51;
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
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v46[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v46[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v46[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v46[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v46);
    LODWORD(v31) = -1071774966;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v20 + 16) + 544LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_51;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v18, v19) + 24) = *(_QWORD *)(v20 + 16);
  }
  else
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v18, v19);
    v45[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v45[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v45[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v45[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_15:
  v16 = *(_QWORD *)(*((_QWORD *)v13 + 14) + 96LL);
  if ( *(_DWORD *)(v16 + 76) != 15 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_17;
LABEL_51:
    v48 = WdLogNewEntry5_WdError(v16);
    LODWORD(v31) = -1071774966;
    *(_QWORD *)(v48 + 24) = *(_QWORD *)(v20 + 16);
    *(_QWORD *)(v48 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v48);
    goto LABEL_25;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_51;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v16 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    if ( 10 * Numerator / (unsigned int)v16 < 0xEF )
      goto LABEL_51;
  }
LABEL_17:
  v21 = (DMMVIDPNTARGETMODE *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
  if ( v21 )
    v24 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v21, a2->Id, v23);
  else
    v24 = 0LL;
  v25 = v24;
  if ( v24 )
  {
    v26 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v24 + 72), &a2->VideoSignalInfo);
    v31 = v26;
    if ( v26 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
      v50[3] = v24;
    }
    else
    {
      v51 = v24;
      v25 = 0LL;
      v32 = DMMVIDPNTARGETMODESET::AddMode((__int64)v13, &v51, v29, v30);
      v31 = v32;
      if ( v32 >= 0 )
      {
        LODWORD(v31) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v13, a2);
        goto LABEL_23;
      }
      v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33, v35, v36);
      v50[3] = a2;
    }
    v50[5] = v31;
    v50[4] = this;
  }
  else
  {
    v49 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v49 + 24) = this;
    WdLogEvent5_WdLowResource(v49);
    LODWORD(v31) = -1073741801;
  }
LABEL_23:
  if ( v25 )
    (**(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v25)(v25, 1LL);
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 7014);
  return (unsigned int)v31;
}

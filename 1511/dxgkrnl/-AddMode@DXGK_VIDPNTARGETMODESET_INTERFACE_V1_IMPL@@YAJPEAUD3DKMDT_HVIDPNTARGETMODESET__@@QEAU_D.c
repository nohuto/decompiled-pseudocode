/*
 * XREFs of ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A04A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0004F58 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000819C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C00087DC (--0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C0092C38 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0092ED0 (-ReleaseDdiEnumerator@DMMVIDPNTARGETMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z.c)
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
  DMMVIDPNTARGETMODE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DMMVIDPNTARGETMODE *v23; // rsi
  DMMVIDPNTARGETMODE *v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  UINT Numerator; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  DMMVIDPNTARGETMODE *v50; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7014);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( !a2 )
  {
    v39 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v39 + 24) = 0LL;
    *(_QWORD *)(v39 + 32) = this;
    WdLogEvent5_WdError(v39);
    LODWORD(v30) = -1071774959;
    goto LABEL_25;
  }
  v8 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  v10 = (DMMVIDPNTARGETMODESET *)v8;
  if ( !v8 )
  {
    v40 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v40 + 24) = this;
    WdLogEvent5_WdError(v40);
    LODWORD(v30) = -1071774967;
    goto LABEL_25;
  }
  v11 = *(_QWORD *)(v8 + 112);
  if ( !*(_QWORD *)(v11 + 40) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v41);
  }
  v14 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v14 + 8) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v42);
  }
  v17 = *(_QWORD *)(v14 + 8);
  if ( !v17 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v43);
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
    v13 = *(_QWORD *)(v17 + 16);
    if ( (*(_DWORD *)(v13 + 284) & 0x100) == 0 && !*(_QWORD *)(v13 + 544) )
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
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v45[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v45[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v45[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v45[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
    WdLogEvent5_WdError(v45);
    LODWORD(v30) = -1071774966;
    goto LABEL_25;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v17 + 16) + 544LL) )
  {
    if ( !VIDPN_MGR::_bAllowUnspecifiedVSync )
      goto LABEL_51;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = *(_QWORD *)(v17 + 16);
  }
  else
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v15, v16);
    v44[3] = a2->VideoSignalInfo.ActiveSize.cx;
    v44[4] = a2->VideoSignalInfo.ActiveSize.cy;
    v44[5] = a2->VideoSignalInfo.VSyncFreq.Numerator;
    v44[6] = a2->VideoSignalInfo.VSyncFreq.Denominator;
  }
LABEL_15:
  v13 = *(_QWORD *)(*((_QWORD *)v10 + 14) + 96LL);
  if ( *(_DWORD *)(v13 + 76) != 15 )
  {
    if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) == 0 )
      goto LABEL_17;
LABEL_51:
    v47 = WdLogNewEntry5_WdError(v13);
    LODWORD(v30) = -1071774966;
    *(_QWORD *)(v47 + 24) = *(_QWORD *)(v17 + 16);
    *(_QWORD *)(v47 + 32) = -1071774966LL;
    WdLogEvent5_WdError(v47);
    goto LABEL_25;
  }
  if ( ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F) == 0 )
    goto LABEL_51;
  Numerator = a2->VideoSignalInfo.VSyncFreq.Numerator;
  if ( Numerator != -2 || a2->VideoSignalInfo.VSyncFreq.Denominator != -2 )
  {
    v13 = ((*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo >> 3) & 0x3F)
        * a2->VideoSignalInfo.VSyncFreq.Denominator;
    if ( 10 * Numerator / (unsigned int)v13 < 0xEF )
      goto LABEL_51;
  }
LABEL_17:
  v18 = (DMMVIDPNTARGETMODE *)operator new[](0x88uLL, 0x4E506456u, PagedPool);
  if ( v18 )
    v23 = DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(v18, a2->Id, v21);
  else
    v23 = 0LL;
  v24 = v23;
  if ( v23 )
  {
    v25 = DMMVIDEOSIGNALMODE::Initialize((DMMVIDPNTARGETMODE *)((char *)v23 + 72), &a2->VideoSignalInfo);
    v30 = v25;
    if ( v25 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
      v49[3] = v23;
    }
    else
    {
      v50 = v23;
      v24 = 0LL;
      v31 = DMMVIDPNTARGETMODESET::AddMode((__int64)v10, (__int64 *)&v50);
      v30 = v31;
      if ( v31 >= 0 )
      {
        LODWORD(v30) = DMMVIDPNTARGETMODESET::ReleaseDdiEnumerator(v10, a2);
        goto LABEL_23;
      }
      v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32, v34, v35);
      v49[3] = a2;
    }
    v49[5] = v30;
    v49[4] = this;
  }
  else
  {
    v48 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
    *(_QWORD *)(v48 + 24) = this;
    WdLogEvent5_WdLowResource(v48);
    LODWORD(v30) = -1073741801;
  }
LABEL_23:
  if ( v24 )
    (**(void (__fastcall ***)(DMMVIDPNTARGETMODE *, __int64))v24)(v24, 1LL);
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v36, &EventProfilerExit, v37, 7014);
  return (unsigned int)v30;
}

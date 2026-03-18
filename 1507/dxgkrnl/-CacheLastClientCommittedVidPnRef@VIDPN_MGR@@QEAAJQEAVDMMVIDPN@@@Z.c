/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00CD224
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C0007D94 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0008450 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00095B4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0024458 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C009C3A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00CC508 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00CF0E0 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r15
  int v10; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 PathSourceFromTarget; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  int v24; // r12d
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rdi
  _QWORD *v41; // rdi
  __int64 v42; // rax
  bool v43; // zf
  _QWORD *v44; // rbx
  UINT cx; // r15d
  UINT cy; // r13d
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdi
  DMMVIDPNSOURCEMODE *v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rax
  __int64 v58[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v59; // [rsp+90h] [rbp+48h] BYREF
  struct _D3DDDI_RATIONAL v60; // [rsp+98h] [rbp+50h] BYREF
  __int64 v61; // [rsp+A0h] [rbp+58h]
  __int64 v62; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0;
  v59 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v59, (__int64)a2);
  v4 = v59;
  if ( !Set<DMMVIDPN>::Remove((__int64)this + 104, v59) )
  {
    v29 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v29 + 24) = v4;
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdError(v29);
    v2 = -1071774973;
    goto LABEL_17;
  }
  v9 = (_QWORD *)(v4 + 96);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v10 = *((_DWORD *)this + 124);
    if ( v10 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v10) )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        WdLogEvent5_WdAssertion(v35);
      }
      v36 = *((_DWORD *)this + 124);
      v37 = *((_QWORD *)this + 1);
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                             (DMMVIDPNTOPOLOGY *)v9,
                                             v36,
                                             v33,
                                             v34);
      v19 = 0LL;
      v20 = v36;
      v22 = v37;
      goto LABEL_9;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_10;
    v16 = *((_QWORD *)MostImportantPath + 12);
    v17 = *(_DWORD *)(v16 + 24);
    v18 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    if ( !*((_QWORD *)this + 1) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      WdLogEvent5_WdAssertion(v38);
    }
    v19 = 2LL;
    v20 = v17;
    PathSourceFromTarget = v18;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v30);
    }
    v20 = 0xFFFFFFFFLL;
    v19 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  v22 = *((_QWORD *)this + 1);
LABEL_9:
  ADAPTER_DISPLAY::SetPrimaryPath(v22, PathSourceFromTarget, v20, v19);
LABEL_10:
  v23 = v9 + 3;
  v24 = 8;
  if ( (_QWORD *)*v23 == v23 )
    v25 = 0LL;
  else
    v25 = (_QWORD *)(*v23 - 8LL);
  v26 = v9[5];
  if ( v26 == 1 )
  {
    if ( !v25 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      WdLogEvent5_WdAssertion(v39);
    }
    v27 = *(_QWORD *)(v25[12] + 96LL);
    if ( *(_DWORD *)(v27 + 76) != 15 )
      goto LABEL_16;
    goto LABEL_48;
  }
  if ( v26 != 2 )
  {
    while ( v25 )
    {
      v27 = *(_QWORD *)(v25[12] + 96LL);
      if ( *(_DWORD *)(v27 + 76) == 15 )
      {
        v24 = 1;
        goto LABEL_48;
      }
      v44 = (_QWORD *)v25[1];
      if ( v44 == v9 + 3 )
        v25 = 0LL;
      else
        v25 = v44 - 1;
    }
    goto LABEL_16;
  }
  v40 = (_QWORD *)v25[1];
  if ( v40 == v9 + 3 )
    v41 = 0LL;
  else
    v41 = v40 - 1;
  if ( !v41 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v42);
  }
  v27 = *(_QWORD *)(v25[12] + 96LL);
  if ( *(_DWORD *)(v27 + 76) == 15 )
  {
    v24 = 4;
    if ( v25[11] == v41[11] )
      v24 = 2;
LABEL_48:
    LODWORD(v61) = 0;
    cx = 0;
    cy = 0;
    if ( !v25 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v27, v12, v14, v15);
      WdLogEvent5_WdAssertion(v47);
    }
    v48 = v25[11];
    v49 = *(_QWORD *)(v48 + 104);
    if ( v49 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v49 + 96));
      v50 = *(_QWORD *)(v48 + 104);
    }
    else
    {
      v50 = 0LL;
    }
    v58[0] = v50;
    v51 = *(DMMVIDPNSOURCEMODE **)(v50 + 144);
    if ( v51 && *((_DWORD *)v51 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v51)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v51)->PrimSurfSize.cy;
    }
    v52 = v25[12];
    v53 = *(_QWORD *)(v52 + 104);
    if ( v53 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v53 + 96));
      v54 = *(_QWORD *)(v52 + 104);
    }
    else
    {
      v54 = 0LL;
    }
    v55 = *(_QWORD *)(v54 + 144);
    v62 = v54;
    if ( v55 )
    {
      v60 = *(struct _D3DDDI_RATIONAL *)(v55 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v55 + 72), &v60);
      v56 = DMMVIDEOSIGNALMODE::DivideAndRound(v60.Numerator, v60.Denominator);
    }
    else
    {
      v56 = v61;
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v55, v12, v14, v15);
      WdLogEvent5_WdAssertion(v57);
    }
    DpiMiracastHandleDisplayConfigChange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL),
      v24,
      cx,
      cy,
      v56);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v62, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v58, 0LL);
    goto LABEL_16;
  }
  v27 = *(_QWORD *)(v41[12] + 96LL);
  if ( *(_DWORD *)(v27 + 76) == 15 )
  {
    v24 = 4;
    v43 = v25[11] == v41[11];
    v25 = v41;
    if ( v43 )
      v24 = 2;
    goto LABEL_48;
  }
LABEL_16:
  auto_rc<DMMVIDPN>::operator=((__int64 *)this + 10, &v59);
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v59, 0LL);
  return v2;
}

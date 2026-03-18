/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00841C8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D39F4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00020E4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000ADD4 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000CA78 (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C002B440 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0080850 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C008682C (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00BEB88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // r15
  int v7; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 PathSourceFromTarget; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // r12d
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  __int64 v35; // rax
  bool v36; // zf
  _QWORD *v37; // rbx
  UINT cx; // r15d
  UINT cy; // r13d
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  DMMVIDPNSOURCEMODE *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v52; // [rsp+90h] [rbp+48h] BYREF
  struct _D3DDDI_RATIONAL v53; // [rsp+98h] [rbp+50h] BYREF
  __int64 v54; // [rsp+A0h] [rbp+58h]
  __int64 v55; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0;
  v52 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v52, (__int64)a2);
  v4 = v52;
  if ( !Set<DMMVIDPN>::Remove((__int64)this + 104, v52) )
  {
    v23 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v23 + 24) = v4;
    *(_QWORD *)(v23 + 32) = this;
    WdLogEvent5_WdError(v23);
    v2 = -1071774973;
    goto LABEL_17;
  }
  v6 = (_QWORD *)(v4 + 96);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v7 = *((_DWORD *)this + 124);
    if ( v7 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v7) )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = *((_DWORD *)this + 124);
      v30 = *((_QWORD *)this + 1);
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                             (DMMVIDPNTOPOLOGY *)v6,
                                             v29,
                                             v26,
                                             v27);
      v13 = 0LL;
      v14 = v29;
      v16 = v30;
      goto LABEL_9;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_10;
    v10 = *((_QWORD *)MostImportantPath + 12);
    v11 = *(_DWORD *)(v10 + 24);
    v12 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    if ( !*((_QWORD *)this + 1) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v31);
    }
    v13 = 2LL;
    v14 = v11;
    PathSourceFromTarget = v12;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v24);
    }
    v14 = 0xFFFFFFFFLL;
    v13 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  v16 = *((_QWORD *)this + 1);
LABEL_9:
  ADAPTER_DISPLAY::SetPrimaryPath(v16, PathSourceFromTarget, v14, v13);
LABEL_10:
  v17 = v6 + 3;
  v18 = 8;
  if ( (_QWORD *)*v17 == v17 )
    v19 = 0LL;
  else
    v19 = (_QWORD *)(*v17 - 8LL);
  v20 = v6[5];
  if ( v20 == 1 )
  {
    if ( !v19 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v32);
    }
    v21 = *(_QWORD *)(v19[12] + 96LL);
    if ( *(_DWORD *)(v21 + 76) != 15 )
      goto LABEL_16;
    goto LABEL_48;
  }
  if ( v20 != 2 )
  {
    while ( v19 )
    {
      v21 = *(_QWORD *)(v19[12] + 96LL);
      if ( *(_DWORD *)(v21 + 76) == 15 )
      {
        v18 = 1;
        goto LABEL_48;
      }
      v37 = (_QWORD *)v19[1];
      if ( v37 == v6 + 3 )
        v19 = 0LL;
      else
        v19 = v37 - 1;
    }
    goto LABEL_16;
  }
  v33 = (_QWORD *)v19[1];
  if ( v33 == v6 + 3 )
    v34 = 0LL;
  else
    v34 = v33 - 1;
  if ( !v34 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v35);
  }
  v21 = *(_QWORD *)(v19[12] + 96LL);
  if ( *(_DWORD *)(v21 + 76) == 15 )
  {
    v18 = 4;
    if ( v19[11] == v34[11] )
      v18 = 2;
LABEL_48:
    LODWORD(v54) = 0;
    cx = 0;
    cy = 0;
    if ( !v19 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v40);
    }
    v41 = v19[11];
    v42 = *(_QWORD *)(v41 + 104);
    if ( v42 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v42 + 96));
      v43 = *(_QWORD *)(v41 + 104);
    }
    else
    {
      v43 = 0LL;
    }
    v51[0] = v43;
    v44 = *(DMMVIDPNSOURCEMODE **)(v43 + 144);
    if ( v44 && *((_DWORD *)v44 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v44)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v44)->PrimSurfSize.cy;
    }
    v45 = v19[12];
    v46 = *(_QWORD *)(v45 + 104);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v46 + 96));
      v47 = *(_QWORD *)(v45 + 104);
    }
    else
    {
      v47 = 0LL;
    }
    v48 = *(_QWORD *)(v47 + 144);
    v55 = v47;
    if ( v48 )
    {
      v53 = *(struct _D3DDDI_RATIONAL *)(v48 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v48 + 72), &v53);
      v49 = DMMVIDEOSIGNALMODE::DivideAndRound(v53.Numerator, v53.Denominator);
    }
    else
    {
      v49 = v54;
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v50 = WdLogNewEntry5_WdAssertion(v48);
      WdLogEvent5_WdAssertion(v50);
    }
    DpiMiracastHandleDisplayConfigChange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL),
      v18,
      cx,
      cy,
      v49);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v51, 0LL);
    goto LABEL_16;
  }
  v21 = *(_QWORD *)(v34[12] + 96LL);
  if ( *(_DWORD *)(v21 + 76) == 15 )
  {
    v18 = 4;
    v36 = v19[11] == v34[11];
    v19 = v34;
    if ( v36 )
      v18 = 2;
    goto LABEL_48;
  }
LABEL_16:
  auto_rc<DMMVIDPN>::operator=((__int64 *)this + 10, &v52);
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v52, 0LL);
  return v2;
}

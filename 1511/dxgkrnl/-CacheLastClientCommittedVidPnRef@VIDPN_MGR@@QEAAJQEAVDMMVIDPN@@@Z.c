/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C008F11C
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C008DD50 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A2A0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000BCC4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??4?$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z @ 0x1C000C2EC (--4-$auto_rc@VDMMVIDPN@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0023F88 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0091448 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0099E00 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00A6FD8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
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
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  __int64 v33; // rax
  bool v34; // zf
  _QWORD *v35; // rbx
  UINT cx; // r15d
  UINT cy; // r13d
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  DMMVIDPNSOURCEMODE *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // ebx
  __int64 v48; // rax
  __int64 v49[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v50; // [rsp+90h] [rbp+48h] BYREF
  struct _D3DDDI_RATIONAL v51; // [rsp+98h] [rbp+50h] BYREF
  __int64 v52; // [rsp+A0h] [rbp+58h]
  __int64 v53; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0;
  v50 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v50, (__int64)a2);
  v4 = v50;
  if ( !Set<DMMVIDPN>::Remove((__int64)this + 104, v50) )
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
        v26 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = *((_DWORD *)this + 124);
      v28 = *((_QWORD *)this + 1);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)v6, v27);
      v13 = 0LL;
      v14 = v27;
      v16 = v28;
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
      v29 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v29);
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
      v30 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v30);
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
      v35 = (_QWORD *)v19[1];
      if ( v35 == v6 + 3 )
        v19 = 0LL;
      else
        v19 = v35 - 1;
    }
    goto LABEL_16;
  }
  v31 = (_QWORD *)v19[1];
  if ( v31 == v6 + 3 )
    v32 = 0LL;
  else
    v32 = v31 - 1;
  if ( !v32 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v33);
  }
  v21 = *(_QWORD *)(v19[12] + 96LL);
  if ( *(_DWORD *)(v21 + 76) == 15 )
  {
    v18 = 4;
    if ( v19[11] == v32[11] )
      v18 = 2;
LABEL_48:
    LODWORD(v52) = 0;
    cx = 0;
    cy = 0;
    if ( !v19 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = v19[11];
    v40 = *(_QWORD *)(v39 + 104);
    if ( v40 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v40 + 96));
      v41 = *(_QWORD *)(v39 + 104);
    }
    else
    {
      v41 = 0LL;
    }
    v49[0] = v41;
    v42 = *(DMMVIDPNSOURCEMODE **)(v41 + 144);
    if ( v42 && *((_DWORD *)v42 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v42)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v42)->PrimSurfSize.cy;
    }
    v43 = v19[12];
    v44 = *(_QWORD *)(v43 + 104);
    if ( v44 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 96));
      v45 = *(_QWORD *)(v43 + 104);
    }
    else
    {
      v45 = 0LL;
    }
    v46 = *(_QWORD *)(v45 + 144);
    v53 = v45;
    if ( v46 )
    {
      v51 = *(struct _D3DDDI_RATIONAL *)(v46 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72), &v51);
      v47 = DMMVIDEOSIGNALMODE::DivideAndRound(v51.Numerator, v51.Denominator);
    }
    else
    {
      v47 = v52;
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v48 = WdLogNewEntry5_WdAssertion(v46);
      WdLogEvent5_WdAssertion(v48);
    }
    DpiMiracastHandleDisplayConfigChange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 176LL),
      v18,
      cx,
      cy,
      v47);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v49, 0LL);
    goto LABEL_16;
  }
  v21 = *(_QWORD *)(v32[12] + 96LL);
  if ( *(_DWORD *)(v21 + 76) == 15 )
  {
    v18 = 4;
    v34 = v19[11] == v32[11];
    v19 = v32;
    if ( v34 )
      v18 = 2;
    goto LABEL_48;
  }
LABEL_16:
  auto_rc<DMMVIDPN>::operator=((__int64 *)this + 10, &v50);
LABEL_17:
  auto_rc<DMMVIDPN>::reset(&v50, 0LL);
  return v2;
}

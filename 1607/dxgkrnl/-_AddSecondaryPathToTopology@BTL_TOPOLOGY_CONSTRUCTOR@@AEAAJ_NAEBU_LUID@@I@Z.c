/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01AD420
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADE04 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01ADF20 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01ADFB8 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084F6C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C00B92F4 (_CCD_BTL--CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01AD3D4 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01AE818 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // r14
  _QWORD *v15; // rax
  const struct DMMVIDEOPRESENTTARGET *v16; // rdi
  VIDPN_MGR *v17; // r13
  int ClientVidPn; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rbx
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  _QWORD *v32; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  struct DXGADAPTER *v34; // rsi
  unsigned int v35; // edx
  int IsTargetForcable; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rcx
  unsigned __int8 v41; // r11
  DMMVIDPNTOPOLOGY *v42; // r10
  unsigned int v43; // eax
  unsigned int v44; // r13d
  unsigned int v45; // ecx
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  char v52[8]; // [rsp+48h] [rbp-89h] BYREF
  const struct DMMVIDEOPRESENTTARGET *v53; // [rsp+50h] [rbp-81h]
  unsigned int v54; // [rsp+58h] [rbp-79h]
  __int64 v55; // [rsp+60h] [rbp-71h] BYREF
  const struct DMMVIDPN *v56; // [rsp+68h] [rbp-69h] BYREF
  DMMVIDPNTOPOLOGY *v57; // [rsp+70h] [rbp-61h]
  VIDPN_MGR *v58; // [rsp+78h] [rbp-59h]
  DMMVIDPNTOPOLOGY *v59; // [rsp+80h] [rbp-51h]
  __int64 v60; // [rsp+88h] [rbp-49h] BYREF
  struct DXGADAPTER *v61; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 v62; // [rsp+98h] [rbp-39h] BYREF
  _BYTE v63[128]; // [rsp+A8h] [rbp-29h] BYREF

  v4 = 0;
  v52[4] = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v62);
  v61 = v9;
  v14 = v9;
  if ( !v9 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v15[3] = *this;
    v15[4] = *((_QWORD *)*this + 8);
    v15[5] = a3->HighPart;
    v15[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v15);
    LODWORD(v16) = -1073741810;
    goto LABEL_74;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v9, 0LL);
  LODWORD(v16) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63);
  if ( (int)v16 < 0 )
    goto LABEL_73;
  v58 = *(VIDPN_MGR **)(*((_QWORD *)v14 + 266) + 88LL);
  v17 = v58;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v60, (__int64)v58);
  v56 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v58, (__int64 *)&v56);
  v16 = (const struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v20[3] = v16;
    v20[4] = v14;
    v20[5] = *((int *)v14 + 68);
    v20[6] = *((unsigned int *)v14 + 67);
    v20[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v20);
    goto LABEL_72;
  }
  v57 = (const struct DMMVIDPN *)((char *)v56 + 96);
  if ( v56 == (const struct DMMVIDPN *)-96LL )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[3] = v14;
    v21[4] = *((int *)v14 + 68);
    v21[5] = *((unsigned int *)v14 + 67);
    v21[6] = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v16) = -1073741823;
    goto LABEL_72;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)*this + 8);
    v23 = v22 ? *(_WORD *)(v22 + 20) : 0;
    if ( v4 >= v23 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v4);
    v25 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 2) == *((_DWORD *)v14 + 67)
      && *((_DWORD *)PathDescriptor + 3) == *((_DWORD *)v14 + 68) )
    {
      v26 = *((_DWORD *)PathDescriptor + 4);
      v27 = *((_DWORD *)PathDescriptor + 5);
      v28 = (unsigned __int8)v52[4];
      if ( v26 == a4 )
        v28 = 1;
      *(_DWORD *)&v52[4] = v28;
      v29 = VIDPN_MGR::AddPathToVidPnTopology(
              v17,
              v57,
              v26,
              v27,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v4,
              0,
              D3DKMDT_MCC_IGNORE);
      v16 = (const struct DMMVIDEOPRESENTTARGET *)v29;
      if ( v29 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v20[3] = v16;
        v20[4] = *((int *)v25 + 3);
        v20[5] = *((unsigned int *)v25 + 2);
        v20[6] = *((unsigned int *)v25 + 4);
        v20[7] = *((unsigned int *)v25 + 5);
        goto LABEL_20;
      }
    }
    ++v4;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v17 + 12) + 72LL), 1u);
  v31 = (_QWORD *)*((_QWORD *)v17 + 12);
  v16 = 0LL;
  v53 = 0LL;
  v54 = -1;
  v52[0] = 0;
  v32 = v31 + 3;
  if ( (_QWORD *)*v32 == v32 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v32 - 8LL)) == 0LL )
  {
LABEL_69:
    LODWORD(v16) = -1073741275;
    goto LABEL_70;
  }
  v34 = v61;
  while ( 1 )
  {
    if ( *((_BYTE *)NextTarget + 396)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v57, *((_DWORD *)NextTarget + 6))
      || v35 == *((_DWORD *)this + 6) )
    {
      goto LABEL_31;
    }
    LODWORD(v16) = IsVirtualizationDisabledForTarget((__int64)v34, v35, (bool *)&v52[3], (bool *)&v52[1]);
    if ( (int)v16 < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
      v48[3] = v34;
      v48[4] = *((unsigned int *)NextTarget + 6);
      goto LABEL_68;
    }
    if ( v52[4] )
    {
      if ( !v52[1] )
        goto LABEL_30;
    }
    else if ( *((_BYTE *)this + 10) && v52[1] )
    {
      goto LABEL_30;
    }
    if ( *((_QWORD *)NextTarget + 12) )
      goto LABEL_40;
    if ( a2 )
      break;
LABEL_30:
    v16 = v53;
LABEL_31:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v31, NextTarget);
    if ( !NextTarget )
    {
      if ( v16 )
      {
        LODWORD(v16) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (const struct _LUID *)((char *)v34 + 268),
                         v54,
                         *((_DWORD *)v16 + 6),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v16 + 18),
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v16 + 19),
                         v52[0]);
        goto LABEL_70;
      }
      goto LABEL_69;
    }
  }
  IsTargetForcable = DmmIsTargetForcable((__int64)v34, *((_DWORD *)NextTarget + 6), (bool *)&v52[2], 0);
  v16 = (const struct DMMVIDEOPRESENTTARGET *)IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v48[3] = v16;
    v48[4] = *((int *)v34 + 68);
    v48[5] = *((unsigned int *)v34 + 67);
    v48[6] = *((unsigned int *)NextTarget + 6);
    v48[7] = *((_QWORD *)*this + 8);
LABEL_68:
    WdLogEvent5_WdError(v48);
    goto LABEL_70;
  }
  if ( !v52[2] )
    goto LABEL_30;
LABEL_40:
  v16 = v53;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v34, NextTarget, v53) )
    goto LABEL_31;
  v55 = 0LL;
  v39 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v17, v56, &v55, v38);
  v41 = 0;
  v16 = (const struct DMMVIDEOPRESENTTARGET *)v39;
  if ( v39 < 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v40);
    v49[3] = v16;
    v49[4] = v34;
    v49[5] = *((int *)v34 + 68);
    v49[6] = *((unsigned int *)v34 + 67);
    v49[7] = this;
    goto LABEL_65;
  }
  v42 = (DMMVIDPNTOPOLOGY *)(v55 + 96);
  v59 = (DMMVIDPNTOPOLOGY *)(v55 + 96);
  if ( v55 == -96 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v40);
    v50[3] = v34;
    v50[4] = *((int *)v34 + 68);
    v50[5] = *((unsigned int *)v34 + 67);
    v50[6] = this;
    WdLogEvent5_WdError(v50);
    LODWORD(v16) = -1073741823;
    goto LABEL_66;
  }
  v43 = a4;
  v44 = a4;
  if ( a4 == -1 )
    v44 = 0;
  while ( 2 )
  {
    if ( v43 == -1 )
    {
      v45 = *(_DWORD *)(*((_QWORD *)v14 + 266) + 80LL);
      v43 = a4;
    }
    else
    {
      v45 = v43 + 1;
    }
    if ( v44 >= v45 )
    {
      v16 = v53;
LABEL_60:
      auto_rc<DMMVIDPN>::reset(&v55, 0LL);
      v17 = v58;
      goto LABEL_31;
    }
    if ( v43 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v42, v44) )
    {
LABEL_53:
      v43 = a4;
      ++v44;
      continue;
    }
    break;
  }
  v46 = VIDPN_MGR::AddPathToVidPnTopology(
          v58,
          v42,
          v44,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          v41,
          D3DKMDT_MCC_IGNORE);
  v16 = (const struct DMMVIDEOPRESENTTARGET *)v46;
  if ( v46 == -1071774975 )
  {
    v42 = v59;
    v41 = 0;
    goto LABEL_53;
  }
  if ( v46 >= 0 )
  {
    v16 = NextTarget;
    v53 = NextTarget;
    v54 = v44;
    v52[0] = !v52[3] || !v52[1];
    goto LABEL_60;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
  v49[3] = v16;
  v49[4] = *((int *)v34 + 68);
  v49[5] = *((unsigned int *)v34 + 67);
  v49[6] = v44;
  v49[7] = *((unsigned int *)NextTarget + 6);
LABEL_65:
  WdLogEvent5_WdError(v49);
LABEL_66:
  auto_rc<DMMVIDPN>::reset(&v55, 0LL);
LABEL_70:
  if ( v31 )
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 8));
LABEL_72:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v56, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v60 + 40));
LABEL_73:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
LABEL_74:
  CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v61);
  return (unsigned int)v16;
}

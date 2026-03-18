/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0183CC0
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01846E4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0184804 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018489C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     sub_1C005D37C @ 0x1C005D37C (sub_1C005D37C.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FEA8 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C00987D8 (DmmIsTargetForcable.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C0183C84 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01850FC (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
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
  struct DXGADAPTER *v14; // rdi
  _QWORD *v15; // rax
  struct DMMVIDEOPRESENTTARGET *v16; // r14
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
  _QWORD *v31; // rsi
  _QWORD *v32; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  struct DXGADAPTER *v34; // rbx
  unsigned int v35; // edx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v36; // ecx
  int v37; // r9d
  int IsTargetForcable; // eax
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int8 v43; // r11
  DMMVIDPNTOPOLOGY *v44; // r10
  unsigned int v45; // eax
  unsigned int v46; // r13d
  unsigned int v47; // ecx
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  bool v54; // [rsp+48h] [rbp-69h]
  bool v55; // [rsp+49h] [rbp-68h] BYREF
  bool v56; // [rsp+4Ah] [rbp-67h] BYREF
  bool v57; // [rsp+4Bh] [rbp-66h] BYREF
  int v58; // [rsp+4Ch] [rbp-65h]
  struct DMMVIDEOPRESENTTARGET *v59; // [rsp+50h] [rbp-61h]
  unsigned int v60; // [rsp+58h] [rbp-59h]
  __int64 v61; // [rsp+60h] [rbp-51h] BYREF
  const struct DMMVIDPN *v62; // [rsp+68h] [rbp-49h] BYREF
  struct _LUID v63; // [rsp+70h] [rbp-41h] BYREF
  struct DXGADAPTER *v64; // [rsp+78h] [rbp-39h] BYREF
  VIDPN_MGR *v65; // [rsp+80h] [rbp-31h]
  DMMVIDPNTOPOLOGY *v66; // [rsp+88h] [rbp-29h]
  __int64 v67; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v68[112]; // [rsp+98h] [rbp-19h] BYREF

  v4 = 0;
  LOBYTE(v58) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3);
  v64 = v9;
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
    goto LABEL_73;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, v9, 0LL);
  LODWORD(v16) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68);
  if ( (int)v16 < 0 )
    goto LABEL_72;
  v65 = *(VIDPN_MGR **)(*((_QWORD *)v14 + 248) + 112LL);
  v17 = v65;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v67, (__int64)v65);
  v62 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v65, (__int64 *)&v62);
  v16 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v20[3] = v16;
    v20[4] = v14;
    v20[5] = (int)HIDWORD(*(_QWORD *)((char *)v14 + 252));
    v20[6] = *((unsigned int *)v14 + 63);
    v20[7] = this;
LABEL_19:
    WdLogEvent5_WdError(v20);
    goto LABEL_71;
  }
  v66 = (const struct DMMVIDPN *)((char *)v62 + 96);
  if ( v62 == (const struct DMMVIDPN *)-96LL )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[3] = v14;
    v21[4] = (int)HIDWORD(*(_QWORD *)((char *)v14 + 252));
    v21[5] = *((unsigned int *)v14 + 63);
    v21[6] = this;
    WdLogEvent5_WdError(v21);
    LODWORD(v16) = -1073741823;
    goto LABEL_71;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)*this + 8);
    v23 = v22 ? *(_WORD *)(v22 + 20) : 0;
    if ( v4 >= v23 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v4);
    v25 = PathDescriptor;
    if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)v14 + 252) )
    {
      v26 = *((_DWORD *)PathDescriptor + 4);
      v27 = *((_DWORD *)PathDescriptor + 5);
      v28 = (unsigned __int8)v58;
      if ( v26 == a4 )
        v28 = 1;
      v58 = v28;
      v29 = VIDPN_MGR::AddPathToVidPnTopology(
              v17,
              v66,
              v26,
              v27,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v4,
              0,
              D3DKMDT_MCC_IGNORE);
      v16 = (struct DMMVIDEOPRESENTTARGET *)v29;
      if ( v29 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v20[3] = v16;
        v20[4] = *((int *)v25 + 3);
        v20[5] = *((unsigned int *)v25 + 2);
        v20[6] = *((unsigned int *)v25 + 4);
        v20[7] = *((unsigned int *)v25 + 5);
        goto LABEL_19;
      }
    }
    ++v4;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v17 + 12) + 72LL), 1u);
  v31 = (_QWORD *)*((_QWORD *)v17 + 12);
  v16 = 0LL;
  v59 = 0LL;
  v60 = -1;
  v54 = 0;
  v32 = v31 + 3;
  if ( (_QWORD *)*v32 == v32 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v32 - 8LL)) == 0LL )
  {
LABEL_68:
    LODWORD(v16) = a2 != 0 ? 0xC0000225 : 0;
    goto LABEL_69;
  }
  v34 = v64;
  while ( 1 )
  {
    if ( *((_BYTE *)NextTarget + 396)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v66, *((_DWORD *)NextTarget + 6))
      || v35 == *((_DWORD *)this + 6) )
    {
      goto LABEL_30;
    }
    LODWORD(v16) = IsVirtualizationDisabledForTarget(v34, v35, &v56, &v55);
    if ( (int)v16 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
      v50[3] = v34;
      v50[4] = *((unsigned int *)NextTarget + 6);
      goto LABEL_67;
    }
    if ( (_BYTE)v58 )
    {
      if ( !v55 )
        goto LABEL_29;
    }
    else if ( *((_BYTE *)this + 10) && v55 )
    {
      goto LABEL_29;
    }
    if ( *((_QWORD *)NextTarget + 12) )
      goto LABEL_39;
    if ( a2 )
      break;
LABEL_29:
    v16 = v59;
LABEL_30:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v31, NextTarget);
    if ( !NextTarget )
    {
      if ( v16 )
      {
        v36 = *((_DWORD *)v16 + 18);
        v37 = *((_DWORD *)v16 + 6);
        v63 = *(struct _LUID *)((char *)v34 + 252);
        LODWORD(v16) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         &v63,
                         v60,
                         v37,
                         v36,
                         v54);
        goto LABEL_69;
      }
      goto LABEL_68;
    }
  }
  IsTargetForcable = DmmIsTargetForcable((__int64)v34, *((_DWORD *)NextTarget + 6), &v57, 0);
  v16 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v50[3] = v16;
    v50[4] = (int)HIDWORD(*(_QWORD *)((char *)v34 + 252));
    v50[5] = *((unsigned int *)v34 + 63);
    v50[6] = *((unsigned int *)NextTarget + 6);
    v50[7] = *((_QWORD *)*this + 8);
LABEL_67:
    WdLogEvent5_WdError(v50);
    goto LABEL_69;
  }
  if ( !v57 )
    goto LABEL_29;
LABEL_39:
  v16 = v59;
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v34, NextTarget, v59) )
    goto LABEL_30;
  v61 = 0LL;
  v41 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v17, v62, &v61, v40);
  v43 = 0;
  v16 = (struct DMMVIDEOPRESENTTARGET *)v41;
  if ( v41 < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v51[3] = v16;
    v51[4] = v34;
    v51[5] = (int)HIDWORD(*(_QWORD *)((char *)v34 + 252));
    v51[6] = *((unsigned int *)v34 + 63);
    v51[7] = this;
    goto LABEL_64;
  }
  v44 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
  v63 = (struct _LUID)(v61 + 96);
  if ( v61 == -96 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v52[3] = v34;
    v52[4] = (int)HIDWORD(*(_QWORD *)((char *)v34 + 252));
    v52[5] = *((unsigned int *)v34 + 63);
    v52[6] = this;
    WdLogEvent5_WdError(v52);
    LODWORD(v16) = -1073741823;
    goto LABEL_65;
  }
  v45 = a4;
  v46 = a4;
  if ( a4 == -1 )
    v46 = 0;
  while ( 2 )
  {
    if ( v45 == -1 )
    {
      v47 = *(_DWORD *)(*((_QWORD *)v14 + 248) + 104LL);
      v45 = a4;
    }
    else
    {
      v47 = v45 + 1;
    }
    if ( v46 >= v47 )
    {
      v16 = v59;
LABEL_59:
      auto_rc<DMMVIDPN>::reset(&v61, 0LL);
      v17 = v65;
      goto LABEL_30;
    }
    if ( v45 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v44, v46) )
    {
LABEL_52:
      v45 = a4;
      ++v46;
      continue;
    }
    break;
  }
  v48 = VIDPN_MGR::AddPathToVidPnTopology(
          v65,
          v44,
          v46,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          v43,
          D3DKMDT_MCC_IGNORE);
  v16 = (struct DMMVIDEOPRESENTTARGET *)v48;
  if ( v48 == -1071774975 )
  {
    v44 = (DMMVIDPNTOPOLOGY *)v63;
    v43 = 0;
    goto LABEL_52;
  }
  if ( v48 >= 0 )
  {
    v16 = NextTarget;
    v59 = NextTarget;
    v60 = v46;
    v54 = !v56 || !v55;
    goto LABEL_59;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdError(v49);
  v51[3] = v16;
  v51[4] = (int)HIDWORD(*(_QWORD *)((char *)v34 + 252));
  v51[5] = *((unsigned int *)v34 + 63);
  v51[6] = v46;
  v51[7] = *((unsigned int *)NextTarget + 6);
LABEL_64:
  WdLogEvent5_WdError(v51);
LABEL_65:
  auto_rc<DMMVIDPN>::reset(&v61, 0LL);
LABEL_69:
  if ( v31 )
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 8));
LABEL_71:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v67 + 40));
LABEL_72:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
LABEL_73:
  sub_1C005D37C(&v64);
  return (unsigned int)v16;
}

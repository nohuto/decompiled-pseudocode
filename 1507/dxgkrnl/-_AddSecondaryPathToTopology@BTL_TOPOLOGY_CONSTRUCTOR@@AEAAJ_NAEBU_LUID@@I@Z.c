/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018021C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018033C (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01803D4 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097120 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO @ 0x1C009C390 (_BTL_TOPOLOGY_CONSTRUCTOR--AugmentTopology_--_24_--_AUTO--__AUTO.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C017F7F8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0180C28 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        __int64 a2,
        const struct _LUID *a3,
        __int64 a4)
{
  unsigned int v4; // esi
  int v5; // r13d
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r14
  VIDPN_MGR *v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  int ClientVidPn; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  _QWORD *v23; // rax
  struct DMMVIDPNTOPOLOGY *v24; // r14
  _QWORD *v25; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rsi
  const struct DMMVIDEOPRESENTTARGET *v36; // r13
  _QWORD *v37; // r15
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r15
  struct DXGADAPTER *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  int IsTargetForcable; // eax
  __int64 v44; // rcx
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rcx
  DMMVIDPNTOPOLOGY *v48; // r10
  unsigned int v49; // eax
  unsigned int v50; // r13d
  unsigned int v51; // ecx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v60; // ebx
  int v61; // r14d
  char IsTargetSupportVirtualMode; // al
  bool v64; // [rsp+48h] [rbp-69h] BYREF
  int v65; // [rsp+4Ch] [rbp-65h]
  unsigned int v66; // [rsp+50h] [rbp-61h]
  const struct DMMVIDPN *v67; // [rsp+58h] [rbp-59h] BYREF
  __int64 v68; // [rsp+60h] [rbp-51h] BYREF
  struct _LUID v69; // [rsp+68h] [rbp-49h] BYREF
  VIDPN_MGR *v70; // [rsp+70h] [rbp-41h]
  const struct DMMVIDEOPRESENTTARGET *v71; // [rsp+78h] [rbp-39h]
  struct DMMVIDPNTOPOLOGY *v72; // [rsp+80h] [rbp-31h]
  struct DXGADAPTER *v73; // [rsp+88h] [rbp-29h] BYREF
  __int64 v74; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v75[112]; // [rsp+98h] [rbp-19h] BYREF
  char v76; // [rsp+120h] [rbp+6Fh]
  unsigned int v77; // [rsp+130h] [rbp+7Fh]

  v77 = a4;
  v76 = a2;
  v4 = 0;
  v5 = a4;
  LOBYTE(v65) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, (__int64)a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3);
  v73 = v9;
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
    goto LABEL_66;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v75, v9, 0LL);
  LODWORD(v16) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v75);
  if ( (int)v16 < 0 )
    goto LABEL_65;
  v70 = *(VIDPN_MGR **)(*((_QWORD *)v14 + 247) + 88LL);
  v17 = v70;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v74, (__int64)v70);
  v67 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v70, (__int64 *)&v67, v18, v19);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v23[3] = v16;
    v23[4] = v14;
    v23[5] = (int)HIDWORD(*(_QWORD *)((char *)v14 + 252));
    v23[6] = *((unsigned int *)v14 + 63);
    v23[7] = this;
LABEL_19:
    WdLogEvent5_WdError(v23);
    goto LABEL_64;
  }
  v24 = (const struct DMMVIDPN *)((char *)v67 + 96);
  v72 = (const struct DMMVIDPN *)((char *)v67 + 96);
  if ( v67 == (const struct DMMVIDPN *)-96LL )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v25[3] = v14;
    v25[4] = (int)HIDWORD(*(_QWORD *)((char *)v14 + 252));
    v25[5] = *((unsigned int *)v14 + 63);
    v25[6] = this;
    WdLogEvent5_WdError(v25);
    LODWORD(v16) = -1073741823;
    goto LABEL_64;
  }
  while ( 1 )
  {
    v26 = *((_QWORD *)*this + 8);
    v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
    if ( v4 >= v27 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v4, 1LL, v22);
    v29 = PathDescriptor;
    if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)v14 + 252) )
    {
      v30 = *((unsigned int *)PathDescriptor + 4);
      v31 = *((unsigned int *)PathDescriptor + 5);
      v32 = (unsigned __int8)v65;
      if ( (_DWORD)v30 == v5 )
        v32 = 1;
      v65 = v32;
      v33 = VIDPN_MGR::AddPathToVidPnTopology(
              v17,
              v24,
              v30,
              v31,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v4,
              0,
              D3DKMDT_MCC_IGNORE);
      v16 = v33;
      if ( v33 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v23[3] = v16;
        v23[4] = *((int *)v29 + 3);
        v23[5] = *((unsigned int *)v29 + 2);
        v23[6] = *((unsigned int *)v29 + 4);
        v23[7] = *((unsigned int *)v29 + 5);
        goto LABEL_19;
      }
      v24 = v72;
    }
    ++v4;
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v17 + 12) + 72LL), 1u);
  v35 = (_QWORD *)*((_QWORD *)v17 + 12);
  v36 = 0LL;
  v71 = 0LL;
  v66 = -1;
  v37 = v35 + 3;
  if ( (_QWORD *)*v37 == v37 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v37 - 8LL)) == 0LL )
  {
LABEL_61:
    LODWORD(v16) = v76 != 0 ? 0xC0000225 : 0;
    goto LABEL_62;
  }
  v39 = v73;
  while ( 1 )
  {
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v24, *((_DWORD *)NextTarget + 6)) && (_DWORD)v40 != *((_DWORD *)this + 6) )
    {
      if ( (_BYTE)v65 )
      {
        if ( DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(NextTarget, v40, v41, v42) )
          goto LABEL_51;
      }
      else if ( *((_BYTE *)this + 10) && !DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(NextTarget, v40, v41, v42) )
      {
        goto LABEL_51;
      }
      if ( *((_QWORD *)NextTarget + 12) )
        goto LABEL_69;
      if ( v76 )
      {
        IsTargetForcable = DmmIsTargetForcable((__int64)v39, *((_DWORD *)NextTarget + 6), &v64, 0);
        v16 = IsTargetForcable;
        if ( IsTargetForcable < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v44);
          v57[3] = v16;
          v57[4] = (int)HIDWORD(*(_QWORD *)((char *)v39 + 252));
          v57[5] = *((unsigned int *)v39 + 63);
          v57[6] = *((unsigned int *)NextTarget + 6);
          v57[7] = *((_QWORD *)*this + 8);
          WdLogEvent5_WdError(v57);
          goto LABEL_62;
        }
        if ( v64 )
        {
LABEL_69:
          if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v39, NextTarget, v36) )
            break;
        }
      }
    }
LABEL_51:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v35, NextTarget);
    if ( !NextTarget )
    {
      if ( v36 )
      {
        v60 = *((_DWORD *)v36 + 18);
        v61 = *((_DWORD *)v36 + 6);
        v69 = *(struct _LUID *)((char *)v39 + 252);
        IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v36, v54, v55, v56);
        LODWORD(v16) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         &v69,
                         v66,
                         v61,
                         v60,
                         IsTargetSupportVirtualMode);
        goto LABEL_62;
      }
      goto LABEL_61;
    }
    v24 = v72;
  }
  v68 = 0LL;
  v46 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v70, v67, &v68, v45);
  v16 = v46;
  if ( v46 < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    v58[3] = v16;
    v58[4] = v39;
    v58[5] = (int)HIDWORD(*(_QWORD *)((char *)v39 + 252));
    v58[6] = *((unsigned int *)v39 + 63);
    v58[7] = this;
    goto LABEL_57;
  }
  v48 = (DMMVIDPNTOPOLOGY *)(v68 + 96);
  v69 = (struct _LUID)(v68 + 96);
  if ( v68 == -96 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    v59[3] = v39;
    v59[4] = (int)HIDWORD(*(_QWORD *)((char *)v39 + 252));
    v59[5] = *((unsigned int *)v39 + 63);
    v59[6] = this;
    WdLogEvent5_WdError(v59);
    LODWORD(v16) = -1073741823;
    goto LABEL_58;
  }
  v49 = v77;
  v50 = v77;
  if ( v77 == -1 )
    v50 = 0;
  while ( 2 )
  {
    if ( v49 == -1 )
    {
      v51 = *(_DWORD *)(*((_QWORD *)v14 + 247) + 80LL);
      v49 = v77;
    }
    else
    {
      v51 = v49 + 1;
    }
    if ( v50 >= v51 )
      goto LABEL_50;
    if ( v49 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v48, v50) )
    {
LABEL_47:
      v49 = v77;
      ++v50;
      continue;
    }
    break;
  }
  v52 = VIDPN_MGR::AddPathToVidPnTopology(
          v70,
          v48,
          v50,
          *((unsigned int *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v16 = v52;
  if ( v52 == -1071774975 )
  {
    v48 = (DMMVIDPNTOPOLOGY *)v69;
    goto LABEL_47;
  }
  if ( v52 >= 0 )
  {
    v71 = NextTarget;
    v66 = v50;
LABEL_50:
    auto_rc<DMMVIDPN>::reset(&v68, 0LL);
    v36 = v71;
    goto LABEL_51;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v53);
  v58[3] = v16;
  v58[4] = (int)HIDWORD(*(_QWORD *)((char *)v39 + 252));
  v58[5] = *((unsigned int *)v39 + 63);
  v58[6] = v50;
  v58[7] = *((unsigned int *)NextTarget + 6);
LABEL_57:
  WdLogEvent5_WdError(v58);
LABEL_58:
  auto_rc<DMMVIDPN>::reset(&v68, 0LL);
LABEL_62:
  if ( v35 )
    ReferenceCounted::Release((ReferenceCounted *)(v35 + 8));
LABEL_64:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v67, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v74 + 40));
LABEL_65:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v75);
LABEL_66:
  BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO(&v73);
  return (unsigned int)v16;
}

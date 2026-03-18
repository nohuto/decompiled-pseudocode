/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0183700
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01836D4 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EC4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004EF8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C0183C84 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0184E8C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0184F24 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  const struct DMMVIDEOPRESENTTARGETSET **v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  struct DMMVIDPNTOPOLOGY *v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  const struct DMMVIDEOPRESENTTARGETSET *v21; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int PathSourceFromTarget; // eax
  __int64 v28; // r15
  struct DMMVIDPNTOPOLOGY *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  char v32; // dl
  unsigned int v33; // r9d
  int v34; // eax
  const struct DMMVIDEOPRESENTTARGET *v35; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  _QWORD *v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // r15d
  struct DMMVIDPNTOPOLOGY *v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  char v43; // dl
  unsigned int v44; // r9d
  int v45; // eax
  __int64 v47; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v48; // [rsp+20h] [rbp-60h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v49; // [rsp+20h] [rbp-60h]
  DMMVIDPNTOPOLOGY *v50; // [rsp+40h] [rbp-40h]
  DMMVIDPNTOPOLOGY *v51; // [rsp+48h] [rbp-38h]
  __int64 v52; // [rsp+50h] [rbp-30h] BYREF
  __int64 v53; // [rsp+58h] [rbp-28h] BYREF
  struct _LUID v54; // [rsp+60h] [rbp-20h] BYREF
  struct _LUID v55; // [rsp+68h] [rbp-18h] BYREF
  __int64 v56; // [rsp+70h] [rbp-10h] BYREF
  bool v57; // [rsp+C8h] [rbp+48h] BYREF
  bool v58; // [rsp+D0h] [rbp+50h] BYREF
  int v59; // [rsp+D8h] [rbp+58h]

  v4 = *(const struct DMMVIDEOPRESENTTARGETSET ***)(*((_QWORD *)a2 + 248) + 112LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v56, (__int64)v4);
  v5 = *((_QWORD *)a2 + 248);
  v6 = 0;
  v53 = 0LL;
  v51 = 0LL;
  if ( *(_BYTE *)(v5 + 158)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((struct VIDPN_MGR *)v4, &v53) >= 0 )
  {
    v8 = v53;
    if ( !v53 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
    }
    v51 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v52 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v4, &v52);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2;
    v13[5] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v13[6] = *((unsigned int *)a2 + 63);
LABEL_17:
    WdLogEvent5_WdError(v13);
    goto LABEL_74;
  }
  v14 = (struct DMMVIDPNTOPOLOGY *)(v52 + 96);
  v50 = (DMMVIDPNTOPOLOGY *)(v52 + 96);
  if ( v52 == -96 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = -96LL;
    v15[4] = a2;
    v15[5] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v15[6] = *((unsigned int *)a2 + 63);
    WdLogEvent5_WdError(v15);
    LODWORD(v12) = -1073741823;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( v16 )
      LOWORD(v16) = *(_WORD *)(v16 + 20);
    if ( v6 >= (unsigned __int16)v16 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v6);
    v18 = PathDescriptor;
    if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)a2 + 252) )
    {
      v19 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v4,
              v14,
              *((_DWORD *)PathDescriptor + 4),
              *((_DWORD *)PathDescriptor + 5),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v12 = v19;
      if ( v19 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v13[3] = v12;
        v13[4] = *((int *)v18 + 3);
        v13[5] = *((unsigned int *)v18 + 2);
        v13[6] = *((unsigned int *)v18 + 4);
        v13[7] = *((unsigned int *)v18 + 5);
        goto LABEL_17;
      }
    }
    ++v6;
  }
  v59 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v4[12] + 18);
  v21 = v4[12];
  if ( v51 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v4[12]);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v35, v21) )
    {
      v35 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v14, *((_DWORD *)i + 6))
        && (v23 != *((_DWORD *)this + 6) || *(_QWORD *)((char *)a2 + 252) != *(_QWORD *)((char *)this + 12))
        && *((_QWORD *)v35 + 12) )
      {
        LODWORD(v12) = IsVirtualizationDisabledForTarget(a2, v23, &v58, &v57);
        if ( (int)v12 < 0 )
        {
LABEL_76:
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v47 = *((unsigned int *)v35 + 6);
          v37[4] = a2;
          v37[3] = v47;
LABEL_77:
          WdLogEvent5_WdError(v37);
          goto LABEL_72;
        }
        if ( !*((_BYTE *)this + 10) || !v57 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v51, *((unsigned int *)v35 + 6), v25, v26);
          v28 = PathSourceFromTarget;
          if ( PathSourceFromTarget == -1 )
            goto LABEL_38;
          if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v50, PathSourceFromTarget) )
          {
            v30 = VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v4,
                    v29,
                    v28,
                    *((_DWORD *)v35 + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v12 = v30;
            if ( v30 != -1071774975 )
            {
              if ( v30 < 0 )
              {
                v37 = (_QWORD *)WdLogNewEntry5_WdError(v31);
                v37[3] = v12;
                v37[4] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
                v37[5] = *((unsigned int *)a2 + 63);
                v37[6] = v28;
LABEL_44:
                v37[7] = *((unsigned int *)v35 + 6);
                goto LABEL_77;
              }
              v32 = !v58 || !v57;
              v33 = *((_DWORD *)v35 + 6);
              v48 = *((_DWORD *)v35 + 18);
              v54 = *(struct _LUID *)((char *)a2 + 252);
              LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(this, &v54, v28, v33, v48, v32);
              v34 = v59;
              if ( (int)v12 >= 0 )
                v34 = v12;
              v59 = v34;
            }
LABEL_38:
            v14 = v50;
            continue;
          }
          v14 = v29;
        }
      }
    }
  }
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v21);
LABEL_69:
  v35 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v14, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || v38 == *((_DWORD *)this + 6) && *(_QWORD *)((char *)a2 + 252) == *(_QWORD *)((char *)this + 12)
      || !*((_QWORD *)v35 + 12) )
    {
      goto LABEL_68;
    }
    LODWORD(v12) = IsVirtualizationDisabledForTarget(a2, v38, &v58, &v57);
    if ( (int)v12 < 0 )
      goto LABEL_76;
    if ( *((_BYTE *)this + 10) && v57 )
      goto LABEL_68;
    v39 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 248) + 104LL) )
      goto LABEL_67;
    v40 = v50;
    while ( 1 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v40, v39) )
      {
        v41 = VIDPN_MGR::AddPathToVidPnTopology(
                (VIDPN_MGR *)v4,
                v40,
                v39,
                *((_DWORD *)v35 + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v12 = v41;
        if ( v41 != -1071774975 )
        {
          if ( v41 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v42);
            v37[3] = v12;
            v37[4] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
            v37[5] = *((unsigned int *)a2 + 63);
            v37[6] = v39;
            goto LABEL_44;
          }
          v43 = !v58 || !v57;
          v44 = *((_DWORD *)v35 + 6);
          v49 = *((_DWORD *)v35 + 18);
          v55 = *(struct _LUID *)((char *)a2 + 252);
          LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(this, &v55, v39, v44, v49, v43);
          v45 = v59;
          if ( (int)v12 >= 0 )
            v45 = v12;
          v59 = v45;
LABEL_67:
          v14 = v50;
LABEL_68:
          FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v35, v21);
          goto LABEL_69;
        }
        v40 = v50;
      }
      if ( ++v39 >= *(_DWORD *)(*((_QWORD *)a2 + 248) + 104LL) )
        goto LABEL_67;
    }
  }
  if ( (_DWORD)v12 == -1071774975 )
    LODWORD(v12) = v59;
LABEL_72:
  if ( v21 )
    ReferenceCounted::Release((const struct DMMVIDEOPRESENTTARGETSET *)((char *)v21 + 64));
LABEL_74:
  auto_rc<DMMVIDPN>::reset(&v52, 0LL);
  auto_rc<DMMVIDPN>::reset(&v53, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v56 + 40));
  return (unsigned int)v12;
}

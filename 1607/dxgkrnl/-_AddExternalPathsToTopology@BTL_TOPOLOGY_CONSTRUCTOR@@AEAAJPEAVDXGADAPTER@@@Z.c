/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01ACE7C
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ACE50 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00804BC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01AD3D4 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01AE5A4 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01AE63C (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  const struct DMMVIDPN **v4; // r13
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
  const struct DMMVIDPN *v21; // rbx
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
  char v32; // r8
  int v33; // eax
  const struct DMMVIDEOPRESENTTARGET *v34; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  _QWORD *v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // r15d
  struct DMMVIDPNTOPOLOGY *v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  char v42; // r8
  int v43; // eax
  __int64 v45; // rcx
  DMMVIDPNTOPOLOGY *v46; // [rsp+40h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v47; // [rsp+48h] [rbp-28h]
  __int64 v48; // [rsp+50h] [rbp-20h] BYREF
  __int64 v49; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+60h] [rbp-10h] BYREF
  bool v51; // [rsp+B8h] [rbp+48h] BYREF
  bool v52; // [rsp+C0h] [rbp+50h] BYREF
  int v53; // [rsp+C8h] [rbp+58h]

  v4 = *(const struct DMMVIDPN ***)(*((_QWORD *)a2 + 266) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v50, (__int64)v4);
  v5 = *((_QWORD *)a2 + 266);
  v6 = 0;
  v49 = 0LL;
  v47 = 0LL;
  if ( *(_BYTE *)(v5 + 134) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v49) >= 0 )
  {
    v8 = v49;
    if ( !v49 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
    }
    v47 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v48 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v4, &v48);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2;
    v13[5] = *((int *)a2 + 68);
    v13[6] = *((unsigned int *)a2 + 67);
LABEL_18:
    WdLogEvent5_WdError(v13);
    goto LABEL_77;
  }
  v14 = (struct DMMVIDPNTOPOLOGY *)(v48 + 96);
  v46 = (DMMVIDPNTOPOLOGY *)(v48 + 96);
  if ( v48 == -96 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = -96LL;
    v15[4] = a2;
    v15[5] = *((int *)a2 + 68);
    v15[6] = *((unsigned int *)a2 + 67);
    WdLogEvent5_WdError(v15);
    LODWORD(v12) = -1073741823;
    goto LABEL_77;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)*this + 8);
    if ( v16 )
      LOWORD(v16) = *(_WORD *)(v16 + 20);
    if ( v6 >= (unsigned __int16)v16 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v6);
    v18 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 2) == *((_DWORD *)a2 + 67)
      && *((_DWORD *)PathDescriptor + 3) == *((_DWORD *)a2 + 68) )
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
        goto LABEL_18;
      }
    }
    ++v6;
  }
  v53 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v4[12] + 18);
  v21 = v4[12];
  if ( v47 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v4[12]);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v34, v21) )
    {
      v34 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v14, *((_DWORD *)i + 6))
        && (v23 != *((_DWORD *)this + 6)
         || *((_DWORD *)a2 + 67) != *((_DWORD *)this + 3)
         || *((_DWORD *)a2 + 68) != *((_DWORD *)this + 4))
        && *((_QWORD *)v34 + 12) )
      {
        LODWORD(v12) = IsVirtualizationDisabledForTarget((__int64)a2, v23, &v52, &v51);
        if ( (int)v12 < 0 )
        {
LABEL_79:
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v45 = *((unsigned int *)v34 + 6);
          v36[4] = a2;
          v36[3] = v45;
LABEL_80:
          WdLogEvent5_WdError(v36);
          goto LABEL_75;
        }
        if ( !*((_BYTE *)this + 10) || !v51 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v47, *((unsigned int *)v34 + 6), v25, v26);
          v28 = PathSourceFromTarget;
          if ( PathSourceFromTarget == -1 )
            goto LABEL_40;
          if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v46, PathSourceFromTarget) )
          {
            v30 = VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v4,
                    v29,
                    v28,
                    *((_DWORD *)v34 + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v12 = v30;
            if ( v30 != -1071774975 )
            {
              if ( v30 < 0 )
              {
                v36 = (_QWORD *)WdLogNewEntry5_WdError(v31);
                v36[3] = v12;
                v36[4] = *((int *)a2 + 68);
                v36[5] = *((unsigned int *)a2 + 67);
                v36[6] = v28;
LABEL_46:
                v36[7] = *((unsigned int *)v34 + 6);
                goto LABEL_80;
              }
              v32 = !v52 || !v51;
              LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                               (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                               (const struct _LUID *)((char *)a2 + 268),
                               v28,
                               *((_DWORD *)v34 + 6),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v34 + 18),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v34 + 19),
                               v32);
              v33 = v53;
              if ( (int)v12 >= 0 )
                v33 = v12;
              v53 = v33;
            }
LABEL_40:
            v14 = v46;
            continue;
          }
          v14 = v29;
        }
      }
    }
  }
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v21);
LABEL_72:
  v34 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v14, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || v37 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 67) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 68) == *((_DWORD *)this + 4)
      || !*((_QWORD *)v34 + 12) )
    {
      goto LABEL_71;
    }
    LODWORD(v12) = IsVirtualizationDisabledForTarget((__int64)a2, v37, &v52, &v51);
    if ( (int)v12 < 0 )
      goto LABEL_79;
    if ( *((_BYTE *)this + 10) && v51 )
      goto LABEL_71;
    v38 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 266) + 80LL) )
      goto LABEL_70;
    v39 = v46;
    while ( 1 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v39, v38) )
      {
        v40 = VIDPN_MGR::AddPathToVidPnTopology(
                (VIDPN_MGR *)v4,
                v39,
                v38,
                *((_DWORD *)v34 + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v12 = v40;
        if ( v40 != -1071774975 )
        {
          if ( v40 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v36[3] = v12;
            v36[4] = *((int *)a2 + 68);
            v36[5] = *((unsigned int *)a2 + 67);
            v36[6] = v38;
            goto LABEL_46;
          }
          v42 = !v52 || !v51;
          LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                           (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                           (const struct _LUID *)((char *)a2 + 268),
                           v38,
                           *((_DWORD *)v34 + 6),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v34 + 18),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v34 + 19),
                           v42);
          v43 = v53;
          if ( (int)v12 >= 0 )
            v43 = v12;
          v53 = v43;
LABEL_70:
          v14 = v46;
LABEL_71:
          FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v34, v21);
          goto LABEL_72;
        }
        v39 = v46;
      }
      if ( ++v38 >= *(_DWORD *)(*((_QWORD *)a2 + 266) + 80LL) )
        goto LABEL_70;
    }
  }
  if ( (_DWORD)v12 == -1071774975 )
    LODWORD(v12) = v53;
LABEL_75:
  if ( v21 )
    ReferenceCounted::Release((const struct DMMVIDPN *)((char *)v21 + 64));
LABEL_77:
  auto_rc<DMMVIDPN>::reset(&v48, 0LL);
  auto_rc<DMMVIDPN>::reset(&v49, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40));
  return (unsigned int)v12;
}

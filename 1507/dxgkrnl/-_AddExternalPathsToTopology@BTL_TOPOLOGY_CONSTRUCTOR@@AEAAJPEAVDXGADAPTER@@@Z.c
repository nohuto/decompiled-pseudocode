/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017F298 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C017F7F8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01809D4 (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0180A60 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  const struct DMMVIDEOPRESENTTARGETSET **v4; // r13
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  _QWORD *v18; // rax
  struct DMMVIDPNTOPOLOGY *v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  DMMVIDPNTOPOLOGY *v26; // rsi
  const struct DMMVIDEOPRESENTTARGETSET *v27; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  DWORD PathSourceFromTarget; // eax
  __int64 v33; // rsi
  struct DMMVIDPNTOPOLOGY *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v40; // edi
  unsigned int v41; // esi
  char IsTargetSupportVirtualMode; // al
  int v43; // eax
  const struct DMMVIDEOPRESENTTARGET *v44; // r15
  const struct DMMVIDEOPRESENTTARGET *j; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  DMMVIDPNTOPOLOGY *v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r13d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v57; // edi
  unsigned int v58; // esi
  char v59; // al
  int v60; // eax
  DMMVIDPNTOPOLOGY *v62; // [rsp+40h] [rbp-30h]
  __int64 v63; // [rsp+48h] [rbp-28h] BYREF
  __int64 v64; // [rsp+50h] [rbp-20h] BYREF
  struct _LUID v65; // [rsp+58h] [rbp-18h] BYREF
  VIDPN_MGR *v66; // [rsp+60h] [rbp-10h]
  __int64 v67; // [rsp+68h] [rbp-8h] BYREF
  int v68; // [rsp+B8h] [rbp+48h]
  struct _LUID v69; // [rsp+C0h] [rbp+50h] BYREF
  DMMVIDPNTOPOLOGY *v70; // [rsp+C8h] [rbp+58h]

  v4 = *(const struct DMMVIDEOPRESENTTARGETSET ***)(*((_QWORD *)a2 + 247) + 88LL);
  v66 = (VIDPN_MGR *)v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v67, (__int64)v4);
  v7 = *((_QWORD *)a2 + 247);
  v8 = 0;
  v64 = 0LL;
  v70 = 0LL;
  if ( *(_BYTE *)(v7 + 133)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((struct VIDPN_MGR *)v4, &v64, v5, v6) >= 0 )
  {
    v11 = v64;
    if ( !v64 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9, v5, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    v70 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
  }
  v63 = 0LL;
  v13 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v4, &v63, v5, v6);
  v17 = v13;
  if ( v13 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v18[3] = v17;
    v18[4] = a2;
    v18[5] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v18[6] = *((unsigned int *)a2 + 63);
LABEL_17:
    WdLogEvent5_WdError(v18);
    goto LABEL_61;
  }
  v19 = (struct DMMVIDPNTOPOLOGY *)(v63 + 96);
  v62 = (DMMVIDPNTOPOLOGY *)(v63 + 96);
  if ( v63 == -96 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v20[3] = -96LL;
    v20[4] = a2;
    v20[5] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
    v20[6] = *((unsigned int *)a2 + 63);
    WdLogEvent5_WdError(v20);
    LODWORD(v17) = -1073741823;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( v21 )
      LOWORD(v21) = *(_WORD *)(v21 + 20);
    if ( v8 >= (unsigned __int16)v21 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v8, v15, v16);
    v23 = PathDescriptor;
    if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)a2 + 252) )
    {
      v24 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v4,
              v19,
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 5),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v8,
              0,
              D3DKMDT_MCC_IGNORE);
      v17 = v24;
      if ( v24 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v18[3] = v17;
        v18[4] = *((int *)v23 + 3);
        v18[5] = *((unsigned int *)v23 + 2);
        v18[6] = *((unsigned int *)v23 + 4);
        v18[7] = *((unsigned int *)v23 + 5);
        goto LABEL_17;
      }
    }
    ++v8;
  }
  v68 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v4[12] + 18);
  v26 = v70;
  v27 = v4[12];
  if ( v70 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v4[12]);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v44, v27) )
    {
      v44 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v62, *((_DWORD *)i + 6))
        && ((_DWORD)v29 != *((_DWORD *)this + 6) || *(_QWORD *)((char *)a2 + 252) != *(_QWORD *)((char *)this + 12))
        && *((_QWORD *)v44 + 12)
        && (!*((_BYTE *)this + 10) || DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v44, v29, v30, v31)) )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v26, *((unsigned int *)v44 + 6), v30, v31);
        v33 = PathSourceFromTarget;
        v69.LowPart = PathSourceFromTarget;
        if ( PathSourceFromTarget != -1 && !DMMVIDPNTOPOLOGY::IsSourceInTopology(v62, PathSourceFromTarget) )
        {
          v35 = VIDPN_MGR::AddPathToVidPnTopology(
                  (VIDPN_MGR *)v4,
                  v34,
                  (unsigned int)v33,
                  *((unsigned int *)v44 + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE);
          v17 = v35;
          if ( v35 != -1071774975 )
          {
            if ( v35 < 0 )
            {
              v46 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v46[3] = v17;
              v46[4] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
              v46[5] = *((unsigned int *)a2 + 63);
              v46[6] = v33;
              goto LABEL_63;
            }
            v40 = *((_DWORD *)v44 + 18);
            v41 = *((_DWORD *)v44 + 6);
            v65 = *(struct _LUID *)((char *)a2 + 252);
            IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v44, v36, v38, v39);
            LODWORD(v17) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                             this,
                             &v65,
                             v69.LowPart,
                             v41,
                             v40,
                             IsTargetSupportVirtualMode);
            v43 = v68;
            if ( (int)v17 >= 0 )
              v43 = v17;
            v68 = v43;
          }
        }
        v26 = v70;
      }
    }
  }
  for ( j = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v27);
        ;
        j = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v44, v27) )
  {
    v44 = j;
    if ( !j )
    {
      if ( (_DWORD)v17 == -1071774975 )
        LODWORD(v17) = v68;
      goto LABEL_59;
    }
    if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v62, *((_DWORD *)j + 6))
      && ((_DWORD)v47 != *((_DWORD *)this + 6) || *(_QWORD *)((char *)a2 + 252) != *(_QWORD *)((char *)this + 12))
      && *((_QWORD *)v44 + 12) )
    {
      if ( *((_BYTE *)this + 10) )
      {
        if ( !DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v44, v47, v49, v50) )
          continue;
        v48 = v62;
      }
      v51 = 0;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 247) + 80LL) )
        break;
    }
LABEL_55:
    ;
  }
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v48, v51) )
  {
LABEL_49:
    if ( ++v51 >= *(_DWORD *)(*((_QWORD *)a2 + 247) + 80LL) )
      goto LABEL_55;
  }
  v52 = VIDPN_MGR::AddPathToVidPnTopology(
          v66,
          v48,
          v51,
          *((unsigned int *)v44 + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v17 = v52;
  if ( v52 == -1071774975 )
  {
    v48 = v62;
    goto LABEL_49;
  }
  if ( v52 >= 0 )
  {
    v57 = *((_DWORD *)v44 + 18);
    v58 = *((_DWORD *)v44 + 6);
    v69 = *(struct _LUID *)((char *)a2 + 252);
    v59 = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(v44, v53, v55, v56);
    LODWORD(v17) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(this, &v69, v51, v58, v57, v59);
    v60 = v68;
    if ( (int)v17 >= 0 )
      v60 = v17;
    v68 = v60;
    goto LABEL_55;
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdError(v54);
  v46[3] = v17;
  v46[4] = (int)HIDWORD(*(_QWORD *)((char *)a2 + 252));
  v46[5] = *((unsigned int *)a2 + 63);
  v46[6] = v51;
LABEL_63:
  v46[7] = *((unsigned int *)v44 + 6);
  WdLogEvent5_WdError(v46);
LABEL_59:
  if ( v27 )
    ReferenceCounted::Release((const struct DMMVIDEOPRESENTTARGETSET *)((char *)v27 + 64));
LABEL_61:
  auto_rc<DMMVIDPN>::reset(&v63, 0LL);
  auto_rc<DMMVIDPN>::reset(&v64, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40));
  return (unsigned int)v17;
}

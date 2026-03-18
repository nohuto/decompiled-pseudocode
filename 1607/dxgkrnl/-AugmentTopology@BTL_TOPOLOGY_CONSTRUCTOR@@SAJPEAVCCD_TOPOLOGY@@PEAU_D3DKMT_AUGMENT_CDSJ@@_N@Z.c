/*
 * XREFs of ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D5748
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B68E0 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00DEEF4 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0006E1C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000CD24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C008CB74 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C00B92F4 (_CCD_BTL--CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D584C (-FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUG.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00DE7C8 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01AAEBC (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01AB204 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01AB2B0 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01AD9EC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct _D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebx
  char IsPrimaryClonePathByModality; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // r8d
  int v14; // eax
  _DWORD *v15; // rcx
  bool v16; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // r11
  unsigned int *v19; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGADAPTER *v26; // rbx
  _QWORD *v27; // rax
  struct DMMVIDPNTOPOLOGY *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  struct VIDPN_MGR *v35; // r15
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned int v41; // r12d
  __int64 v42; // rax
  unsigned __int16 v43; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v45; // r13
  int v46; // eax
  __int64 v47; // rcx
  VIDPN_MGR *v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  char v52; // cl
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // r12
  bool v54; // r9
  __int64 v55; // [rsp+50h] [rbp-59h] BYREF
  struct DXGADAPTER *v56; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v57; // [rsp+60h] [rbp-49h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v58; // [rsp+68h] [rbp-41h] BYREF
  __int64 v59; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v60[128]; // [rsp+80h] [rbp-29h] BYREF
  VIDPN_MGR *v61; // [rsp+110h] [rbp+67h] BYREF
  struct DMMVIDPNTOPOLOGY *v62; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int i; // [rsp+128h] [rbp+7Fh] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  v7 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 8);
    if ( v9 )
      v10 = *(unsigned __int16 *)(v9 + 20);
    else
      v10 = 0LL;
    if ( v7 >= (unsigned __int16)v10 )
    {
      if ( !a3 )
        return 3223192377LL;
      v19 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal(v10);
      v21 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v57);
      v56 = v21;
      v26 = v21;
      if ( v21 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v60, v21, 0LL);
        LODWORD(v28) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v60);
        if ( (int)v28 >= 0 )
        {
          v33 = *((_QWORD *)v26 + 266);
          if ( v33 )
          {
            v61 = *(VIDPN_MGR **)(v33 + 88);
            v35 = v61;
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v59, (__int64)v61);
            v55 = 0LL;
            v36 = VIDPN_MGR::CreateClientVidPn(v35, &v55);
            v28 = (struct DMMVIDPNTOPOLOGY *)v36;
            if ( v36 >= 0 )
            {
              v28 = (struct DMMVIDPNTOPOLOGY *)(v55 + 96);
              v62 = (struct DMMVIDPNTOPOLOGY *)(v55 + 96);
              if ( v55 == -96 )
              {
                v40 = (_QWORD *)WdLogNewEntry5_WdError(v37);
                v40[3] = v26;
                v40[4] = *((int *)v26 + 68);
                v40[5] = *((unsigned int *)v26 + 67);
                v40[6] = this;
                v40[7] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v40);
                LODWORD(v28) = -1073741823;
              }
              else
              {
                v41 = 0;
                for ( i = 0; ; i = v41 )
                {
                  v42 = *((_QWORD *)this + 8);
                  v43 = v42 ? *(_WORD *)(v42 + 20) : 0;
                  if ( v41 >= v43 )
                    break;
                  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v41);
                  v45 = PathDescriptor;
                  if ( *((_DWORD *)PathDescriptor + 2) == *((_DWORD *)v26 + 67)
                    && *((_DWORD *)PathDescriptor + 3) == *((_DWORD *)v26 + 68) )
                  {
                    v46 = VIDPN_MGR::AddPathToVidPnTopology(
                            v61,
                            v28,
                            *((_DWORD *)PathDescriptor + 4),
                            *((_DWORD *)PathDescriptor + 5),
                            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                            v41,
                            0,
                            D3DKMDT_MCC_IGNORE);
                    v28 = (struct DMMVIDPNTOPOLOGY *)v46;
                    if ( v46 < 0 )
                    {
                      v38 = (_QWORD *)WdLogNewEntry5_WdError(v47);
                      v38[3] = v28;
                      v38[4] = *((int *)v45 + 3);
                      v38[5] = *((unsigned int *)v45 + 2);
                      v38[6] = *((unsigned int *)v45 + 4);
                      v39 = *((unsigned int *)v45 + 5);
                      goto LABEL_41;
                    }
                    v28 = v62;
                  }
                  IsPrimaryClonePathByModality = 1;
                  ++v41;
                }
                LODWORD(v28) = BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v28, a2);
                if ( (int)v28 >= 0 )
                {
                  v48 = v61;
                  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v61 + 12) + 72LL), 1u);
                  v49 = *((_QWORD *)v48 + 12);
                  LODWORD(v28) = IsVirtualizationDisabledForTarget(
                                   (__int64)v56,
                                   *((_DWORD *)a2 + 4),
                                   (bool *)&v61,
                                   (bool *)&v62);
                  if ( (int)v28 >= 0 )
                  {
                    if ( !(_BYTE)v61 || (v52 = 0, !(_BYTE)v62) )
                      v52 = 1;
                    LODWORD(v28) = CCD_TOPOLOGY::AddPathDescriptor(
                                     (void **)this,
                                     (const struct _LUID *)((char *)a2 + 4),
                                     *((_DWORD *)a2 + 3),
                                     *((_DWORD *)a2 + 4),
                                     v52,
                                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 5),
                                     (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 6),
                                     &v58,
                                     0);
                    if ( (int)v28 >= 0 )
                    {
                      v53 = v58;
                      if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                                  this,
                                  (const struct _LUID *)v58 + 1,
                                  *((_DWORD *)v58 + 5),
                                  &i) >= 0 )
                      {
                        CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, i);
                        IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
                      }
                      CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v53, a2, IsPrimaryClonePathByModality, v54, v56);
                    }
                  }
                  else
                  {
                    v51 = (_QWORD *)WdLogNewEntry5_WdError(v50);
                    v51[3] = *((unsigned int *)a2 + 4);
                    v51[4] = *((int *)a2 + 2);
                    v51[5] = *((unsigned int *)a2 + 1);
                    WdLogEvent5_WdError(v51);
                  }
                  if ( v49 )
                    ReferenceCounted::Release((ReferenceCounted *)(v49 + 64));
                }
              }
            }
            else
            {
              v38 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v38[3] = v28;
              v38[4] = *((int *)v26 + 68);
              v38[5] = *((unsigned int *)v26 + 67);
              v38[6] = this;
              v39 = *((_QWORD *)this + 8);
LABEL_41:
              v38[7] = v39;
              WdLogEvent5_WdError(v38);
            }
            auto_rc<DMMVIDPN>::reset(&v55, 0LL);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v59 + 40));
          }
          else
          {
            v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
            LODWORD(v28) = -1073741637;
            v34[3] = *((int *)a2 + 2);
            v34[4] = *v19;
            v34[5] = -1073741637LL;
            WdLogEvent5_WdWarning(v34);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v60);
      }
      else
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        v27[3] = this;
        v27[4] = *((_QWORD *)this + 8);
        v27[5] = *((int *)a2 + 2);
        v27[6] = *v19;
        WdLogEvent5_WdWarning(v27);
        LODWORD(v28) = -1073741810;
      }
      CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v56);
      return (unsigned int)v28;
    }
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    if ( CCD_TOPOLOGY::IsMatchingSource(v11, (const struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3)) )
      break;
    ++v7;
  }
  *((_DWORD *)a2 + 4) = v12[5];
  *((_DWORD *)a2 + 5) = v12[20];
  v14 = v12[21];
  v15 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) = v14;
  if ( !v15 )
    return v3;
  if ( (v15[18] & 0x180000) == 0x180000 && !v15[43] && !v15[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a2 + 4), v13);
  if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v7) )
  {
    CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v17, a2, 1, v16, 0LL);
    return v3;
  }
  return 3223192371LL;
}

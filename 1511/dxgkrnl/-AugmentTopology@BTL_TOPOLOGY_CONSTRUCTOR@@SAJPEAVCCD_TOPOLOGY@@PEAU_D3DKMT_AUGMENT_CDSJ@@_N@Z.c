/*
 * XREFs of ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00ADD28
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0060194 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00C9D94 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0009FC0 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC34 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     sub_1C005D37C @ 0x1C005D37C (sub_1C005D37C.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00A4768 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ADB8C (-FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUG.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00C933C (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0181AF4 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C0182038 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01820E4 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01842B4 (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct _D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v8; // ebx
  char IsPrimaryClonePathByModality; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int v15; // eax
  _DWORD *v16; // rcx
  struct DXGADAPTER *v17; // r8
  __int64 v18; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // r11
  unsigned int *v21; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGADAPTER *v28; // rbx
  _QWORD *v29; // rax
  struct DMMVIDPNTOPOLOGY *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  struct VIDPN_MGR *v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned int v43; // r12d
  __int64 v44; // rax
  unsigned __int16 v45; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v47; // r13
  int v48; // eax
  __int64 v49; // rcx
  VIDPN_MGR *v50; // rcx
  __int64 v51; // rbx
  struct DXGADAPTER *v52; // rdi
  __int64 v53; // rcx
  int v54; // r12d
  _QWORD *v55; // rax
  char v56; // cl
  struct DXGADAPTER *v57; // r8
  __int64 v58; // r9
  __int64 v59; // [rsp+40h] [rbp-39h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v60; // [rsp+48h] [rbp-31h] BYREF
  struct DXGADAPTER *v61; // [rsp+50h] [rbp-29h] BYREF
  __int64 v62; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v63[112]; // [rsp+60h] [rbp-19h] BYREF
  VIDPN_MGR *v64; // [rsp+E0h] [rbp+67h] BYREF
  struct DMMVIDPNTOPOLOGY *v65; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int i; // [rsp+F8h] [rbp+7Fh] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  *((_DWORD *)a2 + 5) = -2;
  if ( (v4 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  v8 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 8);
    if ( v10 )
      v11 = *(unsigned __int16 *)(v10 + 20);
    else
      v11 = 0LL;
    if ( v8 >= (unsigned __int16)v11 )
    {
      if ( !a3 )
        return 3223192377LL;
      v21 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal(v11);
      v23 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4));
      v61 = v23;
      v28 = v23;
      if ( v23 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v23, 0LL);
        LODWORD(v30) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63);
        if ( (int)v30 >= 0 )
        {
          v35 = *((_QWORD *)v28 + 248);
          if ( v35 )
          {
            v64 = *(VIDPN_MGR **)(v35 + 112);
            v37 = v64;
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v62, (__int64)v64);
            v59 = 0LL;
            v38 = VIDPN_MGR::CreateClientVidPn(v37, &v59);
            v30 = (struct DMMVIDPNTOPOLOGY *)v38;
            if ( v38 >= 0 )
            {
              v30 = (struct DMMVIDPNTOPOLOGY *)(v59 + 96);
              v65 = (struct DMMVIDPNTOPOLOGY *)(v59 + 96);
              if ( v59 == -96 )
              {
                v42 = (_QWORD *)WdLogNewEntry5_WdError(v39);
                v42[3] = v28;
                v42[4] = (int)HIDWORD(*(_QWORD *)((char *)v28 + 252));
                v42[5] = *((unsigned int *)v28 + 63);
                v42[6] = this;
                v42[7] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v42);
                LODWORD(v30) = -1073741823;
              }
              else
              {
                v43 = 0;
                for ( i = 0; ; i = v43 )
                {
                  v44 = *((_QWORD *)this + 8);
                  v45 = v44 ? *(_WORD *)(v44 + 20) : 0;
                  if ( v43 >= v45 )
                    break;
                  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v43);
                  v47 = PathDescriptor;
                  if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)v28 + 252) )
                  {
                    v48 = VIDPN_MGR::AddPathToVidPnTopology(
                            v64,
                            v30,
                            *((_DWORD *)PathDescriptor + 4),
                            *((_DWORD *)PathDescriptor + 5),
                            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                            v43,
                            0,
                            D3DKMDT_MCC_IGNORE);
                    v30 = (struct DMMVIDPNTOPOLOGY *)v48;
                    if ( v48 < 0 )
                    {
                      v40 = (_QWORD *)WdLogNewEntry5_WdError(v49);
                      v40[3] = v30;
                      v40[4] = *((int *)v47 + 3);
                      v40[5] = *((unsigned int *)v47 + 2);
                      v40[6] = *((unsigned int *)v47 + 4);
                      v41 = *((unsigned int *)v47 + 5);
                      goto LABEL_40;
                    }
                    v30 = v65;
                  }
                  IsPrimaryClonePathByModality = 1;
                  ++v43;
                }
                LODWORD(v30) = BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v30, a2);
                if ( (int)v30 >= 0 )
                {
                  v50 = v64;
                  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v64 + 12) + 72LL), 1u);
                  v51 = *((_QWORD *)v50 + 12);
                  DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v51, *((_DWORD *)a2 + 4));
                  v52 = v61;
                  v54 = IsVirtualizationDisabledForTarget(v61, *((_DWORD *)a2 + 4), (bool *)&v64, (bool *)&v65);
                  if ( v54 >= 0 )
                  {
                    if ( !(_BYTE)v64 || (v56 = 0, !(_BYTE)v65) )
                      v56 = 1;
                    v54 = CCD_TOPOLOGY::AddPathDescriptor(
                            (void **)this,
                            (const struct _LUID *)((char *)a2 + 4),
                            *((_DWORD *)a2 + 3),
                            *((_DWORD *)a2 + 4),
                            v56,
                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 5),
                            &v60,
                            0);
                    if ( v54 >= 0 )
                    {
                      if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                                  this,
                                  (const struct _LUID *)v60 + 1,
                                  *((_DWORD *)v60 + 5),
                                  &i) >= 0 )
                      {
                        CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, i);
                        IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
                      }
                      LOBYTE(v57) = IsPrimaryClonePathByModality;
                      CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v60, a2, v57, v58, v52);
                    }
                  }
                  else
                  {
                    v55 = (_QWORD *)WdLogNewEntry5_WdError(v53);
                    v55[3] = *((unsigned int *)a2 + 4);
                    v55[4] = *((int *)a2 + 2);
                    v55[5] = *((unsigned int *)a2 + 1);
                    WdLogEvent5_WdError(v55);
                  }
                  LODWORD(v30) = v54;
                  if ( v51 )
                    ReferenceCounted::Release((ReferenceCounted *)(v51 + 64));
                }
              }
            }
            else
            {
              v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
              v40[3] = v30;
              v40[4] = (int)HIDWORD(*(_QWORD *)((char *)v28 + 252));
              v40[5] = *((unsigned int *)v28 + 63);
              v40[6] = this;
              v41 = *((_QWORD *)this + 8);
LABEL_40:
              v40[7] = v41;
              WdLogEvent5_WdError(v40);
            }
            auto_rc<DMMVIDPN>::reset(&v59, 0LL);
            DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v62 + 40));
          }
          else
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
            LODWORD(v30) = -1073741637;
            v36[3] = *((int *)a2 + 2);
            v36[4] = *v21;
            v36[5] = -1073741637LL;
            WdLogEvent5_WdWarning(v36);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
      }
      else
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        v29[3] = this;
        v29[4] = *((_QWORD *)this + 8);
        v29[5] = *((int *)a2 + 2);
        v29[6] = *v21;
        WdLogEvent5_WdWarning(v29);
        LODWORD(v30) = -1073741810;
      }
      sub_1C005D37C(&v61);
      return (unsigned int)v30;
    }
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, v8);
    if ( CCD_TOPOLOGY::IsMatchingSource(v12, (const struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3)) )
      break;
    ++v8;
  }
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v13 + 20);
  v15 = *(_DWORD *)(v13 + 80);
  v16 = (_DWORD *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 5) = v15;
  if ( !v16 )
    return v3;
  if ( (v16[18] & 0x180000) == 0x180000 && !v16[43] && !v16[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a2 + 4), v14);
  if ( (unsigned __int8)CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v8) )
  {
    LOBYTE(v17) = 1;
    CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v19, a2, v17, v18, 0LL);
    return v3;
  }
  return 3223192371LL;
}

/*
 * XREFs of ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8
 * Callers:
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0062F18 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4510 (-ApplyCdsjToPathModality@CDS_JOURNAL@CCD_BTL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0001188 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000136C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C005EBEC (-FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUG.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0065FAC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO @ 0x1C009C390 (_BTL_TOPOLOGY_CONSTRUCTOR--AugmentTopology_--_24_--_AUTO--__AUTO.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C00B3F38 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C017D67C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C017DBC0 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C017DC6C (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C017FDEC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct _D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v8; // ebx
  char IsPrimaryClonePathByModality; // r13
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int v15; // eax
  _DWORD *v16; // rcx
  bool v17; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r11
  unsigned int *v20; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGADAPTER *v27; // rbx
  _QWORD *v28; // rax
  struct DMMVIDPNTOPOLOGY *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  struct VIDPN_MGR *v36; // r15
  int ClientVidPn; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  unsigned int v42; // r12d
  __int64 v43; // rax
  unsigned __int16 v44; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v46; // r13
  int v47; // eax
  __int64 v48; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v49; // rcx
  __int64 v50; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  char IsTargetSupportVirtualMode; // al
  int v53; // r12d
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // r15
  bool v55; // r9
  struct DXGADAPTER *v56; // [rsp+40h] [rbp-29h] BYREF
  struct DMMVIDPNTOPOLOGY *v57; // [rsp+48h] [rbp-21h]
  __int64 v58; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v59[104]; // [rsp+58h] [rbp-11h] BYREF
  unsigned int i; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v61; // [rsp+D8h] [rbp+6Fh] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v62; // [rsp+E8h] [rbp+7Fh] BYREF

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
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v8 >= v11 )
    {
      if ( !a3 )
        return 3223192377LL;
      v20 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal();
      v22 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4));
      v56 = v22;
      v27 = v22;
      if ( v22 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v22, 0LL);
        LODWORD(v29) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59);
        if ( (int)v29 >= 0 )
        {
          v34 = *((_QWORD *)v27 + 247);
          if ( v34 )
          {
            v62 = *(struct _D3DKMT_PATHMODALITY_DESCRIPTOR **)(v34 + 88);
            v36 = v62;
            EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v58, (__int64)v62);
            v61 = 0LL;
            ClientVidPn = VIDPN_MGR::CreateClientVidPn(v36);
            v29 = (struct DMMVIDPNTOPOLOGY *)ClientVidPn;
            if ( ClientVidPn >= 0 )
            {
              v29 = (struct DMMVIDPNTOPOLOGY *)(v61 + 96);
              v57 = (struct DMMVIDPNTOPOLOGY *)(v61 + 96);
              if ( v61 == -96 )
              {
                v41 = (_QWORD *)WdLogNewEntry5_WdError(v38);
                v41[3] = v27;
                v41[4] = (int)HIDWORD(*(_QWORD *)((char *)v27 + 252));
                v41[5] = *((unsigned int *)v27 + 63);
                v41[6] = this;
                v41[7] = *((_QWORD *)this + 8);
                WdLogEvent5_WdError(v41);
                LODWORD(v29) = -1073741823;
              }
              else
              {
                v42 = 0;
                for ( i = 0; ; i = v42 )
                {
                  v43 = *((_QWORD *)this + 8);
                  v44 = v43 ? *(_WORD *)(v43 + 20) : 0;
                  if ( v42 >= v44 )
                    break;
                  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v42);
                  v46 = PathDescriptor;
                  if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)v27 + 252) )
                  {
                    v47 = VIDPN_MGR::AddPathToVidPnTopology(
                            v62,
                            v29,
                            *((_DWORD *)PathDescriptor + 4),
                            *((_DWORD *)PathDescriptor + 5),
                            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                            v42,
                            0,
                            D3DKMDT_MCC_IGNORE);
                    v29 = (struct DMMVIDPNTOPOLOGY *)v47;
                    if ( v47 < 0 )
                    {
                      v39 = (_QWORD *)WdLogNewEntry5_WdError(v48);
                      v39[3] = v29;
                      v39[4] = *((int *)v46 + 3);
                      v39[5] = *((unsigned int *)v46 + 2);
                      v39[6] = *((unsigned int *)v46 + 4);
                      v40 = *((unsigned int *)v46 + 5);
                      goto LABEL_40;
                    }
                    v29 = v57;
                  }
                  IsPrimaryClonePathByModality = 1;
                  ++v42;
                }
                LODWORD(v29) = BTL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v29, a2);
                if ( (int)v29 >= 0 )
                {
                  v49 = v62;
                  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v62 + 12) + 72LL), 1u);
                  v50 = *((_QWORD *)v49 + 12);
                  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                                 (DMMVIDEOPRESENTTARGETSET *)v50,
                                 *((_DWORD *)a2 + 4));
                  IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(TargetById);
                  v53 = CCD_TOPOLOGY::AddPathDescriptor(
                          this,
                          (const struct _LUID *)((char *)a2 + 4),
                          *((_DWORD *)a2 + 3),
                          *((_DWORD *)a2 + 4),
                          IsTargetSupportVirtualMode,
                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 5),
                          &v62);
                  if ( v53 >= 0 )
                  {
                    v54 = v62;
                    if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                                this,
                                (const struct _LUID *)v62 + 1,
                                *((_DWORD *)v62 + 5),
                                &i) >= 0 )
                    {
                      CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, i);
                      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
                    }
                    CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v54, a2, IsPrimaryClonePathByModality, v55, v56);
                  }
                  LODWORD(v29) = v53;
                  if ( v50 )
                    ReferenceCounted::Release((ReferenceCounted *)(v50 + 64));
                }
              }
            }
            else
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
              v39[3] = v29;
              v39[4] = (int)HIDWORD(*(_QWORD *)((char *)v27 + 252));
              v39[5] = *((unsigned int *)v27 + 63);
              v39[6] = this;
              v40 = *((_QWORD *)this + 8);
LABEL_40:
              v39[7] = v40;
              WdLogEvent5_WdError(v39);
            }
            auto_rc<DMMVIDPN>::reset(&v61, 0LL);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v58 + 40));
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
            LODWORD(v29) = -1073741637;
            v35[3] = *((int *)a2 + 2);
            v35[4] = *v20;
            v35[5] = -1073741637LL;
            WdLogEvent5_WdWarning(v35);
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      }
      else
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
        v28[3] = this;
        v28[4] = *((_QWORD *)this + 8);
        v28[5] = *((int *)a2 + 2);
        v28[6] = *v20;
        WdLogEvent5_WdWarning(v28);
        LODWORD(v29) = -1073741810;
      }
      BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO(&v56);
      return (unsigned int)v29;
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
    CCD_BTL::CDS_JOURNAL::FillPathDescriptor(v18, a2, 1, v17, 0LL);
    return v3;
  }
  return 3223192371LL;
}

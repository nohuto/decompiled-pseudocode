/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C01AE170
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D5604 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004864 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004898 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0006E1C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C008CB74 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO @ 0x1C00B92F4 (_CCD_BTL--CDS_JOURNAL--_ExtendTopology_--_2_--_AUTO--__AUTO.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D58F0 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01AAEBC (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01AB204 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::_ExtendTopology(
        struct CCD_TOPOLOGY *this,
        const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // r15
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  struct VIDPN_MGR *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  struct DMMVIDPNTOPOLOGY *v25; // rdi
  _QWORD *v26; // rax
  unsigned int v27; // r12d
  char IsPrimaryClonePathByModality; // r13
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // r15
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r15d
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // cl
  int v43; // eax
  __int64 v44; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v45; // r15
  __int64 v46; // r8
  __int64 v48; // [rsp+50h] [rbp-49h] BYREF
  DXGADAPTER *v49; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v51[128]; // [rsp+70h] [rbp-29h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // [rsp+108h] [rbp+6Fh] BYREF
  struct DMMVIDPNTOPOLOGY *v53; // [rsp+110h] [rbp+77h] BYREF
  __int64 v54; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v50);
  v49 = v6;
  v11 = (__int64)v6;
  if ( !v6 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    v12[3] = this;
    v12[4] = *((_QWORD *)this + 8);
    v12[5] = *((int *)a2 + 6);
    v12[6] = v3->LowPart;
    WdLogEvent5_WdWarning(v12);
    LODWORD(v13) = -1073741810;
    goto LABEL_47;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v51, v6, 0LL);
  LODWORD(v13) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v51);
  if ( (int)v13 < 0 )
    goto LABEL_46;
  v18 = *(_QWORD *)(v11 + 2128);
  if ( !v18 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    LODWORD(v13) = -1073741637;
    v19[3] = *((int *)a2 + 6);
    v19[4] = v3->LowPart;
    v19[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_46;
  }
  v52 = *(struct _D3DKMT_PATHMODALITY_DESCRIPTOR **)(v18 + 88);
  v20 = v52;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v48, (__int64)v52);
  v54 = 0LL;
  v21 = VIDPN_MGR::CreateClientVidPn(v20, &v54);
  v13 = v21;
  if ( v21 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v23[3] = v13;
    v23[4] = v11;
    v23[5] = *(int *)(v11 + 272);
    v23[6] = *(unsigned int *)(v11 + 268);
    v24 = *((_QWORD *)this + 8);
    goto LABEL_40;
  }
  v25 = (struct DMMVIDPNTOPOLOGY *)(v54 + 96);
  v53 = (struct DMMVIDPNTOPOLOGY *)(v54 + 96);
  if ( v54 == -96 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v26[3] = v11;
    v26[4] = *(int *)(v11 + 272);
    v26[5] = *(unsigned int *)(v11 + 268);
    v26[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v26);
    LODWORD(v13) = -1073741823;
    goto LABEL_45;
  }
  v27 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v29 = *((_QWORD *)this + 8);
    v30 = v29 ? *(_WORD *)(v29 + 20) : 0;
    if ( v27 >= v30 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v27);
    v32 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 2) == *(_DWORD *)(v11 + 268)
      && *((_DWORD *)PathDescriptor + 3) == *(_DWORD *)(v11 + 272) )
    {
      v33 = VIDPN_MGR::AddPathToVidPnTopology(
              v52,
              v25,
              *((_DWORD *)PathDescriptor + 4),
              *((_DWORD *)PathDescriptor + 5),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v27,
              0,
              D3DKMDT_MCC_ENFORCE);
      v13 = v33;
      if ( v33 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v34);
        v23[3] = v13;
        v23[4] = *((int *)v32 + 3);
        v23[5] = *((unsigned int *)v32 + 2);
        v23[6] = *((unsigned int *)v32 + 4);
        v24 = *((unsigned int *)v32 + 5);
LABEL_40:
        v23[7] = v24;
LABEL_41:
        WdLogEvent5_WdError(v23);
        goto LABEL_45;
      }
      v25 = v53;
    }
    ++v27;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v25, *((_DWORD *)a2 + 8)) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35);
    WdLogEvent5_WdAssertion(v36);
  }
  v37 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v11 + 2128) + 80LL) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v25, v37) )
  {
LABEL_27:
    if ( ++v37 >= *(_DWORD *)(*(_QWORD *)(v11 + 2128) + 80LL) )
      goto LABEL_28;
  }
  v38 = VIDPN_MGR::AddPathToVidPnTopology(
          v52,
          v25,
          v37,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v13 = v38;
  if ( v38 == -1071774975 )
  {
    v25 = v53;
    goto LABEL_27;
  }
  if ( v38 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v23[3] = v13;
    v23[4] = *(int *)(v11 + 272);
    v40 = *(unsigned int *)(v11 + 268);
    goto LABEL_39;
  }
LABEL_28:
  if ( v37 >= *(_DWORD *)(*(_QWORD *)(v11 + 2128) + 80LL) )
  {
    LODWORD(v13) = -1071774975;
    goto LABEL_45;
  }
  LODWORD(v13) = IsVirtualizationDisabledForTarget(v11, *((_DWORD *)a2 + 8), (bool *)&v52, (bool *)&v53);
  if ( (int)v13 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v23[3] = *((unsigned int *)a2 + 8);
    v23[4] = v11;
    goto LABEL_41;
  }
  if ( !(_BYTE)v52 || (v42 = 0, !(_BYTE)v53) )
    v42 = 1;
  v43 = CCD_TOPOLOGY::AddPathDescriptor(
          (void **)this,
          (const struct _LUID *)((char *)a2 + 20),
          v37,
          *((_DWORD *)a2 + 8),
          v42,
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 9),
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 10),
          &v52,
          0);
  v13 = v43;
  if ( v43 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v44);
    v23[3] = v13;
    v23[4] = *((int *)a2 + 6);
    v40 = *((unsigned int *)a2 + 5);
LABEL_39:
    v23[5] = v40;
    v23[6] = v37;
    v24 = *((unsigned int *)a2 + 8);
    goto LABEL_40;
  }
  v45 = v52;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v52 + 1,
              *((_DWORD *)v52 + 5),
              (unsigned int *)&v52) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((const struct _D3DKMT_GETPATHSMODALITY **)this, (unsigned int)v52);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v52);
  }
  LOBYTE(v46) = IsPrimaryClonePathByModality;
  CCD_BTL::CDS_JOURNAL::_FillPathDescriptor(v45, a2, v46, 0LL, (struct DXGADAPTER *)v11);
LABEL_45:
  auto_rc<DMMVIDPN>::reset(&v54, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40));
LABEL_46:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v51);
LABEL_47:
  CCD_BTL::CDS_JOURNAL::_ExtendTopology_::_2_::_AUTO::__AUTO(&v49);
  return (unsigned int)v13;
}

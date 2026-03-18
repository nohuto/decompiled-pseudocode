/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C018056C
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C005E8B4 (-_CommitEntry@CDS_JOURNAL@CCD_BTL@@CAJAEBU_ENTRY@12@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000136C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043C4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00043F8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@_N2PEAVDXGADAPTER@@@Z @ 0x1C00611E8 (-_FillPathDescriptor@CDS_JOURNAL@CCD_BTL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@12@.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0065FAC (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@PEAPEAU_.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO @ 0x1C009C390 (_BTL_TOPOLOGY_CONSTRUCTOR--AugmentTopology_--_24_--_AUTO--__AUTO.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C017D67C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C017DBC0 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::_ExtendTopology(
        struct CCD_TOPOLOGY *this,
        const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LUID *v5; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  struct VIDPN_MGR *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rcx
  struct DMMVIDPNTOPOLOGY *v31; // r13
  _QWORD *v32; // rax
  unsigned int i; // r12d
  __int64 v34; // rax
  unsigned __int16 v35; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // r15
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned int v45; // r15d
  int v46; // eax
  __int64 v47; // rcx
  VIDPN_MGR *v48; // rcx
  __int64 v49; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  char IsTargetSupportVirtualMode; // al
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r12
  _QWORD *v58; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  char IsPrimaryClonePathByModality; // r11
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v64; // [rsp+40h] [rbp-29h] BYREF
  __int64 v65; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v66[112]; // [rsp+50h] [rbp-19h] BYREF
  VIDPN_MGR *v67; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v68; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGADAPTER *v69; // [rsp+E8h] [rbp+7Fh] BYREF

  v5 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v5);
  v69 = v8;
  v13 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v8, 0LL);
    LODWORD(v15) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
    if ( (int)v15 < 0 )
    {
LABEL_40:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
      goto LABEL_41;
    }
    v20 = *((_QWORD *)v13 + 247);
    if ( !v20 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      LODWORD(v15) = -1073741637;
      v21[3] = *((int *)a2 + 6);
      v21[4] = v5->LowPart;
      v21[5] = -1073741637LL;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_40;
    }
    v67 = *(VIDPN_MGR **)(v20 + 88);
    v22 = v67;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, (__int64)v67);
    v68 = 0LL;
    v25 = VIDPN_MGR::CreateClientVidPn(v22, &v68, v23, v24);
    v15 = v25;
    if ( v25 >= 0 )
    {
      v31 = (struct DMMVIDPNTOPOLOGY *)(v68 + 96);
      if ( v68 == -96 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v32[3] = v13;
        v32[4] = (int)HIDWORD(*(_QWORD *)((char *)v13 + 252));
        v32[5] = *((unsigned int *)v13 + 63);
        v32[6] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v32);
        LODWORD(v15) = -1073741823;
LABEL_39:
        auto_rc<DMMVIDPN>::reset(&v68, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
        goto LABEL_40;
      }
      for ( i = 0; ; ++i )
      {
        v34 = *((_QWORD *)this + 8);
        v35 = v34 ? *(_WORD *)(v34 + 20) : 0;
        if ( i >= v35 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, v27, v28);
        v37 = PathDescriptor;
        if ( *((_QWORD *)PathDescriptor + 1) == *(_QWORD *)((char *)v13 + 252) )
        {
          v38 = VIDPN_MGR::AddPathToVidPnTopology(
                  v67,
                  v31,
                  *((unsigned int *)PathDescriptor + 4),
                  *((unsigned int *)PathDescriptor + 5),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  i,
                  0,
                  D3DKMDT_MCC_ENFORCE);
          v15 = v38;
          if ( v38 < 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v29[3] = v15;
            v29[4] = *((int *)v37 + 3);
            v29[5] = *((unsigned int *)v37 + 2);
            v29[6] = *((unsigned int *)v37 + 4);
            v30 = *((unsigned int *)v37 + 5);
            goto LABEL_28;
          }
        }
      }
      if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v31, *((_DWORD *)a2 + 8)) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
        WdLogEvent5_WdAssertion(v44);
      }
      v45 = 0;
      if ( !*(_DWORD *)(*((_QWORD *)v13 + 247) + 80LL) )
        goto LABEL_29;
      while ( 1 )
      {
        if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v31, v45) )
        {
          v46 = VIDPN_MGR::AddPathToVidPnTopology(
                  v67,
                  v31,
                  v45,
                  *((unsigned int *)a2 + 8),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_ENFORCE);
          v15 = v46;
          if ( v46 != -1071774975 )
            break;
        }
        if ( ++v45 >= *(_DWORD *)(*((_QWORD *)v13 + 247) + 80LL) )
          goto LABEL_29;
      }
      if ( v46 >= 0 )
      {
LABEL_29:
        if ( v45 < *(_DWORD *)(*((_QWORD *)v13 + 247) + 80LL) )
        {
          v48 = v67;
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v67 + 12) + 72LL), 1u);
          v49 = *((_QWORD *)v48 + 12);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v49, *((_DWORD *)a2 + 8));
          IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(TargetById, v51, v52, v53);
          v55 = CCD_TOPOLOGY::AddPathDescriptor(
                  (void **)this,
                  (const struct _LUID *)((char *)a2 + 20),
                  v45,
                  *((_DWORD *)a2 + 8),
                  IsTargetSupportVirtualMode,
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 9),
                  &v64);
          v57 = v55;
          if ( v55 >= 0 )
          {
            v59 = v64;
            if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                        this,
                        (const struct _LUID *)v64 + 1,
                        *((unsigned int *)v64 + 5),
                        (unsigned int *)&v67) < 0 )
            {
              IsPrimaryClonePathByModality = 1;
            }
            else
            {
              CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(
                (const struct _D3DKMT_GETPATHSMODALITY **)this,
                (unsigned int)v67,
                v60,
                v61);
              IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v67);
            }
            LOBYTE(v60) = IsPrimaryClonePathByModality;
            CCD_BTL::CDS_JOURNAL::_FillPathDescriptor(v59, a2, v60, 0LL, v69);
          }
          else
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v56);
            v58[3] = v57;
            v58[4] = *((int *)a2 + 6);
            v58[5] = *((unsigned int *)a2 + 5);
            v58[6] = v45;
            v58[7] = *((unsigned int *)a2 + 8);
            WdLogEvent5_WdError(v58);
          }
          LODWORD(v15) = v57;
          if ( v49 )
            ReferenceCounted::Release((ReferenceCounted *)(v49 + 64));
        }
        else
        {
          LODWORD(v15) = -1071774975;
        }
        goto LABEL_39;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v29[3] = v15;
      v29[4] = (int)HIDWORD(*(_QWORD *)((char *)v13 + 252));
      v29[5] = *((unsigned int *)v13 + 63);
      v29[6] = v45;
      v30 = *((unsigned int *)a2 + 8);
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v29[3] = v15;
      v29[4] = v13;
      v29[5] = (int)HIDWORD(*(_QWORD *)((char *)v13 + 252));
      v29[6] = *((unsigned int *)v13 + 63);
      v30 = *((_QWORD *)this + 8);
    }
LABEL_28:
    v29[7] = v30;
    WdLogEvent5_WdError(v29);
    goto LABEL_39;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  v14[3] = this;
  v14[4] = *((_QWORD *)this + 8);
  v14[5] = *((int *)a2 + 6);
  v14[6] = v5->LowPart;
  WdLogEvent5_WdWarning(v14);
  LODWORD(v15) = -1073741810;
LABEL_41:
  BTL_TOPOLOGY_CONSTRUCTOR::AugmentTopology_::_24_::_AUTO::__AUTO(&v69);
  return (unsigned int)v15;
}

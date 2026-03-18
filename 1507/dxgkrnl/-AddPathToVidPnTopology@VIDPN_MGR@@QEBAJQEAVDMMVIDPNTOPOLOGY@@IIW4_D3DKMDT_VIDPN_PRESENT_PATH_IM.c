/*
 * XREFs of ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8
 * Callers:
 *     ?AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C005E9F8 (-AugmentTopology@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z.c)
 *     DmmCanAddPresentPathToClientVidPn @ 0x1C0061084 (DmmCanAddPresentPathToClientVidPn.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008E76C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_ @ 0x1C00B10E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GE@Z @ 0x1C0174D7C (-_AddPathToFirstAvailableTarget@VIDPN_MGR@@AEBAJPEAVDMMVIDPNTOPOLOGY@@IW4_D3DKMDT_VIDEO_PRESENT_.c)
 *     ?AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0178410 (-AddPath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_V.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C017F2C4 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C017F830 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C017FDEC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 *     ?_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z @ 0x1C018056C (-_ExtendTopology@CDS_JOURNAL@CCD_BTL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@12@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0005DCC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C008A208 (-GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTA.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 */

__int64 __fastcall VIDPN_MGR::AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a5,
        unsigned __int16 a6,
        unsigned __int8 a7,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a8)
{
  __int64 v8; // rsi
  __int64 v10; // rbp
  __int64 Container; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  struct DMMVIDPNSOURCE *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DMMVIDPNTARGET *v19; // r14
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v20; // ebx
  int LowestAvailImportanceOrdinal; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  DMMVIDPNPRESENTPATH *v27; // rax
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  struct DMMVIDPNPRESENTPATH *v47[2]; // [rsp+30h] [rbp-38h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v48; // [rsp+78h] [rbp+10h] BYREF

  v8 = (unsigned int)a4;
  v10 = (unsigned int)a3;
  if ( !a2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v41);
  }
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v47[0] = 0LL;
  v15 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v10);
  if ( v15 )
  {
    v19 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 312), v8);
    if ( v19 )
    {
      v48 = D3DKMDT_VPPI_UNINITIALIZED;
      v20 = a5;
      if ( a5 == 255 )
      {
        LowestAvailImportanceOrdinal = DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(a2, &v48, v17, v18);
        v26 = LowestAvailImportanceOrdinal;
        if ( LowestAvailImportanceOrdinal < 0 )
        {
          v44 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
          *(_QWORD *)(v44 + 24) = a2;
          *(_QWORD *)(v44 + 32) = v26;
          goto LABEL_15;
        }
        v20 = v48;
      }
      v27 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
      if ( v27 )
        v27 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(v27, v15, v19, v20, a6);
      auto_ptr<DMMVIDPNPRESENTPATH>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))v47,
        (__int64 (__fastcall ***)(_QWORD, __int64))v27);
      v29 = v47[0];
      if ( v47[0] )
      {
        if ( !(**((unsigned __int8 (__fastcall ***)(char *))v47[0] + 7))((char *)v47[0] + 56) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
          WdLogEvent5_WdAssertion(v46);
        }
        v34 = VIDPN_MGR::_AddPathToVidPnTopology(this, a2, v29, a8, a7);
        v26 = v34;
        if ( v34 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
          v40[3] = v10;
          v40[4] = v8;
          v40[5] = a2;
          v40[6] = v26;
        }
        else
        {
          v47[0] = 0LL;
          LODWORD(v26) = 0;
        }
      }
      else
      {
        v45 = WdLogNewEntry5_WdLowResource(v28);
        WdLogEvent5_WdLowResource(v45);
        LODWORD(v26) = -1073741801;
      }
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v43 + 24) = v8;
      *(_QWORD *)(v43 + 32) = a2;
      WdLogEvent5_WdError(v43);
      LODWORD(v26) = -1071774971;
    }
  }
  else
  {
    v42 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v42 + 24) = v10;
    *(_QWORD *)(v42 + 32) = a2;
    WdLogEvent5_WdError(v42);
    LODWORD(v26) = -1071774972;
  }
LABEL_15:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))v47);
  return (unsigned int)v26;
}

/*
 * XREFs of ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00AE68C (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 *     ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00B09D0 (-GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CCF0C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z @ 0x1C0172400 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAVDXGDEVICE@@QEAJ@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C017C020 (-GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IP.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 Container; // rax
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  char *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    if ( IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3) )
    {
      v10 = 0LL;
      v11 = (char *)this + 24;
      if ( *(char **)v11 == v11 )
        goto LABEL_13;
      v11 = (char *)(*(_QWORD *)v11 - 8LL);
      if ( !v11 )
        goto LABEL_13;
      v8 = (char *)this + 24;
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == (_DWORD)v3 )
          ++v10;
        v12 = (char *)*((_QWORD *)v11 + 1);
        if ( v12 == v8 )
          v11 = 0LL;
        else
          v11 = v12 - 8;
      }
      while ( v11 );
      if ( v10 )
      {
        *a3 = v10;
        return 0LL;
      }
      else
      {
LABEL_13:
        v14 = WdLogNewEntry5_WdTrace(v11, v10, v8, v9);
        *(_QWORD *)(v14 + 24) = v3;
        *(_QWORD *)(v14 + 32) = this;
        return 3223192377LL;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v16 + 24) = v3;
      WdLogEvent5_WdError(v16);
      return 3223192324LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = v3;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}

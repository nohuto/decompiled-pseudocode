/*
 * XREFs of ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C008E7E8 (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0092860 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00C2644 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00C3450 (-EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00C4D34 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01769E4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0178F54 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C017A490 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C017AB44 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C017B414 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C017B8A0 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017E978 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C017EEC4 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C017FB20 (-EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01802D0 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 result; // rax
  DMMVIDPNTOPOLOGY *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = -1;
  v8 = (_QWORD *)((char *)this + 24);
  v9 = 0LL;
  if ( (_QWORD *)*v8 != v8 )
  {
    v8 = (_QWORD *)(*v8 - 8LL);
    while ( v8 )
    {
      if ( *(_DWORD *)(v8[11] + 24LL) == (_DWORD)v4 )
      {
        if ( v9 == a3 )
        {
          result = 0LL;
          *a4 = *(_DWORD *)(v8[12] + 24LL);
          return result;
        }
        ++v9;
      }
      v11 = (DMMVIDPNTOPOLOGY *)v8[1];
      if ( v11 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v8 = 0LL;
      else
        v8 = (_QWORD *)((char *)v11 - 8);
    }
  }
  v12 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v12 == v12 || *v12 == 8LL )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v9, a3, a4) + 24) = this;
  }
  else
  {
    if ( v9 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v9, a3, a4);
      v13[3] = this;
      v13[4] = v4;
      v13[5] = a3;
      return 1075708748LL;
    }
    v14 = WdLogNewEntry5_WdTrace(v8, 0LL, a3, a4);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = this;
  }
  return 3223192377LL;
}

/*
 * XREFs of ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005F000 (-CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C005FDB4 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 *     ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00B0380 (-EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D002C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C0172164 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C0175EF8 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01765AC (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C0176E7C (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C0177438 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C017AA64 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C017BDE0 (-EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  DMMVIDPNTOPOLOGY *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = (unsigned int)a2;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
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
      v10 = (DMMVIDPNTOPOLOGY *)v8[1];
      if ( v10 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v8 = 0LL;
      else
        v8 = (_QWORD *)((char *)v10 - 8);
    }
  }
  v11 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v11 == v11 || *v11 == 8LL )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v9, a3, a4) + 24) = this;
  }
  else
  {
    if ( v9 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v9, a3, a4);
      v12[3] = this;
      v12[4] = v4;
      v12[5] = a3;
      return 1075708748LL;
    }
    v14 = WdLogNewEntry5_WdTrace(v8, 0LL, a3, a4);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = this;
  }
  return 3223192377LL;
}

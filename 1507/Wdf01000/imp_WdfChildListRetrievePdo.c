/*
 * XREFs of imp_WdfChildListRetrievePdo @ 0x1C0066200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_Ddd @ 0x1C0065ABC (WPP_IFR_SF_Ddd.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C006712C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo,
        unsigned __int16 a4)
{
  WDFCHILDLIST__ *_a1; // rbp
  FxChildList *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rax
  int _a2; // edx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  int m_AddressDescriptionSize; // eax
  unsigned __int64 DeviceFromId; // rax
  unsigned __int64 v14; // rdi
  const _GUID *Offset; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxChildList *pList; // [rsp+78h] [rbp+10h] BYREF

  _a1 = (WDFCHILDLIST__ *)DeviceList;
  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v6 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DeviceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DeviceList = LOWORD(v6->__vftable);
    v6 = (FxChildList *)((char *)v6 - DeviceList);
  }
  if ( v6->m_Type == 4137 )
  {
    pList = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pList, _a1, 0x1029u, DeviceList);
    v6 = pList;
  }
  m_Globals = v6->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v6 = pList;
  }
  if ( !RetrieveInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( RetrieveInfo->Size != 40 )
  {
    WPP_IFR_SF_Ddd(m_Globals, DeviceList, (unsigned int)RetrieveInfo, a4, Offset, RetrieveInfo->Size);
    return 0LL;
  }
  IdentificationDescription = RetrieveInfo->IdentificationDescription;
  if ( !IdentificationDescription )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x2Eu, WPP_FxChildListAPI_cpp_Traceguids, -1073741811);
    return 0LL;
  }
  _a2 = v6->m_IdentificationDescriptionSize;
  if ( _a2 != IdentificationDescription->IdentificationDescriptionSize )
  {
    WPP_IFR_SF_dd(
      m_Globals,
      2u,
      0xCu,
      0x2Fu,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      _a2);
    return 0LL;
  }
  AddressDescription = RetrieveInfo->AddressDescription;
  if ( AddressDescription )
  {
    m_AddressDescriptionSize = v6->m_AddressDescriptionSize;
    if ( !m_AddressDescriptionSize )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x30u, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
      return 0LL;
    }
    if ( m_AddressDescriptionSize != AddressDescription->AddressDescriptionSize )
    {
      WPP_IFR_SF_dd(
        m_Globals,
        2u,
        0xCu,
        0x31u,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescription->AddressDescriptionSize,
        m_AddressDescriptionSize);
      return 0LL;
    }
  }
  RetrieveInfo->Status = WdfChildListRetrieveDeviceUndefined;
  DeviceFromId = (unsigned __int64)FxChildList::GetDeviceFromId(v6, RetrieveInfo);
  if ( DeviceFromId && *(_WORD *)(DeviceFromId + 10) )
    v14 = DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v14 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x32u, WPP_FxChildListAPI_cpp_Traceguids, _a1, v14, RetrieveInfo->Status);
  return (WDFDEVICE__ *)v14;
}

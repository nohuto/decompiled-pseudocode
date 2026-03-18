/*
 * XREFs of imp_WdfChildListRetrievePdo @ 0x1C006C590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_Ddd @ 0x1C006BFC0 (WPP_IFR_SF_Ddd.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C006D6DC (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

WDFDEVICE__ *__fastcall imp_WdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  FxChildList *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rax
  int _a2; // edx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  int m_AddressDescriptionSize; // eax
  unsigned __int64 DeviceFromId; // rax
  unsigned __int64 v16; // rdi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxChildList *pList; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v8 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v8 = pList;
  }
  if ( !RetrieveInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( RetrieveInfo->Size != 40 )
  {
    WPP_IFR_SF_Ddd(m_Globals, v5, v6, v7, traceGuid, RetrieveInfo->Size);
    return 0LL;
  }
  IdentificationDescription = RetrieveInfo->IdentificationDescription;
  if ( !IdentificationDescription )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x2Eu, WPP_FxChildListAPI_cpp_Traceguids, -1073741811);
    return 0LL;
  }
  _a2 = v8->m_IdentificationDescriptionSize;
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
    m_AddressDescriptionSize = v8->m_AddressDescriptionSize;
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
  DeviceFromId = (unsigned __int64)FxChildList::GetDeviceFromId(v8, RetrieveInfo);
  if ( DeviceFromId && *(_WORD *)(DeviceFromId + 10) )
    v16 = DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v16 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x32u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v16, RetrieveInfo->Status);
  return (WDFDEVICE__ *)v16;
}

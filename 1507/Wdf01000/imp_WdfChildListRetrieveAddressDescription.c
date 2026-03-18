/*
 * XREFs of imp_WdfChildListRetrieveAddressDescription @ 0x1C0066050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C006702C (-GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  WDFCHILDLIST__ *_a1; // rdi
  FxChildList *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int _a3; // eax
  unsigned int IdentificationDescriptionSize; // edx
  unsigned __int16 v11; // r9
  int v13; // eax
  unsigned int v14; // esi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxChildList *pList; // [rsp+78h] [rbp+10h] BYREF

  _a1 = (WDFCHILDLIST__ *)DeviceList;
  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v7 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DeviceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DeviceList = LOWORD(v7->__vftable);
    v7 = (FxChildList *)((char *)v7 - DeviceList);
  }
  if ( v7->m_Type == 4137 )
  {
    pList = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pList, _a1, 0x1029u, DeviceList);
    v7 = pList;
  }
  m_Globals = v7->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xEu, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v7 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = v7->m_IdentificationDescriptionSize;
  IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v11 = 15;
LABEL_16:
    WPP_IFR_SF_DDd(
      m_Globals,
      IdentificationDescriptionSize,
      0xCu,
      v11,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741808);
    return 3221225488LL;
  }
  _a3 = v7->m_AddressDescriptionSize;
  if ( !_a3 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x10u, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
    return 3221225488LL;
  }
  IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
  if ( _a3 != AddressDescription->AddressDescriptionSize )
  {
    v11 = 17;
    goto LABEL_16;
  }
  v13 = FxChildList::GetAddressDescription(v7, IdentificationDescription, AddressDescription);
  v14 = v13;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x12u, WPP_FxChildListAPI_cpp_Traceguids, _a1, v13);
  return v14;
}

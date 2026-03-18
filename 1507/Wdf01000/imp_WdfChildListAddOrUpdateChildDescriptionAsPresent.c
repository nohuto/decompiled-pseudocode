/*
 * XREFs of imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C002D9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C001DE94 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListAddOrUpdateChildDescriptionAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  WDFCHILDLIST__ *_a1; // rsi
  FxChildList *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // eax
  unsigned int AddressDescriptionSize; // edx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int16 v14; // r9
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
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x21u, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v7 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( AddressDescription )
  {
    _a3 = v7->m_AddressDescriptionSize;
    if ( !_a3 )
    {
      v12 = -1073741808;
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x22u, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
      return v12;
    }
    AddressDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( _a3 != AddressDescription->AddressDescriptionSize )
    {
      v14 = 35;
LABEL_23:
      v12 = -1073741808;
      WPP_IFR_SF_DDd(
        m_Globals,
        AddressDescriptionSize,
        0xCu,
        v14,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescriptionSize,
        _a3,
        -1073741808);
      return v12;
    }
  }
  else if ( v7->m_AddressDescriptionSize )
  {
    v12 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x24u, WPP_FxChildListAPI_cpp_Traceguids, _a1, -1073741808);
    return v12;
  }
  _a3 = v7->m_IdentificationDescriptionSize;
  AddressDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v14 = 37;
    goto LABEL_23;
  }
  v11 = FxChildList::Add(v7, IdentificationDescription, AddressDescription, &AddressDescription->AddressDescriptionSize);
  v12 = v11;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x26u, WPP_FxChildListAPI_cpp_Traceguids, _a1, v11);
  return v12;
}

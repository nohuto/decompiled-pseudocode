/*
 * XREFs of imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C00276F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0027090 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListAddOrUpdateChildDescriptionAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned int *v7; // r9
  FxChildList *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // eax
  unsigned int AddressDescriptionSize; // edx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 v15; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v8 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x21u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v8 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( AddressDescription )
  {
    _a3 = v8->m_AddressDescriptionSize;
    if ( !_a3 )
    {
      v13 = -1073741808;
      WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x22u, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
      return v13;
    }
    AddressDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( _a3 != AddressDescription->AddressDescriptionSize )
    {
      v15 = 35;
LABEL_16:
      v13 = -1073741808;
      WPP_IFR_SF_DDd(
        m_Globals,
        AddressDescriptionSize,
        0xCu,
        v15,
        WPP_FxChildListAPI_cpp_Traceguids,
        AddressDescriptionSize,
        _a3,
        -1073741808);
      return v13;
    }
  }
  else if ( v8->m_AddressDescriptionSize )
  {
    v13 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x24u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, -1073741808);
    return v13;
  }
  _a3 = v8->m_IdentificationDescriptionSize;
  AddressDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v15 = 37;
    goto LABEL_16;
  }
  v12 = FxChildList::Add(v8, IdentificationDescription, AddressDescription, v7);
  v13 = v12;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x26u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v12);
  return v13;
}

/*
 * XREFs of imp_WdfChildListRetrieveNextDevice @ 0x1C00373D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C00224EC (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  FxChildList *v7; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a2; // ecx
  unsigned int Flags; // ecx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rcx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  int IdentificationDescriptionSize; // r8d
  unsigned __int16 v15; // r9
  unsigned int v16; // ebx
  unsigned __int16 v17; // r9
  unsigned int m_AddressDescriptionSize; // ecx
  int _a3; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v7 = pList;
  m_Globals = pList->m_Globals;
  if ( !Iterator )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  *Device = 0LL;
  _a2 = Iterator->Size;
  if ( Iterator->Size != 40 )
  {
    v15 = 24;
LABEL_15:
    v16 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, 0x28u, 0xCu, v15, WPP_FxChildListAPI_cpp_Traceguids, _a2, 40, -1073741820);
    return v16;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    v16 = -1073741811;
    WPP_IFR_SF_DDd(m_Globals, 0x28u, 0xCu, 0x19u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
    return v16;
  }
  if ( !Info )
    return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
  _a2 = Info->Size;
  if ( Info->Size != 40 )
  {
    v15 = 26;
    goto LABEL_15;
  }
  IdentificationDescription = Info->IdentificationDescription;
  if ( IdentificationDescription )
  {
    LODWORD(AddressDescription) = v7->m_IdentificationDescriptionSize;
    IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
    if ( (_DWORD)AddressDescription != IdentificationDescription->IdentificationDescriptionSize )
    {
      v16 = -1073741811;
      v17 = 27;
      _a3 = v7->m_IdentificationDescriptionSize;
LABEL_17:
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)AddressDescription,
        0xCu,
        v17,
        WPP_FxChildListAPI_cpp_Traceguids,
        IdentificationDescriptionSize,
        _a3,
        -1073741811);
      return v16;
    }
  }
  AddressDescription = Info->AddressDescription;
  if ( !AddressDescription )
    return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
  m_AddressDescriptionSize = v7->m_AddressDescriptionSize;
  if ( m_AddressDescriptionSize )
  {
    IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize )
      return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
    v16 = -1073741811;
    v17 = 29;
    _a3 = v7->m_AddressDescriptionSize;
    goto LABEL_17;
  }
  v16 = -1073741808;
  WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
  return v16;
}

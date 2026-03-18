/*
 * XREFs of imp_WdfChildListRetrieveNextDevice @ 0x1C002E830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C001DD48 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  FxChildList *v7; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int _a2; // edx
  unsigned int Flags; // edx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  int IdentificationDescriptionSize; // r10d
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // r8
  unsigned __int16 v16; // r9
  unsigned int v17; // ebx
  unsigned __int16 v18; // r9
  int _a3; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v7 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DeviceList & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxChildList *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4137 )
  {
    pList = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pList, (void *)DeviceList, 0x1029u, Offset);
    v7 = pList;
  }
  m_Globals = v7->m_Globals;
  if ( !Iterator )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  *Device = 0LL;
  _a2 = Iterator->Size;
  if ( Iterator->Size != 40 )
  {
    v16 = 24;
LABEL_22:
    v17 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, _a2, 0xCu, v16, WPP_FxChildListAPI_cpp_Traceguids, _a2, 40, -1073741820);
    return v17;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    v17 = -1073741811;
    WPP_IFR_SF_DDd(m_Globals, Flags, 0xCu, 0x19u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
    return v17;
  }
  if ( !Info )
    return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
  _a2 = Info->Size;
  if ( Info->Size != 40 )
  {
    v16 = 26;
    goto LABEL_22;
  }
  IdentificationDescription = Info->IdentificationDescription;
  if ( IdentificationDescription )
  {
    IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
    if ( v7->m_IdentificationDescriptionSize != IdentificationDescription->IdentificationDescriptionSize )
    {
      v17 = -1073741811;
      v18 = 27;
      _a3 = v7->m_IdentificationDescriptionSize;
LABEL_24:
      WPP_IFR_SF_DDd(
        m_Globals,
        (unsigned __int8)IdentificationDescription,
        0xCu,
        v18,
        WPP_FxChildListAPI_cpp_Traceguids,
        IdentificationDescriptionSize,
        _a3,
        -1073741811);
      return v17;
    }
  }
  AddressDescription = Info->AddressDescription;
  if ( !AddressDescription )
    return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
  LODWORD(IdentificationDescription) = v7->m_AddressDescriptionSize;
  if ( (_DWORD)IdentificationDescription )
  {
    IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( (_DWORD)IdentificationDescription == AddressDescription->AddressDescriptionSize )
      return FxChildList::GetNextDevice(v7, Device, Iterator, Info);
    v17 = -1073741811;
    v18 = 29;
    _a3 = v7->m_AddressDescriptionSize;
    goto LABEL_24;
  }
  v17 = -1073741808;
  WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x1Cu, WPP_FxChildListAPI_cpp_Traceguids, -1073741808);
  return v17;
}

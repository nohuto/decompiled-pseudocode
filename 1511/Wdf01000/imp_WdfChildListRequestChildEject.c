/*
 * XREFs of imp_WdfChildListRequestChildEject @ 0x1C005EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C005FA5C (-GetDeviceFromId@FxChildList@@QEAAPEAVFxDevice@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C006663C (WPP_IFR_SF_DD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

unsigned __int8 __fastcall imp_WdfChildListRequestChildEject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  unsigned __int8 v5; // dl
  FxChildList *v6; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDevice *DeviceFromId; // rax
  FxDevice *v9; // rbx
  const void *v10; // rax
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const void *v13; // rbx
  _WDF_CHILD_RETRIEVE_INFO info; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxChildList *pList; // [rsp+90h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)DeviceList,
    0x1029u,
    (void **)&pList);
  v6 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x33u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v6 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( v6->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
  {
    memset(&info, 0, sizeof(info));
    info.Size = 40;
    info.IdentificationDescription = IdentificationDescription;
    DeviceFromId = FxChildList::GetDeviceFromId(v6, &info);
    v9 = DeviceFromId;
    if ( m_Globals->FxVerboseOn )
    {
      if ( DeviceFromId && DeviceFromId->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)DeviceFromId ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v10 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x35u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v10);
    }
    if ( v9 )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(v9);
      if ( SafePhysicalDevice )
      {
        IoRequestDeviceEject(SafePhysicalDevice);
        return 1;
      }
      if ( v9->m_ObjectSize )
        v13 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v13 = 0LL;
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x36u, WPP_FxChildListAPI_cpp_Traceguids, v13);
    }
  }
  else
  {
    WPP_IFR_SF_DD(
      m_Globals,
      v5,
      0xCu,
      0x34u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescription->IdentificationDescriptionSize,
      v6->m_IdentificationDescriptionSize);
  }
  return 0;
}

/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C000118C (WPP_IFR_SF_sq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  WDFDEVICE__ *_a2; // rdi
  unsigned __int16 *v5; // rcx
  FxPkgPdo *v6; // rdx
  _FX_DRIVER_GLOBALS *v7; // rsi
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // rax
  FxChildList *m_DeviceList; // rcx
  unsigned int m_IdentificationDescriptionSize; // edx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // r9
  void (__fastcall *m_EvtIdentificationDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v14; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+10h] BYREF

  _a2 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a2 & 1) != 0 )
  {
    Device = *v5;
    v5 = (unsigned __int16 *)((char *)v5 - Device);
  }
  if ( v5[4] == 4098 )
  {
    pPkgPdo = (FxPkgPdo *)v5;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v5, (void **)&pPkgPdo, _a2, 0x1002u, Device);
    v5 = (unsigned __int16 *)pPkgPdo;
  }
  v6 = (FxPkgPdo *)*((_QWORD *)v5 + 81);
  v7 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v5 + 2);
  if ( v6 && v6->m_Type == 4354 )
  {
    result = 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(
      v7,
      2u,
      0x12u,
      0xAu,
      WPP_FxDevicePdoAPI_cpp_Traceguids,
      "imp_WdfPdoRetrieveIdentificationDescription",
      _a2);
    v6 = pPkgPdo;
    result = 3221225485LL;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( (int)result >= 0 )
  {
    m_Description = v6->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList, !m_DeviceList->m_StaticList)
      && (m_IdentificationDescriptionSize = m_DeviceList->m_IdentificationDescriptionSize,
          m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize) )
    {
      m_IdentificationDescription = m_Description->m_IdentificationDescription;
      m_EvtIdentificationDescriptionCopy = m_DeviceList->m_EvtIdentificationDescriptionCopy;
      if ( m_EvtIdentificationDescriptionCopy )
      {
        if ( m_DeviceList->m_ObjectSize )
          v14 = (unsigned __int64)m_DeviceList ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v14 = 0LL;
        m_EvtIdentificationDescriptionCopy(
          (WDFCHILDLIST__ *)v14,
          m_IdentificationDescription,
          IdentificationDescription);
      }
      else
      {
        memmove(IdentificationDescription, m_IdentificationDescription, m_IdentificationDescriptionSize);
      }
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}

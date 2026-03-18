/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x1C00038C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_sq @ 0x1C003A640 (WPP_IFR_SF_sq.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  __int64 Offset; // rdx
  unsigned __int16 *v6; // rcx
  FxPkgPdo *v7; // rdx
  _FX_DRIVER_GLOBALS *v8; // rsi
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // rax
  FxChildList *m_DeviceList; // rcx
  size_t m_IdentificationDescriptionSize; // r8
  void (__fastcall *m_EvtIdentificationDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v16; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxPkgPdo *pPkgPdo; // [rsp+58h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(Offset) = 0;
  v6 = (unsigned __int16 *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = *v6;
    v6 = (unsigned __int16 *)((char *)v6 - Offset);
  }
  if ( v6[4] == 4098 )
  {
    pPkgPdo = (FxPkgPdo *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&pPkgPdo, (void *)Device, 0x1002u, Offset);
    v6 = (unsigned __int16 *)pPkgPdo;
  }
  v7 = (FxPkgPdo *)*((_QWORD *)v6 + 81);
  v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v6 + 2);
  if ( v7 && v7->m_Type == 4354 )
  {
    result = 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(
      v8,
      2u,
      0x12u,
      0xAu,
      WPP_FxDevicePdoAPI_cpp_Traceguids,
      "imp_WdfPdoRetrieveIdentificationDescription",
      (const void *)Device);
    v7 = pPkgPdo;
    result = 3221225485LL;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( (int)result >= 0 )
  {
    m_Description = v7->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList, !m_DeviceList->m_StaticList)
      && (m_IdentificationDescriptionSize = m_DeviceList->m_IdentificationDescriptionSize,
          (_DWORD)m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize) )
    {
      m_EvtIdentificationDescriptionCopy = m_DeviceList->m_EvtIdentificationDescriptionCopy;
      m_IdentificationDescription = m_Description->m_IdentificationDescription;
      if ( m_EvtIdentificationDescriptionCopy )
      {
        m_ObjectSize = m_DeviceList->m_ObjectSize;
        v16 = (unsigned __int64)m_DeviceList ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v16 = 0LL;
        m_EvtIdentificationDescriptionCopy(
          (WDFCHILDLIST__ *)v16,
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

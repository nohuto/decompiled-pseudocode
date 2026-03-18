/*
 * XREFs of imp_WdfDeviceConfigureRequestDispatching @ 0x1C0070BB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0094A3C (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C00A4A3C (-ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z.c)
 */

int __fastcall imp_WdfDeviceConfigureRequestDispatching(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        __int64 Device,
        unsigned __int64 Queue,
        unsigned int RequestType)
{
  FxDevice *v7; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v10; // eax
  FxIoQueue *v11; // r11
  __int64 v12; // rcx
  int v13; // ebx
  unsigned __int16 v15; // r9
  FxIoQueue *pFxIoQueue; // [rsp+40h] [rbp-28h] BYREF
  FxDevice *pDevice; // [rsp+78h] [rbp+10h] BYREF

  pDevice = 0LL;
  pFxIoQueue = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDevice *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4098 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v7 = pDevice;
  }
  m_Globals = v7->m_Globals;
  if ( RequestType <= 0xF && (v10 = 49177, _bittest(&v10, RequestType)) )
  {
    if ( !Queue )
      FxVerifierBugCheckWorker(v7->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
    v11 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v12) = 0;
    if ( (Queue & 1) != 0 )
    {
      v12 = LOWORD(v11->FxNonPagedObject::FxObject::__vftable);
      v11 = (FxIoQueue *)((char *)v11 - v12);
    }
    if ( v11->FxNonPagedObject::FxObject::m_Type == 4099 )
    {
      pFxIoQueue = v11;
    }
    else
    {
      FxObjectHandleGetPtrQI(v11, (void **)&pFxIoQueue, (void *)Queue, 0x1003u, v12);
      v7 = pDevice;
      v11 = pFxIoQueue;
    }
    if ( v7 != v11->m_Device )
    {
      v13 = -1073741808;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        0x31u,
        WPP_FxDeviceApi_cpp_Traceguids,
        (const void *)Queue,
        Device,
        -1073741808);
      return v13;
    }
    if ( v7->m_Legacy )
    {
      if ( (v7->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v15 = 50;
LABEL_23:
        v13 = -1073741436;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v15, WPP_FxDeviceApi_cpp_Traceguids, (const void *)Device, -1073741436);
        return v13;
      }
    }
    else if ( v7->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v15 = 51;
      goto LABEL_23;
    }
    if ( RequestType )
      return FxPkgIo::ConfigureForwarding(v7->m_PkgIo, v11, (_WDF_REQUEST_TYPE)RequestType);
    else
      return FxPkgGeneral::ConfigureForwarding(v7->m_PkgGeneral, v11);
  }
  else
  {
    WPP_IFR_SF_DD(m_Globals, Device, 0xDu, 0x30u, WPP_FxDeviceApi_cpp_Traceguids, RequestType, 0xC000000D);
    return -1073741811;
  }
}

/*
 * XREFs of imp_WdfDeviceRetrieveDeviceName @ 0x1C0071A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 String)
{
  WDFDEVICE__ *_a1; // rsi
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  FxString *v9; // r10
  __int64 Offset; // rdx
  unsigned int v11; // ebx
  FxString *pString; // [rsp+40h] [rbp-28h] BYREF
  FxDevice *pDevice; // [rsp+88h] [rbp+20h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    if ( !String )
      FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1007uLL);
    v9 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (String & 1) != 0 )
    {
      Offset = LOWORD(v9->__vftable);
      v9 = (FxString *)((char *)v9 - Offset);
    }
    if ( v9->m_Type == 4103 )
    {
      pString = v9;
    }
    else
    {
      FxObjectHandleGetPtrQI(v9, (void **)&pString, (void *)String, 0x1007u, Offset);
      v5 = pDevice;
      v9 = pString;
    }
    if ( v5->m_DeviceName.Buffer )
    {
      return (unsigned int)FxString::Assign(v9, &v5->m_DeviceName);
    }
    else
    {
      v11 = -1073741811;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741811);
    }
    return v11;
  }
}

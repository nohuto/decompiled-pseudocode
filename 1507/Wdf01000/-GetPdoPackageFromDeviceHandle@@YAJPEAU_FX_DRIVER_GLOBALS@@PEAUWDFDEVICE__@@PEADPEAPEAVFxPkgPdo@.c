/*
 * XREFs of ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C002BAE8
 * Callers:
 *     imp_WdfPdoGetParent @ 0x1C002BA90 (imp_WdfPdoGetParent.c)
 *     imp_WdfPdoAddEjectionRelationsPhysicalDevice @ 0x1C0065670 (imp_WdfPdoAddEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoClearEjectionRelationsDevices @ 0x1C00656D0 (imp_WdfPdoClearEjectionRelationsDevices.c)
 *     imp_WdfPdoMarkMissing @ 0x1C0065710 (imp_WdfPdoMarkMissing.c)
 *     imp_WdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1C0065760 (imp_WdfPdoRemoveEjectionRelationsPhysicalDevice.c)
 *     imp_WdfPdoRequestEject @ 0x1C00657D0 (imp_WdfPdoRequestEject.c)
 *     imp_WdfPdoRetrieveAddressDescription @ 0x1C00658D0 (imp_WdfPdoRetrieveAddressDescription.c)
 *     imp_WdfPdoUpdateAddressDescription @ 0x1C0065960 (imp_WdfPdoUpdateAddressDescription.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C000118C (WPP_IFR_SF_sq.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall GetPdoPackageFromDeviceHandle(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        unsigned __int64 Device,
        char *FunctionName,
        FxPkgPdo **Package,
        _FX_DRIVER_GLOBALS **ObjectGlobals,
        FxDevice **OutDevice)
{
  unsigned int v6; // ebx
  WDFDEVICE__ *_a2; // rdi
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS **v11; // r10
  FxPkgPdo *m_PkgPnp; // rax
  FxDevice *pDevice; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  _a2 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(CallersGlobals, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v10 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a2 & 1) != 0 )
  {
    Device = LOWORD(v10->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - Device);
  }
  if ( v10->m_Type == 4098 )
  {
    pDevice = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pDevice, _a2, 0x1002u, Device);
    v10 = pDevice;
  }
  v11 = ObjectGlobals;
  *ObjectGlobals = v10->m_Globals;
  if ( OutDevice )
    *OutDevice = v10;
  m_PkgPnp = (FxPkgPdo *)v10->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4354 )
  {
    *Package = m_PkgPnp;
  }
  else
  {
    WPP_IFR_SF_sq(*v11, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, FunctionName, _a2);
    return (unsigned int)-1073741811;
  }
  return v6;
}

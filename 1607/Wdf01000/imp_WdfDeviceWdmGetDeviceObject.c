/*
 * XREFs of imp_WdfDeviceWdmGetDeviceObject @ 0x1C00322D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfDeviceWdmGetDeviceObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxDeviceBase *flags; // rdi
  __int64 v4; // rcx
  FxDeviceBase_vtbl *v5; // rax
  __int64 (__fastcall *QueryInterface)(FxDevice *, FxQueryInterfaceParams *); // rax
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  FxDeviceBase *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Device & 1) != 0 )
  {
    v4 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4144
    || (pDevice = 0LL,
        p_pDevice = &pDevice,
        v5 = flags->FxNonPagedObject::FxObject::__vftable,
        v14 = v4,
        v13 = 4144,
        QueryInterface = (__int64 (__fastcall *)(FxDevice *, FxQueryInterfaceParams *))v5->QueryInterface,
        QueryInterface == FxDevice::QueryInterface) )
  {
    pDevice = flags;
  }
  else
  {
    if ( (int)QueryInterface((FxDevice *)flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v8, v9, v10, v11, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDevice;
  }
  return flags->m_DeviceObject.m_DeviceObject;
}

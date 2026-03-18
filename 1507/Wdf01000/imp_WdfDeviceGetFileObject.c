/*
 * XREFs of imp_WdfDeviceGetFileObject @ 0x1C006C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFFILEOBJECT__ *__fastcall imp_WdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  FxDevice *v5; // rcx
  __int64 Offset; // r8
  int _a1; // eax
  FxDevice *pDevice; // [rsp+40h] [rbp+8h] BYREF
  FxFileObject *pFxFO; // [rsp+48h] [rbp+10h] BYREF

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pFxFO = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v5 = pDevice;
  }
  _a1 = FxFileObject::_GetFileObjectFromWdm(v5, v5->m_FileObjectClass, FileObject, &pFxFO);
  if ( _a1 >= 0 )
  {
    if ( pFxFO && pFxFO->m_ObjectSize )
      return (WDFFILEOBJECT__ *)((unsigned __int64)pFxFO ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_d(v3, 2u, 0x12u, 0xAu, WPP_FxDeviceApiKm_cpp_Traceguids, _a1);
    return 0LL;
  }
}

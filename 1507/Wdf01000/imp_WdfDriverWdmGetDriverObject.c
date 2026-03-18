/*
 * XREFs of imp_WdfDriverWdmGetDriverObject @ 0x1C002F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_DRIVER_OBJECT *__fastcall imp_WdfDriverWdmGetDriverObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Driver)
{
  __int64 Offset; // r8
  FxDriver *v3; // rcx
  FxDriver *pDriver; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Driver )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1001uLL);
  v3 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Driver & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDriver *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4097 )
  {
    pDriver = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDriver, (void *)Driver, 0x1001u, Offset);
    v3 = pDriver;
  }
  return v3->m_DriverObject.m_DriverObject;
}

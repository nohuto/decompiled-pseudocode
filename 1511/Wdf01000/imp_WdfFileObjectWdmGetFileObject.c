/*
 * XREFs of imp_WdfFileObjectWdmGetFileObject @ 0x1C0002AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_FILE_OBJECT *__fastcall imp_WdfFileObjectWdmGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 FileObject)
{
  __int64 Offset; // r8
  FxFileObject *v3; // rcx
  FxFileObject *pFO; // [rsp+48h] [rbp+10h] BYREF

  if ( !FileObject )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1018uLL);
  LOWORD(Offset) = 0;
  v3 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (FileObject & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxFileObject *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4120 )
  {
    pFO = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFO, (void *)FileObject, 0x1018u, Offset);
    v3 = pFO;
  }
  return v3->m_FileObject.m_FileObject;
}

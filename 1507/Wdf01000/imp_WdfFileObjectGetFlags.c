/*
 * XREFs of imp_WdfFileObjectGetFlags @ 0x1C0072620
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_FILE_OBJECT *__fastcall imp_WdfFileObjectGetFlags(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 FileObject)
{
  FxFileObject *v2; // rcx
  __int64 Offset; // r8
  _FILE_OBJECT *result; // rax
  FxFileObject *pFO; // [rsp+48h] [rbp+10h] BYREF

  if ( !FileObject )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1018uLL);
  v2 = (FxFileObject *)(~FileObject & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (FileObject & 1) != 0 )
  {
    Offset = LOWORD(v2->FxNonPagedObject::FxObject::__vftable);
    v2 = (FxFileObject *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4120 )
  {
    pFO = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFO, (void *)FileObject, 0x1018u, Offset);
    v2 = pFO;
  }
  result = v2->m_FileObject.m_FileObject;
  if ( result )
    return (_FILE_OBJECT *)result->Flags;
  return result;
}

/*
 * XREFs of imp_WdfObjectQuery @ 0x1C0079550
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfObjectQuery(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        const _GUID *Guid,
        unsigned int QueryBufferLength)
{
  __int64 Offset; // r8
  FxObject *v5; // rcx
  FxObject *p; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Object )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1000uLL);
  v5 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxObject *)((char *)v5 - Offset);
  }
  if ( v5->m_Type != 4096 )
    FxObjectHandleGetPtrQI(v5, (void **)&p, (void *)Object, 0x1000u, Offset);
  return 3221226021LL;
}

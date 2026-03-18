/*
 * XREFs of imp_WdfRequestChangeTarget @ 0x1C006E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 IoTarget)
{
  __int64 v3; // rbx
  FxRequest *v5; // r10
  __int64 Offset; // rcx
  FxIoTarget *v7; // rcx
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF
  FxIoTarget *pTarget; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v3) = 0;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  if ( !IoTarget )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  v7 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v3 = LOWORD(v7->__vftable);
    v7 = (FxIoTarget *)((char *)v7 - v3);
  }
  if ( v7->m_Type == 4608 )
  {
    pTarget = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pTarget, (void *)IoTarget, 0x1200u, v3);
    v5 = pRequest;
    v7 = pTarget;
  }
  return FxRequestBase::ValidateTarget(v5, (unsigned __int64)v7);
}

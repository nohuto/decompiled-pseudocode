/*
 * XREFs of imp_WdfRequestIsCanceled @ 0x1C006EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyWdfRequestIsCanceled @ 0x1C00D0714 (Vf_VerifyWdfRequestIsCanceled.c)
 */

unsigned __int8 __fastcall imp_WdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  char v2; // bl
  FxRequest *v3; // rcx
  __int64 Offset; // r8
  int IsCanceled; // eax
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v3 = pRequest;
  }
  if ( v3->m_Globals->FxVerifierOn )
  {
    IsCanceled = Vf_VerifyWdfRequestIsCanceled(v3->m_Globals, v3);
    v3 = pRequest;
  }
  else
  {
    IsCanceled = 0;
  }
  if ( IsCanceled < 0 )
    return 0;
  if ( v3->m_Irp.m_Irp->Cancel || v3->m_Canceled )
    return 1;
  return v2;
}

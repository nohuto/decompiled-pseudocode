/*
 * XREFs of imp_WdfRequestGetInformation @ 0x1C0034AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned __int8 v2; // r8
  FxRequest *v3; // rdi
  unsigned __int64 Information; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  int IsNotCompleted; // eax
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v3 = pRequest;
  Information = 0LL;
  m_Globals = pRequest->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return pRequest->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Lock(pRequest, &PreviousIrql, v2);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(v3, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    Information = v3->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(v3, PreviousIrql, v7);
  return Information;
}

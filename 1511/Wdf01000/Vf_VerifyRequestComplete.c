/*
 * XREFs of Vf_VerifyRequestComplete @ 0x1C00B9438
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0005380 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C0005560 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithPriorityBoost @ 0x1C0064FD0 (imp_WdfRequestCompleteWithPriorityBoost.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9D00 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9F7C (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyRequestComplete(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(pRequest, &irql, a3);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestCanBeCompleted(pRequest, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(pRequest, irql, v5);
  return (unsigned int)IsDriverOwned;
}

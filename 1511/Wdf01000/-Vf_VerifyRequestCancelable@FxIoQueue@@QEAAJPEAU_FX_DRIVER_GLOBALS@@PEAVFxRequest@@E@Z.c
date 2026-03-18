/*
 * XREFs of ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00BAE40
 * Callers:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001E324 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9E40 (-Vf_VerifyRequestIsCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9F7C (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA134 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequestCancelable(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 Cancelable)
{
  unsigned __int8 v7; // r8
  int IsDriverOwned; // ebx
  int IsNotCancelable; // eax
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( Cancelable )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
LABEL_10:
        IsDriverOwned = IsNotCancelable;
        goto $Done_69;
      }
    }
    else if ( FxDriverGlobals->FxVerifierOn )
    {
      IsNotCancelable = FxRequest::Vf_VerifyRequestIsCancelable(pRequest, FxDriverGlobals);
      goto LABEL_10;
    }
    IsDriverOwned = 0;
  }
$Done_69:
  FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v7);
  return (unsigned int)IsDriverOwned;
}

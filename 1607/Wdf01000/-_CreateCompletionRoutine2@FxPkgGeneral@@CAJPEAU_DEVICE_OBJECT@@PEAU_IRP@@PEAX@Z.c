/*
 * XREFs of ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C009CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C00124FC (-Complete@FxRequest@@QEAAJJ@Z.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine2(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxRequest *Context,
        unsigned __int16 a4)
{
  if ( OriginalIrp->PendingReturned && OriginalIrp->CurrentLocation <= OriginalIrp->StackCount )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  FxRequest::Complete(Context, OriginalIrp->IoStatus.Status, (__int64)Context, a4);
  return 3221225494LL;
}

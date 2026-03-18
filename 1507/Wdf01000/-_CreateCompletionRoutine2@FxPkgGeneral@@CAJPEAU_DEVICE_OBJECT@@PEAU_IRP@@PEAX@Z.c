/*
 * XREFs of ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A4CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 */

__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine2(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        __int64 Context,
        unsigned __int16 a4)
{
  unsigned int flags; // esi
  FxDeviceBase *v6; // rdi
  _FX_DRIVER_GLOBALS *v7; // rcx
  const void *_a4; // rax
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  if ( OriginalIrp->PendingReturned && OriginalIrp->CurrentLocation <= OriginalIrp->StackCount )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  flags = OriginalIrp->IoStatus.Status;
  v6 = *(FxDeviceBase **)(Context + 96);
  v7 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  if ( v7->FxVerboseOn )
  {
    if ( *(_WORD *)(Context + 10) )
      _a4 = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a4 = 0LL;
    WPP_IFR_SF_qqxd(
      v7,
      *(_QWORD *)(Context + 152),
      *(_QWORD *)(*(_QWORD *)(Context + 152) + 56LL),
      0xBu,
      v10,
      _a4,
      *(const void **)(Context + 152),
      *(_QWORD *)(*(_QWORD *)(Context + 152) + 56LL),
      flags);
  }
  if ( v6 )
    *(_BYTE *)(Context + 236) = HIBYTE(v6[1].m_Globals);
  else
    *(_BYTE *)(Context + 236) = 0;
  FxRequest::CompleteInternal((FxRequest *)Context, (_FX_DRIVER_GLOBALS *)flags, Context, a4);
  return 3221225494LL;
}

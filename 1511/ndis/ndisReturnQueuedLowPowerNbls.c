/*
 * XREFs of ndisReturnQueuedLowPowerNbls @ 0x1C00126D0
 * Callers:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C0098598 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisReturnQueuedLowPowerNbls(__int64 a1, char a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  struct _NET_BUFFER_LIST *v6; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 3928);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3928));
  if ( a2 )
    *(_BYTE *)(a1 + 3956) = 1;
  v6 = *(struct _NET_BUFFER_LIST **)(a1 + 3944);
  if ( v6 )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(v6, 0LL, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4136), 0x8Du, 1u);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 3816) + 192LL))(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 3944),
      1LL);
    *(_QWORD *)(a1 + 3944) = 0LL;
  }
  KeReleaseSpinLock(v2, v5);
}

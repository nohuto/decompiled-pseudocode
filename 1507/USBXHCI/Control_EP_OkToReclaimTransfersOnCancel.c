/*
 * XREFs of Control_EP_OkToReclaimTransfersOnCancel @ 0x1C0021050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Control_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  bool v2; // di
  KIRQL v3; // al
  __int64 v4; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 296);
  *(_BYTE *)(a1 + 96) = v3;
  if ( v4 )
    v2 = *(_DWORD *)(v4 + 96) == 3;
  *(_DWORD *)(a1 + 304) |= 8u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v3);
  if ( v2 )
    (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 896))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      *(_QWORD *)(a1 + 80));
}

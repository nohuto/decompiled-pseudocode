/*
 * XREFs of Control_EP_StartMapping @ 0x1C00211F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 */

void __fastcall Control_EP_StartMapping(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  __int64 v4; // rcx

  v1 = (KSPIN_LOCK *)(a1 + 88);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 0;
  *(_BYTE *)(a1 + 96) = v3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 96) == 3 )
    {
      *(_DWORD *)(a1 + 100) = 2;
      KeReleaseSpinLock(v1, v3);
      (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 896))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        *(_QWORD *)(a1 + 80));
    }
    else
    {
      *(_DWORD *)(a1 + 100) = 3;
      KeReleaseSpinLock(v1, v3);
      Control_MapTransfer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 100) = 2;
    KeReleaseSpinLock(v1, v3);
  }
}

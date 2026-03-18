/*
 * XREFs of Control_EP_StartMapping @ 0x1C00290A0
 * Callers:
 *     <none>
 * Callees:
 *     Control_MapTransfer @ 0x1C0001C24 (Control_MapTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
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
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
        WdfDriverGlobals,
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

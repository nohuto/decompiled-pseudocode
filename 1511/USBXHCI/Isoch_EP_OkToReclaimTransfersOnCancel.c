/*
 * XREFs of Isoch_EP_OkToReclaimTransfersOnCancel @ 0x1C002ACF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Isoch_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v2 = *(_DWORD *)(a1 + 280);
  if ( (v2 & 4) != 0 )
  {
    v3 = a1 + 336;
    v4 = *(_QWORD *)(a1 + 336);
    if ( v4 != a1 + 336 )
    {
      **(_QWORD **)(a1 + 376) = v4;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 376);
      **(_QWORD **)(a1 + 344) = a1 + 368;
      *(_QWORD *)(a1 + 376) = *(_QWORD *)(a1 + 344);
      *(_QWORD *)(a1 + 344) = a1 + 336;
      *(_QWORD *)v3 = v3;
    }
    v5 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 280) = v2 | 2;
    v5 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 80));
}

/*
 * XREFs of Bulk_EP_OkToReclaimTransfersOnCancel @ 0x1C002DA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_EP_OkToReclaimTransfersOnCancel(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // di

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v2 = *(_DWORD *)(a1 + 276);
  if ( (v2 & 0x10) != 0 )
  {
    v3 = a1 + 320;
    v4 = *(_QWORD *)(a1 + 320);
    if ( v4 != a1 + 320 )
    {
      **(_QWORD **)(a1 + 360) = v4;
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 360);
      **(_QWORD **)(a1 + 328) = a1 + 352;
      *(_QWORD *)(a1 + 360) = *(_QWORD *)(a1 + 328);
      *(_QWORD *)(a1 + 328) = a1 + 320;
      *(_QWORD *)v3 = v3;
    }
    v5 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 276) = v2 | 0x20;
    v5 = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 80));
}

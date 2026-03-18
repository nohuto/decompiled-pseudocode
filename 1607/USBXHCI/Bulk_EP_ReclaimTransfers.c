/*
 * XREFs of Bulk_EP_ReclaimTransfers @ 0x1C002E150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Bulk_EP_ReclaimTransfers(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v3 = a1 + 320;
  *(_BYTE *)(a1 + 96) = v2;
  if ( *(_QWORD *)v3 != v3 )
  {
    **(_QWORD **)(a1 + 360) = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 360);
    **(_QWORD **)(a1 + 328) = a1 + 352;
    *(_QWORD *)(a1 + 360) = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = a1 + 320;
    *(_QWORD *)v3 = v3;
  }
  *(_DWORD *)(a1 + 276) |= 0x40u;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 80));
}

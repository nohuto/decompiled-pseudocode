/*
 * XREFs of Isoch_EP_ReclaimTransfers @ 0x1C002B400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_EP_ReclaimTransfers(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  *(_DWORD *)(a1 + 280) |= 8u;
  v3 = a1 + 336;
  *(_BYTE *)(a1 + 96) = v2;
  if ( *(_QWORD *)v3 != v3 )
  {
    **(_QWORD **)(a1 + 376) = *(_QWORD *)v3;
    *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(a1 + 376);
    **(_QWORD **)(a1 + 344) = a1 + 368;
    *(_QWORD *)(a1 + 376) = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a1 + 344) = a1 + 336;
    *(_QWORD *)v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 80));
}

/*
 * XREFs of Isoch_Transfer_Complete @ 0x1C002BFC8
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C000CC00 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C00019F4 (Isoch_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_Transfer_Complete(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 *v7; // rcx

  Isoch_Transfer_PrepareForCompletion(a1, a2, a3, a4);
  if ( !a5 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             *(_QWORD *)(a2 + 24),
             *(unsigned int *)(a2 + 52));
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v7 = *(__int64 **)(a1 + 376);
  *(_QWORD *)a2 = a1 + 368;
  *(_QWORD *)(a2 + 8) = v7;
  if ( *v7 != a1 + 368 )
    __fastfail(3u);
  *v7 = a2;
  *(_QWORD *)(a1 + 376) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 80));
}

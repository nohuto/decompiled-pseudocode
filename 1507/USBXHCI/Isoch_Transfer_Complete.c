/*
 * XREFs of Isoch_Transfer_Complete @ 0x1C0027E38
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0026078 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C0028174 (Isoch_Transfer_PrepareForCompletion.c)
 */

__int64 __fastcall Isoch_Transfer_Complete(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v7; // rcx

  Isoch_Transfer_PrepareForCompletion();
  if ( !a5 )
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             *(_QWORD *)(a2 + 24),
             *(unsigned int *)(a2 + 52));
  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v7 = *(_QWORD **)(a1 + 376);
  *(_QWORD *)a2 = a1 + 368;
  *(_QWORD *)(a2 + 8) = v7;
  if ( *v7 != a1 + 368 )
    __fastfail(3u);
  *v7 = a2;
  *(_QWORD *)(a1 + 376) = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 896))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *(_QWORD *)(a1 + 80));
}

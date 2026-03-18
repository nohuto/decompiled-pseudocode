/*
 * XREFs of Bulk_Transfer_Complete @ 0x1C002CC38
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C002979C (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C002CE00 (Bulk_Transfer_PrepareForCompletion.c)
 */

__int64 __fastcall Bulk_Transfer_Complete(__int64 a1, __int64 a2)
{
  Bulk_Transfer_PrepareForCompletion();
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *(_QWORD *)(a2 + 24),
           *(unsigned int *)(a2 + 56));
}

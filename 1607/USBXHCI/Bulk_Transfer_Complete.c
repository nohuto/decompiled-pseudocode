/*
 * XREFs of Bulk_Transfer_Complete @ 0x1C002ED3C
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000B750 (Bulk_RetrieveNextStage.c)
 *     Bulk_CompleteTransfers @ 0x1C002D90C (Bulk_CompleteTransfers.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0003250 (Bulk_Transfer_PrepareForCompletion.c)
 */

__int64 __fastcall Bulk_Transfer_Complete(__int64 a1, __int64 a2, int a3)
{
  Bulk_Transfer_PrepareForCompletion(a1, a2, a3);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           *(_QWORD *)(a2 + 24),
           *(unsigned int *)(a2 + 56));
}

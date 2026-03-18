/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1C00017A0
 * Callers:
 *     Bulk_ValidateStagePointer @ 0x1C0001414 (Bulk_ValidateStagePointer.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C00014F4 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0001570 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_Find @ 0x1C000D420 (Isoch_Stage_Find.c)
 *     Isoch_CompleteTransfers @ 0x1C002AA4C (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C002AFE0 (Isoch_FindTrbMatch.c)
 *     Bulk_CompleteTransfers @ 0x1C002D3BC (Bulk_CompleteTransfers.c)
 *     Bulk_FindStage @ 0x1C002DCFC (Bulk_FindStage.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002DF00 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_ForwardScanGetNextStage(unsigned __int8 *a1)
{
  __int64 v2; // r9
  unsigned __int8 v3; // cl
  int v4; // edx
  int v5; // eax

  v2 = 0LL;
  v3 = a1[6];
  if ( v3 )
  {
    v4 = a1[5];
    v5 = v4 * *a1;
    a1[6] = v3 - 1;
    v2 = (__int64)&a1[v5 + 16];
    a1[5] = (v4 + 1) % a1[1];
  }
  return v2;
}

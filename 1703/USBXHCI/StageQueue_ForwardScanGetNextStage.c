/*
 * XREFs of StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8
 * Callers:
 *     Bulk_ValidateStagePointer @ 0x1C00025F0 (Bulk_ValidateStagePointer.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0002884 (Isoch_Transfer_CompleteStaleStages.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0002900 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_Find @ 0x1C000D360 (Isoch_Stage_Find.c)
 *     Isoch_CompleteTransfers @ 0x1C00277F0 (Isoch_CompleteTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C0027E14 (Isoch_FindTrbMatch.c)
 *     Bulk_CompleteTransfers @ 0x1C002A374 (Bulk_CompleteTransfers.c)
 *     Bulk_FindStage @ 0x1C002ADC4 (Bulk_FindStage.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002AFCC (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_ForwardScanGetNextStage(unsigned __int8 *a1)
{
  unsigned __int8 v1; // dl
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v4; // rax

  v1 = a1[6];
  v2 = 0LL;
  if ( v1 )
  {
    v3 = a1[5];
    v4 = *a1;
    a1[6] = v1 - 1;
    v2 = (__int64)&a1[v4 * v3 + 16];
    a1[5] = (v3 + 1) % a1[1];
  }
  return v2;
}

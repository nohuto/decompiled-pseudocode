/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x1C0001A90
 * Callers:
 *     Control_MapTransfer @ 0x1C00033B4 (Control_MapTransfer.c)
 *     Bulk_RetrieveNextStage @ 0x1C000B750 (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C000BB40 (Bulk_Stage_EstimateRequiredTrbs.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 48);
  return v1 && *v1;
}

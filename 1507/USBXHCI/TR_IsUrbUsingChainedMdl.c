/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x1C00208A0
 * Callers:
 *     Control_MapTransfer @ 0x1C00214A8 (Control_MapTransfer.c)
 *     Bulk_RetrieveNextStage @ 0x1C002B4EC (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C002BDE8 (Bulk_Stage_EstimateRequiredTrbs.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = *(_QWORD **)(a1 + 48);
  return v1 && *v1;
}

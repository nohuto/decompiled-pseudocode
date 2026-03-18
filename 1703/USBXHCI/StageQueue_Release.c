/*
 * XREFs of StageQueue_Release @ 0x1C000354C
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0002900 (Isoch_CompleteStaleTransfers.c)
 *     Bulk_MapStage @ 0x1C00031B8 (Bulk_MapStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 *     Isoch_PrepareStage @ 0x1C000C2C0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000CF90 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000EDE0 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteTransfers @ 0x1C00277F0 (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C0028158 (Isoch_MapStage.c)
 *     Bulk_CompleteTransfers @ 0x1C002A374 (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StageQueue_Release(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  --a1[2];
  v3 = a1[4];
  if ( a2 == &a1[v3 * *a1 + 16] )
  {
    result = ((int)v3 + 1) / (unsigned int)a1[1];
    a1[4] = ((int)v3 + 1) % (unsigned int)a1[1];
  }
  else
  {
    result = (unsigned int)((a1[1] + a1[3] - 1) / a1[1]);
    a1[3] = (a1[1] + a1[3] - 1) % a1[1];
  }
  return result;
}

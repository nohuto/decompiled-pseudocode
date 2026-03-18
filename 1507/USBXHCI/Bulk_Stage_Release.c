/*
 * XREFs of Bulk_Stage_Release @ 0x1C002C8C4
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C002979C (Bulk_CompleteTransfers.c)
 *     Bulk_MapStage @ 0x1C002A554 (Bulk_MapStage.c)
 *     Bulk_PrepareStage @ 0x1C002A83C (Bulk_PrepareStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B2D0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C00209BC (TR_ReleaseSegments.c)
 */

__int64 __fastcall Bulk_Stage_Release(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi

  v3 = *a2;
  if ( *((_BYTE *)a2 + 44) )
  {
    IoFreeMdl((PMDL)a2[6]);
    a2[6] = 0LL;
    *((_BYTE *)a2 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 3, 0);
  return StageQueue_Release((unsigned __int8 *)(v3 + 112), (unsigned __int8 *)a2);
}

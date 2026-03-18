/*
 * XREFs of Bulk_Stage_Release @ 0x1C000330C
 * Callers:
 *     Bulk_MapStage @ 0x1C0003018 (Bulk_MapStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000ABB0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_PrepareStage @ 0x1C000AF78 (Bulk_PrepareStage.c)
 *     Bulk_CompleteTransfers @ 0x1C002D90C (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E9B0 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C000165C (TR_ReleaseSegments.c)
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
  return StageQueue_Release(v3 + 112, a2);
}

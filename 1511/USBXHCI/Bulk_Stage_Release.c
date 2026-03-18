/*
 * XREFs of Bulk_Stage_Release @ 0x1C0002A7C
 * Callers:
 *     Bulk_MapStage @ 0x1C00025AC (Bulk_MapStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_PrepareStage @ 0x1C000F728 (Bulk_PrepareStage.c)
 *     Bulk_CompleteTransfers @ 0x1C002D3BC (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002E438 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C0003CD0 (TR_ReleaseSegments.c)
 */

__int64 __fastcall Bulk_Stage_Release(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rsi

  v4 = *a2;
  if ( *((_BYTE *)a2 + 44) )
  {
    IoFreeMdl((PMDL)a2[6]);
    a2[6] = 0LL;
    *((_BYTE *)a2 + 44) = 0;
  }
  LOBYTE(a3) = 1;
  TR_ReleaseSegments(a1, a2 + 1, a3);
  TR_ReleaseSegments(a1, a2 + 3, 0LL);
  return StageQueue_Release(v4 + 112, a2);
}

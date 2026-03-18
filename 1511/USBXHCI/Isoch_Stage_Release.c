/*
 * XREFs of Isoch_Stage_Release @ 0x1C002BE8C
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C0001570 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_PrepareStage @ 0x1C000C4C4 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C760 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000E5A0 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteTransfers @ 0x1C002AA4C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002B320 (Isoch_MapStage.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C0003CD0 (TR_ReleaseSegments.c)
 */

__int64 __fastcall Isoch_Stage_Release(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi

  v3 = *a2;
  if ( *((_BYTE *)a2 + 56) )
  {
    IoFreeMdl((PMDL)a2[8]);
    a2[8] = 0LL;
    *((_BYTE *)a2 + 56) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 3, 0);
  return StageQueue_Release((unsigned __int8 *)(v3 + 112), (unsigned __int8 *)a2);
}

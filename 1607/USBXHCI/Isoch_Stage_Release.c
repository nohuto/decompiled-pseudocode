/*
 * XREFs of Isoch_Stage_Release @ 0x1C002C4A8
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C00027D0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_PrepareStage @ 0x1C000B4B0 (Isoch_PrepareStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C000C230 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000E050 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteTransfers @ 0x1C002B06C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002B930 (Isoch_MapStage.c)
 * Callees:
 *     TR_ReleaseSegments @ 0x1C000165C (TR_ReleaseSegments.c)
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

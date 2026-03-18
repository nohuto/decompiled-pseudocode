/*
 * XREFs of TR_DoesSegmentContainDequeuePointer @ 0x1C0028598
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1C002AFE0 (Isoch_FindTrbMatch.c)
 *     Bulk_FindStage @ 0x1C002DCFC (Bulk_FindStage.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002DF00 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TR_DoesSegmentContainDequeuePointer(__int64 a1, int a2, unsigned int a3, signed __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // edx
  __int64 v6; // rcx

  v4 = *(unsigned int *)(a1 + 40);
  v5 = 16 * a2;
  if ( 16 * (unsigned __int64)a3 <= v4 )
    LODWORD(v4) = 16 * a3;
  v6 = *(_QWORD *)(a1 + 24);
  return a4 >= v6 + v5 && a4 < v6 + (unsigned int)v4;
}

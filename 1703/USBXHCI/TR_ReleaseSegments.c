/*
 * XREFs of TR_ReleaseSegments @ 0x1C00016C4
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
 *     memset @ 0x1C0010E80 (memset.c)
 */

unsigned __int64 __fastcall TR_ReleaseSegments(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi

  v3 = (unsigned __int64 *)*a2;
  if ( (unsigned __int64 *)*a2 != a2 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
    if ( (result & 0x4000000000000LL) != 0 )
    {
      do
      {
        result = (unsigned __int64)memset((void *)v3[2], 0, *((unsigned int *)v3 + 10));
        v3 = (unsigned __int64 *)*v3;
      }
      while ( a2 != v3 );
    }
    if ( a3 )
    {
      v8 = a1 + 200;
      if ( (unsigned __int64 *)*a2 == a2 )
        return result;
      *(_QWORD *)a2[1] = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = a2[1];
      *(_QWORD *)v8 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v8;
    }
    else
    {
      v9 = a1 + 200;
      if ( (unsigned __int64 *)*a2 == a2 )
        return result;
      **(_QWORD **)(v9 + 8) = *a2;
      *(_QWORD *)(*a2 + 8) = *(_QWORD *)(v9 + 8);
      *(_QWORD *)a2[1] = v9;
      result = a2[1];
      *(_QWORD *)(v9 + 8) = result;
    }
    *a2 = (unsigned __int64)a2;
    a2[1] = (unsigned __int64)a2;
  }
  return result;
}

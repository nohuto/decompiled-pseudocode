/*
 * XREFs of Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002DF00
 * Callers:
 *     Bulk_EP_IsTransferEventLikelyDuplicate @ 0x1C002DA30 (Bulk_EP_IsTransferEventLikelyDuplicate.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002E7FC (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C00017A0 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0028598 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_IsTransferEventLikelyDuplicate_Internal(_QWORD *a1, signed __int64 a2, _BYTE *a3)
{
  signed __int64 v4; // r9
  __int64 v6; // rbx
  unsigned __int8 *v7; // r10
  __int64 NextStage; // rax
  unsigned __int8 **v9; // r10
  char v10; // r11

  *a3 = 0;
  v4 = a2;
  if ( (_QWORD *)a1[25] != a1 + 25 )
  {
    v6 = a1[26];
    if ( TR_DoesSegmentContainDequeuePointer(v6, 0, 0xFFFFFFFF, a2) )
      goto LABEL_9;
  }
  v7 = (unsigned __int8 *)a1[40];
  if ( a1 + 40 == (_QWORD *)v7 )
  {
LABEL_7:
    v6 = a1[21];
  }
  else
  {
    while ( 1 )
    {
      v7[117] = v7[116];
      v7[118] = v7[114];
      NextStage = StageQueue_ForwardScanGetNextStage(v7 + 112);
      if ( NextStage )
        break;
      v7 = *v9;
      if ( a1 + 40 == (_QWORD *)v7 )
      {
        v4 = a2;
        goto LABEL_7;
      }
    }
    v6 = *(_QWORD *)(NextStage + 96);
    v4 = a2;
  }
  if ( TR_DoesSegmentContainDequeuePointer(v6, 0, 0xFFFFFFFF, v4) )
  {
LABEL_9:
    v10 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 16)
                    + 16LL * (unsigned int)((unsigned __int64)(v4 - *(_QWORD *)(v6 + 24)) >> 4)
                    + 12) & 0xFC00) == 0x2000 )
      *a3 = 1;
  }
  return v10;
}

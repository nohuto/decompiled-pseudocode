/*
 * XREFs of Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002AFCC
 * Callers:
 *     Bulk_EP_IsTransferEventLikelyDuplicate @ 0x1C002AAB0 (Bulk_EP_IsTransferEventLikelyDuplicate.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002B8EC (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C00251C0 (TR_DoesSegmentContainDequeuePointer.c)
 */

char __fastcall Bulk_IsTransferEventLikelyDuplicate_Internal(_QWORD *a1, signed __int64 a2, _BYTE *a3)
{
  char v3; // bl
  signed __int64 v5; // r11
  __int64 v7; // rdi
  __int64 *i; // rdi
  __int64 NextStage; // rax

  v3 = 0;
  *a3 = 0;
  v5 = a2;
  if ( (_QWORD *)a1[25] != a1 + 25 )
  {
    v7 = a1[26];
    if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, a2) )
      goto LABEL_9;
  }
  for ( i = (__int64 *)a1[40]; ; i = (__int64 *)*i )
  {
    if ( a1 + 40 == i )
    {
      v7 = a1[21];
      goto LABEL_8;
    }
    *((_BYTE *)i + 117) = *((_BYTE *)i + 116);
    *((_BYTE *)i + 118) = *((_BYTE *)i + 114);
    NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 112);
    if ( NextStage )
      break;
  }
  v7 = *(_QWORD *)(NextStage + 96);
LABEL_8:
  if ( TR_DoesSegmentContainDequeuePointer(v7, 0, 0xFFFFFFFF, v5) )
  {
LABEL_9:
    v3 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 16)
                    + 16LL * (unsigned int)((unsigned __int64)(v5 - *(_QWORD *)(v7 + 24)) >> 4)
                    + 12) & 0xFC00) == 0x2000 )
      *a3 = 1;
  }
  return v3;
}

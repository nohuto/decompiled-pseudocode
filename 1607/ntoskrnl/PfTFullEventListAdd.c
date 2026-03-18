/*
 * XREFs of PfTFullEventListAdd @ 0x1400F0468
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1400F0420 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1403E7CC0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_1403281E0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_1403281E0.Alignment);
    if ( LOWORD(stru_1403281E0.Alignment) <= (unsigned int)dword_1403281F0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_1403281E0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140328160,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}

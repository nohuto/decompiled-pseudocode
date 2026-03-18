/*
 * XREFs of PfTFullEventListAdd @ 0x1400D7BB0
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1400D7B68 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1404F7870 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400D7A08 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_1403503E0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_1403503E0.Alignment);
    if ( LOWORD(stru_1403503E0.Alignment) <= (unsigned int)dword_1403503F0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_1403503E0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&RunRef,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}

/*
 * XREFs of PfTFullEventListAdd @ 0x1400EE2E8
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1400EE2A0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1403E92F0 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400068B4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140328220, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140328220.Alignment);
    if ( LOWORD(stru_140328220.Alignment) <= (unsigned int)dword_140328230 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140328220);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_1403281A0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}

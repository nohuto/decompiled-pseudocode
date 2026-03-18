/*
 * XREFs of PfTFullEventListAdd @ 0x1400FAC40
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1400FABF8 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1404D3260 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1400FAAE8 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140302660, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140302660.Alignment);
    if ( LOWORD(stru_140302660.Alignment) <= (unsigned int)dword_140302670 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140302660);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_1403025E0,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}

/*
 * XREFs of MiFreeClonePool @ 0x1400B2674
 * Callers:
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400B26D4 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiFreeClonePool()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rbx
  __int64 v2; // rdi
  PSLIST_ENTRY v3; // rsi

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(&stru_140326990);
    v1 = result;
    if ( !result )
      break;
    v2 = *((_QWORD *)&result[1].Next + 1);
    if ( v2 )
    {
      v3 = result;
      do
      {
        MiUnlockPagedAddress(v3);
        v3 += 256;
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v1, 0);
  }
  return result;
}

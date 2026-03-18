/*
 * XREFs of MiFreeClonePool @ 0x14000568C
 * Callers:
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400056EC (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiFreeClonePool()
{
  __int64 v0; // rdi
  PSLIST_ENTRY v1; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(&ListHead);
    v3 = result;
    if ( !result )
      break;
    v0 = *((_QWORD *)&result[1].Next + 1);
    if ( v0 )
    {
      v1 = result;
      do
      {
        MiUnlockPagedAddress(v1);
        v1 += 256;
        --v0;
      }
      while ( v0 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  return result;
}

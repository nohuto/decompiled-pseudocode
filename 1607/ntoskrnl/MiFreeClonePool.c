/*
 * XREFs of MiFreeClonePool @ 0x1400B47F4
 * Callers:
 *     MiProcessDereferenceList @ 0x14012259C (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x140141554 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400B4854 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
    result = RtlpInterlockedPopEntrySList(&stru_140326950);
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

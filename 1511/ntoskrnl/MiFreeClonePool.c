/*
 * XREFs of MiFreeClonePool @ 0x1400F31C4
 * Callers:
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1400F3224 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiFreeClonePool()
{
  __int64 v0; // rdi
  PSLIST_ENTRY v1; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rbx

  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(&stru_1402FE670);
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

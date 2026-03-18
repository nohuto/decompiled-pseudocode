/*
 * XREFs of KeAllocateInterrupt @ 0x14012CF1C
 * Callers:
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 */

PSLIST_ENTRY __fastcall KeAllocateInterrupt(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  unsigned __int16 v3; // bx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // r14d
  struct _SLIST_ENTRY *v6; // rbx
  __int64 v7; // rsi

  v1 = a1 + 1534;
  v3 = *(_WORD *)(a1[100].Alignment + 146);
  result = RtlpInterlockedPopEntrySList(a1 + 1534);
  if ( result )
  {
LABEL_2:
    result[16].Next = (_SLIST_ENTRY *)a1;
  }
  else
  {
    v5 = v3;
    while ( 1 )
    {
      result = (PSLIST_ENTRY)MmAllocateIndependentPages(4096LL, v5);
      v6 = result;
      if ( !result )
        break;
      v7 = 12LL;
      do
      {
        RtlpInterlockedPushEntrySList(v1, v6);
        v6 += 20;
        --v7;
      }
      while ( v7 );
      result = RtlpInterlockedPopEntrySList(v1);
      if ( result )
        goto LABEL_2;
    }
  }
  return result;
}

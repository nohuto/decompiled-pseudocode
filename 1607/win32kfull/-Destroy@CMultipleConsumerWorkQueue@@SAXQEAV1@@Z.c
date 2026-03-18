/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0131228
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C0127DDC (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C0127E58 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 *     UmfdSessionUninitialize @ 0x1C0133890 (UmfdSessionUninitialize.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C0131288 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02DC408 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(struct CMultipleConsumerWorkQueue *const a1)
{
  struct CWorkItemQueue *v2; // rcx
  union _SLIST_HEADER *v3; // rsi
  PSLIST_ENTRY v4; // rdi
  struct CEventPool::CEventPoolEntry *v5; // rcx

  v2 = *(struct CWorkItemQueue **)a1;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = (union _SLIST_HEADER *)*((_QWORD *)a1 + 1);
  if ( v3 )
  {
    v4 = ExpInterlockedFlushSList(v3 + 1);
    while ( v4 )
    {
      v5 = (struct CEventPool::CEventPoolEntry *)v4;
      v4 = v4->Next;
      CEventPool::CEventPoolEntry::Destroy(v5);
    }
    EngFreeMem(v3);
  }
  EngFreeMem(a1);
}

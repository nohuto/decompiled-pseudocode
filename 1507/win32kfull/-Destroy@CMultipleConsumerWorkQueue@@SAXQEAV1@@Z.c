/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C013108C
 * Callers:
 *     UmfdSessionUninitialize @ 0x1C0131800 (UmfdSessionUninitialize.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C014E7CC (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C014E848 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01310EC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02D7F58 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
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

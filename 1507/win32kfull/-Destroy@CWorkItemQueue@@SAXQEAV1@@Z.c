/*
 * XREFs of ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01310EC
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C013108C (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x1C014E8DC (-Create@CWorkItemQueue@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0131134 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CWorkItemQueue::Destroy(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v2; // rbx
  struct CManualResetEvent *Region; // rcx
  PSLIST_ENTRY v4; // rcx

  v2 = ExpInterlockedFlushSList(a1 + 1);
  while ( v2 )
  {
    v4 = v2;
    v2 = v2->Next;
    EngFreeMem(v4);
  }
  Region = (struct CManualResetEvent *)a1->Region;
  if ( Region )
    CManualResetEvent::Destroy(Region);
  EngFreeMem(a1);
}

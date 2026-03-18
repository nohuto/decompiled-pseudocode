/*
 * XREFs of ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x1C014E8DC
 * Callers:
 *     ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1C014E848 (-Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C01310EC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C014E940 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 */

union _SLIST_HEADER *CWorkItemQueue::Create(void)
{
  union _SLIST_HEADER *result; // rax
  union _SLIST_HEADER *v1; // rdi
  union _SLIST_HEADER *v2; // rbx
  struct CManualResetEvent *v3; // rax

  result = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
  v1 = result;
  if ( result )
  {
    v2 = result;
    InitializeSListHead(result + 1);
    LOBYTE(v2->Alignment) = 0;
    v3 = CManualResetEvent::Create();
    v2->Region = (ULONGLONG)v3;
    if ( v3 )
      v2 = 0LL;
    else
      v1 = 0LL;
    if ( v2 )
      CWorkItemQueue::Destroy(v2);
    return v1;
  }
  return result;
}

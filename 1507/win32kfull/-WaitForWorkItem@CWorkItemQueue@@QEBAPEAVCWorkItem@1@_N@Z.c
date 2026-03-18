/*
 * XREFs of ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z @ 0x1C02D8060
 * Callers:
 *     ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D5710 (-UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z.c)
 * Callees:
 *     <none>
 */

struct CWorkItemQueue::CWorkItem *__fastcall CWorkItemQueue::WaitForWorkItem(CWorkItemQueue *this)
{
  union _SLIST_HEADER *v1; // rdi
  struct CWorkItemQueue::CWorkItem *result; // rax
  PSLIST_ENTRY v4; // rsi

  v1 = (union _SLIST_HEADER *)((char *)this + 16);
  result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 1);
  if ( !result && !*(_BYTE *)this )
  {
    while ( 1 )
    {
      if ( KeWaitForSingleObject(**((PVOID **)this + 1), UserRequest, 1, 0, 0LL) == 192 )
      {
LABEL_8:
        KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
        return (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(v1);
      }
      result = (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(v1);
      if ( result )
        return result;
      if ( *(_BYTE *)this )
        return (struct CWorkItemQueue::CWorkItem *)ExpInterlockedPopEntrySList(v1);
      KeResetEvent(**((PRKEVENT **)this + 1));
      v4 = ExpInterlockedPopEntrySList(v1);
      if ( v4 )
        break;
      if ( *(_BYTE *)this )
        goto LABEL_8;
    }
    KeSetEvent(**((PRKEVENT **)this + 1), 1, 0);
    return (struct CWorkItemQueue::CWorkItem *)v4;
  }
  return result;
}

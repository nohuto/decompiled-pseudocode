/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x14016FE2C
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(struct _KQUEUE *StartContext)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
      KeRemoveQueueEx(StartContext, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}

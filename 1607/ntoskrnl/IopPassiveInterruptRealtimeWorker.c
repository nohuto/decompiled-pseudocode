/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x14014C824
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x1400A6C30 (KeRemoveQueue.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(struct _KQUEUE *StartContext)
{
  PLIST_ENTRY v2; // rax

  while ( 1 )
  {
    do
      v2 = KeRemoveQueue(StartContext, 0, 0LL);
    while ( v2 == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))v2[1].Flink)(v2[1].Blink);
  }
}

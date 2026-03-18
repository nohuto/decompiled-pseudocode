/*
 * XREFs of PopFxEmergencyWorker @ 0x14014BE58
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueue @ 0x1400A86B8 (KeRemoveQueue.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PRKQUEUE Queue)
{
  PLIST_ENTRY v2; // rax

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0x10u);
  while ( 1 )
  {
    do
      v2 = KeRemoveQueue(Queue, 0, 0LL);
    while ( v2 == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))v2[1].Flink)(v2[1].Blink);
  }
}

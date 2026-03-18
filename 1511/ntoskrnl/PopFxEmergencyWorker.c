/*
 * XREFs of PopFxEmergencyWorker @ 0x140142838
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeRemoveQueue @ 0x1400F4D38 (KeRemoveQueue.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PRKQUEUE Queue, __int64 a2, __int64 a3)
{
  PLIST_ENTRY v4; // rax

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL, a3);
  while ( 1 )
  {
    do
      v4 = KeRemoveQueue(Queue, 0, 0LL);
    while ( v4 == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))v4[1].Flink)(v4[1].Blink);
  }
}

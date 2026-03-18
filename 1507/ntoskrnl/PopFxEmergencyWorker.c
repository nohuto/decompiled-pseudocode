/*
 * XREFs of PopFxEmergencyWorker @ 0x14017045C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PKQUEUE Queue)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0x10u);
  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}

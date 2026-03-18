/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x140093658
 * Callers:
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}

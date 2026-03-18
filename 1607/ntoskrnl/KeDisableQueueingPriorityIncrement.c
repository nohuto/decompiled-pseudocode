/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14007E4EC
 * Callers:
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}

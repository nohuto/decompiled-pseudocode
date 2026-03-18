/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14002DA2C
 * Callers:
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}

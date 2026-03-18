/*
 * XREFs of PopFxComponentWork @ 0x140126870
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleWorker @ 0x1400DB03C (PopFxIdleWorker.c)
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 */

void __fastcall PopFxComponentWork(__int64 a1)
{
  do
    PopFxIdleWorker(*(_QWORD **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 80) + 208LL), 0LL, 0x20u);
}

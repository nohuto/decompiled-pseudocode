/*
 * XREFs of PopFxComponentWork @ 0x140111F94
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009DD7C (IoReleaseRemoveLockEx.c)
 *     PopFxIdleWorker @ 0x1400C178C (PopFxIdleWorker.c)
 */

void __fastcall PopFxComponentWork(__int64 a1)
{
  do
    PopFxIdleWorker(*(_QWORD **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 80) + 208LL), 0LL, 0x20u);
}

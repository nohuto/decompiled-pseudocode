/*
 * XREFs of PopFxComponentWork @ 0x14015A130
 * Callers:
 *     <none>
 * Callees:
 *     PopFxIdleWorker @ 0x140027888 (PopFxIdleWorker.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

LONG __fastcall PopFxComponentWork(__int64 a1)
{
  __int64 v2; // rcx
  LONG result; // eax

  do
    PopFxIdleWorker(*(_QWORD **)(a1 + 80), *(_DWORD *)(a1 + 16));
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 56), 0xFFFFFFFF) != 1 );
  v2 = *(_QWORD *)(a1 + 80);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 212), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 216), 0, 0);
  return result;
}

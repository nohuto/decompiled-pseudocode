/*
 * XREFs of RtlpOptimizeSRWLockList @ 0x18005F9DC
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     RtlpWakeConditionVariable @ 0x1800638F4 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x18005FA44 (RtlpWakeSRWLock.c)
 */

signed __int64 __fastcall RtlpOptimizeSRWLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rtt

  result = a2;
  if ( (a2 & 1) == 0 )
    return RtlpWakeSRWLock(a1, result, 0LL);
  while ( 1 )
  {
    v4 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
    {
      do
      {
        v5 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v5;
        v6 = v4[1];
      }
      while ( !v6 );
      if ( v4 != (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
    }
    v7 = result;
    result = _InterlockedCompareExchange64(a1, result - 4, result);
    if ( v7 == result )
      break;
    if ( (result & 1) == 0 )
      return RtlpWakeSRWLock(a1, result, 0LL);
  }
  return result;
}

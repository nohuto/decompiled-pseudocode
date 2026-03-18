/*
 * XREFs of PspLockProcessThreadListShared @ 0x140095CDC
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x140095BBC (PspNotifyProcessBackgroundTransition.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1404B9E68 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1404B9F30 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1405160D0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessThreadListShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1712);
  v3 = KeAbPreAcquire(a1 + 1712, 0LL, 0);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, v3, v2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}

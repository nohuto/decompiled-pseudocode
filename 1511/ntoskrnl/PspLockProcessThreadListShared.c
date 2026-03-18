/*
 * XREFs of PspLockProcessThreadListShared @ 0x1400143A8
 * Callers:
 *     PspNotifyProcessBackgroundTransition @ 0x1400EAFBC (PspNotifyProcessBackgroundTransition.c)
 *     PsQueryTotalCycleTimeProcess @ 0x1403B4B54 (PsQueryTotalCycleTimeProcess.c)
 *     PsQueryRuntimeProcess @ 0x1403CB688 (PsQueryRuntimeProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1403F1B44 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockProcessThreadListShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 1696);
  v3 = KeAbPreAcquire(a1 + 1696);
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

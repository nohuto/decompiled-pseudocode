/*
 * XREFs of MiLockWsSwapExclusive @ 0x1400B4084
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401F77BC (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockWsSwapExclusive(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 1040);
  result = KeAbPreAcquire(a2 + 1040, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}

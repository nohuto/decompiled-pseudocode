/*
 * XREFs of PspLockQuotaListExclusive @ 0x1401422D4
 * Callers:
 *     PspLookupProcessQuotaBlock @ 0x1403BD32C (PspLookupProcessQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14063E5B0 (PspRemoveQuotaBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockQuotaListExclusive(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a1 + 484);
  result = KeAbPreAcquire((ULONG_PTR)a2, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a2, result, (ULONG_PTR)a2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}

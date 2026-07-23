/*
 * XREFs of PspLockQuotaListShared @ 0x1400A8B8C
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x1404BB054 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockQuotaListShared(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 484);
  v3 = KeAbPreAcquire((ULONG_PTR)a2, 0LL, 0);
  result = _InterlockedCompareExchange64(a2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(a2, v3, a2);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}

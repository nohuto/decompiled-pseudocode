/*
 * XREFs of PspLockJobListShared @ 0x14068062C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockJobListShared(__int64 a1)
{
  __int64 v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&PspJobListLock, v1, (ULONG_PTR)&PspJobListLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}

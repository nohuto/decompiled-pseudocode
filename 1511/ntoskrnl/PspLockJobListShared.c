/*
 * XREFs of PspLockJobListShared @ 0x1403E9B3C
 * Callers:
 *     PspGetNextJob @ 0x1403E9A68 (PspGetNextJob.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockJobListShared(__int64 a1)
{
  __int64 v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL);
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

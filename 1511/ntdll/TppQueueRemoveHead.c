/*
 * XREFs of TppQueueRemoveHead @ 0x18008A524
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall TppQueueRemoveHead(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rdi
  volatile signed __int64 v6; // rax
  volatile signed __int64 *result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  v5 = (volatile signed __int64 *)*a1;
  v6 = **(_QWORD **)a1;
  if ( *(volatile signed __int64 **)(*a1 + 8) != a1 || *(volatile signed __int64 **)(v6 + 8) != v5 )
    __fastfail(3u);
  *a1 = v6;
  *(_QWORD *)(v6 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( v5 != a1 )
    return v5;
  return result;
}

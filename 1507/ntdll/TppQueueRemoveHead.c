/*
 * XREFs of TppQueueRemoveHead @ 0x18007F0C0
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall TppQueueRemoveHead(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rdi
  volatile signed __int64 v6; // rax
  volatile signed __int64 *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2, a2, a3, a4);
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

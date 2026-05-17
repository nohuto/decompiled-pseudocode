/*
 * XREFs of RtlResetMemoryZone @ 0x1800D1F70
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1800D1E10 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2, a3, a4);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}

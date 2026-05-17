/*
 * XREFs of RtlResetMemoryZone @ 0x1800DA490
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1800DA330 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}

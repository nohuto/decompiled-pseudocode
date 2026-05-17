/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x18004F9B4
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180051838 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockAcquire(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 48, a2, a3, a4);
}

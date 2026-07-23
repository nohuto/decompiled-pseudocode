/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x18004F9A4
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockAcquire(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 6);
}

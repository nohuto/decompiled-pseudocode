/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x180058924
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockAcquire(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  if ( ((unsigned __int8)a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 48), a2, a3, a4);
}

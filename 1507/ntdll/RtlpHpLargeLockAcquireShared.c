/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x180058A70
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180002498 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 */

signed __int64 __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax

  if ( ((unsigned __int8)a2 & 1) == 0 )
    return RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 48), a2, a3, a4);
  return result;
}

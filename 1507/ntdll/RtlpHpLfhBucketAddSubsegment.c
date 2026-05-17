/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180009118
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x180009190 (RtlpHpLfhSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006199C (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x1800721DC (RtlpHpLfhSubsegmentSetOwner.c)
 */

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v7; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = 0;
  v7 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16);
    RtlpHpLfhSubsegmentSetOwner(v7, a2);
    if ( *(_WORD *)(v7 + 32) == *(_WORD *)(v7 + 34) )
      *(_QWORD *)(v7 + 16) = 0LL;
    else
      v7 = RtlpHpLfhOwnerMoveSubsegment(a2, v7, 0LL);
    result = RtlReleaseSRWLockExclusive(a2 + 16);
  }
  if ( v7 )
  {
    if ( (a4 & 1) != 0 )
      v5 = 2;
    return RtlpHpLfhSubsegmentFree(a1, v7, a2, v5);
  }
  return result;
}

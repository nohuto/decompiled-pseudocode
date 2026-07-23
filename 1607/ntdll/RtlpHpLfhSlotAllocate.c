/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1800419B4
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x180042D80 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C38 (RtlpHpLfhSubsegmentAllocateBlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041EFC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18004D1B0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770C8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        _RTL_SRWLOCK *a3,
        unsigned int a4,
        unsigned int a5)
{
  _RTL_SRWLOCK *v5; // rbp
  __int64 v9; // rbx
  int v10; // r14d
  unsigned __int64 Value; // rdi
  int v12; // r8d
  unsigned __int16 v13; // cx
  int v14; // eax
  __int64 Block; // rsi
  unsigned __int64 *v17; // rbx
  int v18; // [rsp+60h] [rbp+18h]

  v5 = a3 + 2;
  v18 = 0;
  v9 = 0LL;
  v10 = 1;
  RtlAcquireSRWLockShared(a3 + 2);
  while ( 1 )
  {
    while ( !a3[1].Value )
    {
      if ( v10 == 2 )
        RtlReleaseSRWLockExclusive(v5);
      else
        RtlReleaseSRWLockShared(v5);
      v17 = (unsigned __int64 *)&a2[3];
      if ( (unsigned __int64 *)*v17 == v17
        || ((RtlAcquireSRWLockExclusive(a2 + 2), (unsigned __int64 *)*v17 == v17)
          ? (v9 = 0LL)
          : (v9 = RtlpHpLfhOwnerMoveSubsegment(a2, *v17, 2LL)),
            RtlReleaseSRWLockExclusive(a2 + 2),
            !v9) )
      {
        v9 = RtlpHpLfhSubsegmentCreate(a1, a2, a5);
        if ( !v9 )
        {
          Block = 0LL;
          goto LABEL_14;
        }
      }
      v10 = 2;
      RtlAcquireSRWLockExclusive(v5);
      RtlpHpLfhSubsegmentSetOwner(v9, a3);
      if ( a3[1].Value && *(_WORD *)(v9 + 32) == *(_WORD *)(v9 + 34) )
        *(_QWORD *)(v9 + 16) = 0LL;
      else
        v9 = RtlpHpLfhOwnerMoveSubsegment(a3, v9, 0LL);
    }
    Value = a3[3].Value;
    if ( (_RTL_SRWLOCK *)Value != &a3[3] )
    {
      while ( 2 )
      {
        LOWORD(v12) = *(_WORD *)(Value + 32);
        v18 = 0;
        while ( (_WORD)v12 != 1 || v10 != 1LL )
        {
          v13 = v12 - 1;
          v12 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(Value + 32), v12 - 1, v12);
          v14 = v13 + 1;
          if ( v12 == v14 )
          {
            if ( !*(_WORD *)(Value + 32) )
              RtlpHpLfhOwnerMoveSubsegment(a3, Value, 1LL);
            goto LABEL_9;
          }
          if ( v12 < v14 )
            v18 = 1;
        }
        Value = *(_QWORD *)Value;
        if ( (_RTL_SRWLOCK *)Value != &a3[3] )
          continue;
        break;
      }
    }
    Value = 0LL;
LABEL_9:
    if ( v10 == 2 )
      RtlReleaseSRWLockExclusive(v5);
    else
      RtlReleaseSRWLockShared(v5);
    if ( Value )
      break;
    v10 = 2;
    RtlAcquireSRWLockExclusive(v5);
  }
  Block = RtlpHpLfhSubsegmentAllocateBlock(a1, a3, Value, a4);
  if ( !Block )
    RtlpHpLfhSubsegmentFreeBlock(a1, Value, 0LL, a5);
LABEL_14:
  if ( v18 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( v9 )
    RtlpHpLfhBucketAddSubsegment(a1, a2, v9, a5);
  return Block;
}

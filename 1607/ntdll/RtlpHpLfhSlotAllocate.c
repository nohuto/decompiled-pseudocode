/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1800419C4
 * Callers:
 *     RtlpHpLfhContextAllocate @ 0x180042D90 (RtlpHpLfhContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C48 (RtlpHpLfhSubsegmentAllocateBlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180041F0C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB90 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18004D1C0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770D8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089210 (RtlpHpLfhSubsegmentFreeBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  volatile signed __int64 *v5; // rbp
  __int64 v9; // rbx
  int v10; // r14d
  __int64 *v11; // rdi
  int v12; // r8d
  unsigned __int16 v13; // cx
  int v14; // eax
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 Block; // rsi
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rbx
  char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+60h] [rbp+18h]

  v5 = (volatile signed __int64 *)(a3 + 16);
  v27 = 0;
  v9 = 0LL;
  v10 = 1;
  RtlAcquireSRWLockShared(a3 + 16);
  while ( 1 )
  {
    while ( !*(_QWORD *)(a3 + 8) )
    {
      if ( v10 == 2 )
        RtlReleaseSRWLockExclusive(v5);
      else
        RtlReleaseSRWLockShared(v5);
      v23 = (_QWORD *)(a2 + 24);
      if ( (_QWORD *)*v23 == v23
        || ((RtlAcquireSRWLockExclusive(a2 + 16, v20, v21, v22), (_QWORD *)*v23 == v23)
          ? (v9 = 0LL)
          : (v9 = RtlpHpLfhOwnerMoveSubsegment(a2, *v23, 2LL)),
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16)),
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
      RtlAcquireSRWLockExclusive((unsigned __int64)v5, v24, v25, v26);
      RtlpHpLfhSubsegmentSetOwner(v9, a3);
      if ( *(_QWORD *)(a3 + 8) && *(_WORD *)(v9 + 32) == *(_WORD *)(v9 + 34) )
        *(_QWORD *)(v9 + 16) = 0LL;
      else
        v9 = RtlpHpLfhOwnerMoveSubsegment(a3, v9, 0LL);
    }
    v11 = *(__int64 **)(a3 + 24);
    if ( v11 != (__int64 *)(a3 + 24) )
    {
      while ( 2 )
      {
        LOWORD(v12) = *((_WORD *)v11 + 16);
        v27 = 0;
        while ( (_WORD)v12 != 1 || v10 != 1LL )
        {
          v13 = v12 - 1;
          v12 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v11 + 16, v12 - 1, v12);
          v14 = v13 + 1;
          if ( v12 == v14 )
          {
            if ( !*((_WORD *)v11 + 16) )
              RtlpHpLfhOwnerMoveSubsegment(a3, v11, 1LL);
            goto LABEL_9;
          }
          if ( v12 < v14 )
            v27 = 1;
        }
        v11 = (__int64 *)*v11;
        if ( v11 != (__int64 *)(a3 + 24) )
          continue;
        break;
      }
    }
    v11 = 0LL;
LABEL_9:
    if ( v10 == 2 )
      RtlReleaseSRWLockExclusive(v5);
    else
      RtlReleaseSRWLockShared(v5);
    if ( v11 )
      break;
    v10 = 2;
    RtlAcquireSRWLockExclusive((unsigned __int64)v5, v15, v16, v17);
  }
  Block = RtlpHpLfhSubsegmentAllocateBlock(a1, a3, v11, a4);
  if ( !Block )
    RtlpHpLfhSubsegmentFreeBlock(a1, v11, 0LL, a5);
LABEL_14:
  if ( v27 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( v9 )
    RtlpHpLfhBucketAddSubsegment(a1, a2, v9, a5);
  return Block;
}

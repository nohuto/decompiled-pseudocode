/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x180089200
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegFree @ 0x18004C910 (RtlpHpSegFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18001D3B8 (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18004C390 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  int v7; // r10d
  int v8; // r12d
  unsigned int v10; // edi
  _RTL_SRWLOCK *v11; // rbp
  int v12; // eax
  int v13; // r14d
  int v14; // esi
  int v15; // ecx
  __int64 *v16; // rbx
  __int16 v18; // ax
  unsigned __int64 v19; // r9
  int v20; // esi
  unsigned __int64 Value; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // r8
  int v24; // edx
  char v25; // cl
  unsigned __int16 v26; // [rsp+68h] [rbp+10h]

  v6 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v26 = v6;
  v7 = a3;
  v8 = 2;
  v10 = 1;
  v11 = 0LL;
  if ( !a3 )
  {
LABEL_6:
    v13 = *(unsigned __int16 *)(a2 + 34);
    LOWORD(v14) = *(_WORD *)(a2 + 32);
    do
    {
      if ( !v11 && (!(_WORD)v14 || (unsigned __int16)v14 == v13 - 1) )
      {
        v11 = RtlpHpLfhSubsegmentLockOwner(a2);
        if ( !v11 )
          return v10;
      }
      v15 = (unsigned __int16)(v14 + 1) - 1;
      v14 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 32), v14 + 1, v14);
    }
    while ( v14 != v15 );
    if ( (_WORD)v14 )
    {
      if ( (unsigned __int16)v14 != v13 - 1 )
      {
LABEL_15:
        if ( v11 )
          RtlReleaseSRWLockExclusive(v11 + 2);
        return v10;
      }
    }
    else
    {
      v8 = 0;
    }
    v16 = RtlpHpLfhOwnerMoveSubsegment((__int64)v11, (__int64 *)a2, v8);
    RtlReleaseSRWLockExclusive(v11 + 2);
    v11 = 0LL;
    if ( v16 )
      RtlpHpLfhBucketAddSubsegment(
        a1,
        (_RTL_SRWLOCK *)a1[(unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v26 + 15) >> 4] + 24].Value,
        (__int64)v16,
        a4);
    goto LABEL_15;
  }
  v20 = (unsigned __int16)v6;
  Value = a1[(unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v6 + 15) >> 4]
           + 24].Value;
  v22 = a3 - HIWORD(v6) - a2;
  if ( *(_DWORD *)(Value + 72) )
  {
    v23 = (v22 * (unsigned __int64)*(unsigned int *)(Value + 72)) >> *(_BYTE *)(Value + 76);
    v24 = v22 - v23 * (unsigned __int16)v6;
  }
  else
  {
    v25 = *(_BYTE *)(Value + 76);
    LODWORD(v23) = v22 >> v25;
    v24 = ((1 << v25) - 1) & v22;
  }
  if ( v24 )
  {
    return 0;
  }
  else
  {
    if ( *(_WORD *)(a2 + 36) >= (unsigned __int16)v23 )
      v18 = v23;
    else
      v18 = *(_WORD *)(a2 + 36);
    *(_WORD *)(a2 + 36) = v18;
    v19 = (unsigned __int64)(unsigned int)(2 * v23) >> 6;
    _m_prefetchw((const void *)(a2 + 8 * v19 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64(
                               (volatile signed __int64 *)(a2 + 8 * v19 + 48),
                               ~(3LL << ((2 * v23) & 0x3F))) >> ((2 * v23) & 0x3F)) & 1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 45) > 1u )
      {
        v12 = RtlpHpLfhSubsegmentDecBlockCounts(a2, v7 - (int)a2, v20);
        if ( v12 != -1 )
          RtlpHpLfhSubsegmentDecommitPages(a1, a2, v12, 2u, a4);
      }
      goto LABEL_6;
    }
    RtlpLogHeapFailure(16, a1->Value, v7, a2, (unsigned int)v23, 0LL);
    return 0;
  }
}

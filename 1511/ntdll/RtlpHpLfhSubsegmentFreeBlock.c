/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548
 * Callers:
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x18001B87C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18001F024 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x18002E064 (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // eax
  unsigned __int8 *v7; // rdx
  int v8; // r10d
  unsigned int v9; // r12d
  unsigned int v11; // edi
  _RTL_SRWLOCK *v12; // rbp
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int64 v16; // r8
  int v17; // edx
  char v18; // cl
  __int16 v19; // ax
  unsigned __int64 v20; // r9
  int v21; // eax
  int v22; // r14d
  int v23; // esi
  int v24; // ecx
  __int64 v25; // rbx
  unsigned __int16 v27; // [rsp+68h] [rbp+10h]

  v6 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = RtlpLfhBucketIndexMap;
  v27 = v6;
  v8 = a3;
  v9 = 2;
  v11 = 1;
  v12 = 0LL;
  if ( !a3 )
    goto LABEL_15;
  v13 = (unsigned __int16)v6;
  v14 = a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v6 + 15) >> 4] + 24];
  v15 = a3 - HIWORD(v6) - a2;
  if ( *(_DWORD *)(v14 + 72) )
  {
    v16 = (v15 * (unsigned __int64)*(unsigned int *)(v14 + 72)) >> *(_BYTE *)(v14 + 76);
    v17 = v15 - v16 * (unsigned __int16)v6;
  }
  else
  {
    v18 = *(_BYTE *)(v14 + 76);
    LODWORD(v16) = v15 >> v18;
    v17 = ((1 << v18) - 1) & v15;
  }
  if ( !v17 )
  {
    if ( *(_WORD *)(a2 + 36) >= (unsigned __int16)v16 )
      v19 = v16;
    else
      v19 = *(_WORD *)(a2 + 36);
    *(_WORD *)(a2 + 36) = v19;
    v20 = (unsigned __int64)(unsigned int)(2 * v16) >> 6;
    _m_prefetchw((const void *)(a2 + 8 * v20 + 48));
    if ( (((unsigned __int64)_InterlockedAnd64(
                               (volatile signed __int64 *)(a2 + 8 * v20 + 48),
                               ~(3LL << ((2 * v16) & 0x3F))) >> ((2 * v16) & 0x3F)) & 1) == 0 )
    {
      RtlpLogHeapFailure(16, *a1, v8, a2, (unsigned int)v16, 0LL);
      return 0;
    }
    if ( *(_BYTE *)(a2 + 45) > 1u )
    {
      v21 = RtlpHpLfhSubsegmentDecBlockCounts(a2, (unsigned int)(v8 - a2), v13);
      if ( v21 != -1 )
        RtlpHpLfhSubsegmentDecommitPages((_DWORD)a1, a2, v21, 2, a4);
    }
LABEL_15:
    v22 = *(unsigned __int16 *)(a2 + 34);
    LOWORD(v23) = *(_WORD *)(a2 + 32);
    do
    {
      if ( !v12 && (!(_WORD)v23 || (unsigned __int16)v23 == v22 - 1) )
      {
        v12 = (_RTL_SRWLOCK *)RtlpHpLfhSubsegmentLockOwner(a2, v7);
        if ( !v12 )
          return v11;
      }
      v24 = (unsigned __int16)(v23 + 1) - 1;
      v23 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 32), v23 + 1, v23);
    }
    while ( v23 != v24 );
    if ( (_WORD)v23 )
    {
      if ( (unsigned __int16)v23 != v22 - 1 )
      {
LABEL_27:
        if ( v12 )
          RtlReleaseSRWLockExclusive(v12 + 2);
        return v11;
      }
    }
    else
    {
      v9 = 0;
    }
    v25 = RtlpHpLfhOwnerMoveSubsegment(v12, a2, v9);
    RtlReleaseSRWLockExclusive(v12 + 2);
    v12 = 0LL;
    if ( v25 )
      RtlpHpLfhBucketAddSubsegment(
        a1,
        a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v27 + 15) >> 4] + 24],
        v25,
        a4);
    goto LABEL_27;
  }
  return 0;
}

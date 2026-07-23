/*
 * XREFs of RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhBucketAddSubsegment @ 0x180009118 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18002752C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006199C (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1800645A4 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x1800F3474 (RtlpHpLfhSubsegmentLockOwner.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFreeBlock(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  int v6; // eax
  unsigned __int8 *v7; // rdx
  int v9; // r12d
  unsigned int v11; // edi
  _RTL_SRWLOCK *v12; // rbp
  int v13; // esi
  unsigned __int64 Value; // rcx
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
  __int64 *v25; // rbx
  unsigned __int16 v27; // [rsp+68h] [rbp+10h]

  v6 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = RtlpLfhBucketIndexMap;
  v27 = v6;
  v9 = 2;
  v11 = 1;
  v12 = 0LL;
  if ( !a3 )
    goto LABEL_15;
  v13 = (unsigned __int16)v6;
  Value = a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v6 + 15) >> 4] + 24].Value;
  v15 = a3 - HIWORD(v6) - a2;
  if ( *(_DWORD *)(Value + 72) )
  {
    v16 = (v15 * (unsigned __int64)*(unsigned int *)(Value + 72)) >> *(_BYTE *)(Value + 76);
    v17 = v15 - v16 * (unsigned __int16)v6;
  }
  else
  {
    v18 = *(_BYTE *)(Value + 76);
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
      RtlpLogHeapFailure(16, a1->Value, a3, a2, (unsigned int)v16, 0LL);
      return 0;
    }
    if ( *(_BYTE *)(a2 + 45) > 1u )
    {
      v21 = RtlpHpLfhSubsegmentDecBlockCounts(a2, (int)a3 - (int)a2, v13);
      if ( v21 != -1 )
        RtlpHpLfhSubsegmentDecommitPages(a1, a2, v21, 2u, a4);
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
    v25 = RtlpHpLfhOwnerMoveSubsegment((__int64)v12, (__int64 *)a2, v9);
    RtlReleaseSRWLockExclusive(v12 + 2);
    v12 = 0LL;
    if ( v25 )
      RtlpHpLfhBucketAddSubsegment(
        (__int64)a1,
        (_RTL_SRWLOCK *)a1[RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)v27 + 15) >> 4] + 24].Value,
        (__int64)v25,
        a4);
    goto LABEL_27;
  }
  return 0;
}

/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x180030B30
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  char v5; // cl
  int v6; // ebp
  __int64 v7; // r10
  signed __int16 *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // r12
  signed __int16 *v12; // r14
  __int64 v13; // rdi
  signed __int16 v14; // ax
  signed __int16 v15; // tt

  v5 = *(_BYTE *)(a1 + 44);
  v6 = 0;
  v7 = a2 >> v5;
  v9 = (signed __int16 *)(a1 + *(unsigned __int16 *)(a1 + 46) + 2 * v7);
  _m_prefetchw(v9);
  v10 = -1;
  LODWORD(v11) = 0;
  v12 = &v9[((a2 + a3 - 1) >> v5) - (unsigned int)v7 + 1];
  if ( v9 < v12 )
  {
    v13 = 2 * v7;
    do
    {
      while ( 1 )
      {
        v14 = *v9;
        while ( v14 > 0 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange16(v9, v14 + 1, v14);
          if ( v15 == v14 )
            goto LABEL_6;
        }
        if ( v6 )
          break;
        v6 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
      }
      if ( v14 == -1 )
      {
        v11 = v13 >> 1;
        if ( v10 == -1 )
          v10 = v13 >> 1;
      }
      *v9 = v14 + 1;
LABEL_6:
      ++v9;
      v13 += 2LL;
    }
    while ( v9 < v12 );
    if ( v10 == -1 )
    {
      if ( v6 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    }
    else
    {
      *a4 = v11 - v10 + 1;
    }
  }
  return v10;
}

/*
 * XREFs of RtlpUpdateTagEntry @ 0x1800EAEBC
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpUpdateTagEntry(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int16 v6; // dx
  unsigned __int16 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int16 v15; // r10
  __int64 v16; // r8
  unsigned __int16 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx

  v6 = 0;
  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a5 < 2 )
  {
    if ( a2 )
    {
      if ( a2 < *(_WORD *)(a1 + 224) )
      {
        v16 = *(_QWORD *)(a1 + 232);
        if ( v16 )
        {
          v10 = v16 + 72LL * a2;
          goto LABEL_39;
        }
      }
    }
    if ( (a2 & 0x800) != 0 )
    {
      v17 = a2 & 0xF7FF;
      if ( v17 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
      {
        v18 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
        if ( v18 )
        {
          v19 = v17;
          a2 = v17 | 0x800;
          v10 = v18 + 72 * v19;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 328);
      if ( v20 )
      {
        if ( a4 >= 0x80 )
        {
          if ( a5 == 1 )
            v6 = 128;
          v15 = v6;
        }
        else
        {
          v15 = a4;
        }
        v10 = v20 + 16LL * v15;
        goto LABEL_38;
      }
    }
  }
  else if ( a2 )
  {
    if ( (a2 & 0x8000u) == 0 )
    {
      if ( (a2 & 0x800) != 0 )
      {
        v11 = a2 & 0xF7FF;
        if ( v11 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
          return 0LL;
        v12 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
        if ( !v12 )
          return 0LL;
        v13 = v11;
        a2 = v11 | 0x800;
        v10 = v12 + 72 * v13;
      }
      else
      {
        if ( a2 >= *(_WORD *)(a1 + 224) )
          return 0LL;
        v14 = *(_QWORD *)(a1 + 232);
        if ( !v14 )
          return 0LL;
        v10 = v14 + 72LL * a2;
      }
LABEL_15:
      ++*(_DWORD *)(v10 + 4);
      *(_QWORD *)(v10 + 8) -= a3;
      if ( a5 < 4 )
        return a2;
      if ( (a2 & 0x8000) != 0 )
      {
        if ( a4 >= 0x80 )
        {
          if ( a5 == 5 )
            v6 = 128;
          v15 = v6;
        }
        else
        {
          v15 = a4;
        }
        v10 = *(_QWORD *)(a1 + 328) + 16LL * v15;
LABEL_38:
        a2 = v15 | 0x8000;
      }
LABEL_39:
      ++*(_DWORD *)v10;
      *(_QWORD *)(v10 + 8) += a4;
      return a2;
    }
    v8 = a2 & 0x7FFF;
    if ( v8 < 0x81u )
    {
      v9 = *(_QWORD *)(a1 + 328);
      if ( v9 )
      {
        v10 = v9 + 16LL * v8;
        a2 = v8 | 0x8000;
        goto LABEL_15;
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of MiViewMayContainPage @ 0x14008EEB4
 * Callers:
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x1400230E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned __int64 v6; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  PVOID PoolWithTag; // rax
  void *v14; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h]
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]

  v21 = a1;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = -1;
  v6 = 0LL;
  if ( (v4 & 3) != 0 )
  {
    switch ( v4 & 3 )
    {
      case 1uLL:
        v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v10 = 0LL;
          v11 = 0LL;
        }
        else
        {
          v10 = MiStartingOffset(*(__int64 **)(a2 - 24), *(_QWORD *)(a2 - 16), 0xFFFFFFFF);
          a1 = v21;
          v11 = v10
              + (((*(unsigned int *)(a2 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 63) << 32))
                - (*(unsigned int *)(a2 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 64) << 32))
                + 1) << 12);
        }
        v4 = (*(unsigned int *)(a2 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a2 - 64) << 32)) << 12;
        break;
      case 2uLL:
        v4 &= ~2uLL;
        if ( *(_DWORD *)(a2 + 24) != -1 )
          v5 = *(_DWORD *)(a2 + 24);
        v10 = *(_QWORD *)(a2 - 40) << 12;
        v11 = v10 + *(_QWORD *)(a2 - 32);
        break;
      case 3uLL:
        v4 &= 0xFFFFFFFFFFFFFFFCuLL;
        v5 = *(_DWORD *)(a2 + 32);
        v11 = *(_QWORD *)(a2 + 24) - v4 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v20 = a1 + 128;
          v17 = a1 + 128;
          if ( v4 < qword_140326950 || v4 >= qword_140326950 + 0x8000000000LL )
            v5 = -2;
          while ( v17 )
          {
            v22 = MiStartingOffset((__int64 *)v17, *(_QWORD *)(v17 + 8), v5);
            if ( a3 < MiEndingOffsetWithLock((_QWORD *)v17) && a3 >= v22 )
            {
              v18 = *(_QWORD *)(v17 + 8);
              v19 = v18 + 8 * ((a3 - v22) >> 12);
              if ( v19 < v18 + 8 * (unsigned __int64)*(unsigned int *)(v17 + 44)
                && ((*(_WORD *)(v17 + 34) & 2) == 0 || (*(_DWORD *)(v21 + 56) & 0x4000000) == 0) )
              {
                a1 = v21;
                v4 += (__int64)(v19 - *(_QWORD *)(v20 + 8)) >> 3 << 12;
                goto LABEL_39;
              }
              return 0LL;
            }
            v17 = *(_QWORD *)(v17 + 16);
          }
          return 0LL;
        }
LABEL_39:
        v10 = 0LL;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFC0000uLL;
    v11 = v10 + ((*(_QWORD *)(a2 + 32) & 0x1FFFFLL) << 12);
    if ( !v4 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
  {
    if ( a4 > v10 && a3 < v11 )
    {
      if ( a3 >= v10 )
      {
        v16 = a3 - v10;
        v10 += v16;
        v4 += v16;
      }
      if ( a4 > v11 )
        a4 = v11;
      v12 = v4 + a4 - v10;
      goto LABEL_14;
    }
    return 0LL;
  }
  v10 = 0LL;
  v12 = v4 + 4096;
LABEL_14:
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = v4;
    *((_QWORD *)PoolWithTag + 3) = v12;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *((_QWORD *)PoolWithTag + 4) = v10;
    *((_DWORD *)PoolWithTag + 10) = v5;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(a2 + 16) & 3;
    if ( v6 )
    {
      if ( !ObReferenceObjectSafeWithTag(v6) )
      {
        ExFreePoolWithTag(v14, 0);
        return 0LL;
      }
    }
  }
  return v14;
}

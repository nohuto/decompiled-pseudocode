/*
 * XREFs of MiViewMayContainPage @ 0x140008570
 * Callers:
 *     MiTrimSection @ 0x1400083E8 (MiTrimSection.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140042340 (ObReferenceObjectSafeWithTag.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  unsigned int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+68h] [rbp+10h]

  v4 = *(_QWORD *)(a2 + 16);
  v22 = -1;
  v6 = 0LL;
  switch ( v4 & 3 )
  {
    case 0uLL:
      v10 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFC0000uLL;
      v11 = v10 + ((*(_QWORD *)(a2 + 32) & 0x1FFFFLL) << 12);
      if ( v4 )
        break;
      return 0LL;
    case 1uLL:
      v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      {
        v10 = 0LL;
        v11 = 0LL;
      }
      else
      {
        v10 = MiStartingOffset(*(_QWORD *)(a2 - 24), *(_QWORD *)(a2 - 16), 0xFFFFFFFFLL);
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
        v22 = *(_DWORD *)(a2 + 24);
      v10 = *(_QWORD *)(a2 - 40) << 12;
      v11 = v10 + *(_QWORD *)(a2 - 32);
      break;
    case 3uLL:
      v4 &= 0xFFFFFFFFFFFFFFFCuLL;
      v17 = *(_DWORD *)(a2 + 32);
      v11 = *(_QWORD *)(a2 + 24) - v4 + 1;
      v22 = v17;
      if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      {
        v18 = a1 + 120;
        if ( v4 + 0x70000000000LL > 0x7FFFFFFFFFLL )
          v17 = -2;
        v22 = v17;
        if ( a1 == -120 )
          return 0LL;
        while ( 1 )
        {
          v21 = MiStartingOffset(v18, *(_QWORD *)(v18 + 8), v17);
          if ( a3 < MiEndingOffsetWithLock(v18) && a3 >= v21 )
            break;
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v18 )
            return 0LL;
          v17 = v22;
        }
        v19 = *(_QWORD *)(v18 + 8);
        v20 = v19 + 8 * ((a3 - v21) >> 12);
        if ( v20 >= v19 + 8 * (unsigned __int64)*(unsigned int *)(v18 + 44)
          || (((*(_WORD *)(v18 + 34) & 2) != 0) & _bittest((const signed __int32 *)(a1 + 56), 0x1Au)) != 0 )
        {
          return 0LL;
        }
        v4 += (__int64)(v20 - *(_QWORD *)(a1 + 128)) >> 3 << 12;
      }
      v10 = 0LL;
      break;
    default:
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v10 = 0LL;
    v14 = v4 + 4096;
  }
  else
  {
    if ( a3 >= v11 || a4 <= v10 )
      return 0LL;
    if ( a3 >= v10 )
    {
      v13 = a3 - v10;
      v10 += v13;
      v4 += v13;
    }
    if ( a4 > v11 )
      a4 = v11;
    v14 = a4 - v10 + v4;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 10) = v22;
    *((_QWORD *)PoolWithTag + 2) = v4;
    *((_QWORD *)PoolWithTag + 3) = v14;
    *((_QWORD *)PoolWithTag + 1) = v6;
    *((_QWORD *)PoolWithTag + 4) = v10;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(a2 + 16) & 3;
    if ( v6 )
    {
      if ( !(unsigned __int8)ObReferenceObjectSafeWithTag(v6, 1953261124LL) )
      {
        ExFreePoolWithTag(v16, 0);
        return 0LL;
      }
    }
  }
  return v16;
}

/*
 * XREFs of MiObtainMdlCharges @ 0x140101B28
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiObtainMdlCharges(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  _DWORD *result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  SIZE_T v15; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rdi
  unsigned __int64 v18; // rbp

  v7 = a5;
  if ( a5 > 0xFFFFF000 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    if ( (a7 & 0x20) != 0 && a4 )
      v7 = (unsigned int)(-4096 * a4);
    else
      v7 = 4294963200LL;
  }
  v11 = (v7 + 4095) >> 12;
  if ( (a7 & 0x40) != 0
    && ((a7 & 0x20) == 0
     || a2 > 0x200
     || a3 < BugCheckParameter3
     || a6 != 1
     || a4 != 512 && a4 != 0x40000
     || ((a4 - 1) & v11) != 0) )
  {
    return 0LL;
  }
  v12 = 0LL;
  if ( (int *)a1 == MiSystemPartition )
    v12 = 1024LL;
  v13 = *(_QWORD *)(a1 + 6528) - v12;
  if ( v13 <= 0 )
    return 0LL;
  if ( v11 > v13 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v11 = *(_QWORD *)(a1 + 6528) - v12;
    if ( (a7 & 0x20) != 0 && a4 )
      v11 = v13 & ~(a4 - 1);
  }
  if ( !v11 )
    return 0LL;
  v14 = v11 >> 4;
  if ( (a7 & 0x20) != 0 && a4 )
    v14 = a4;
  v15 = 8 * v11 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x69646D4Du);
    v17 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (a7 & 4) == 0 )
    {
      if ( v14 )
      {
        if ( v11 >= v14 )
        {
          v15 -= 8 * v14;
          v11 -= v14;
          if ( v11 )
            continue;
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  PoolWithTag[11] = 0;
  PoolWithTag[10] = (_DWORD)v11 << 12;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * ((((v11 << 12) + 4095) >> 12) + 6);
  if ( !(unsigned int)MiChargeCommit(a1, v11, 1) )
  {
    ExFreePoolWithTag(v17, 0);
    return 0LL;
  }
  v18 = v11;
  if ( !(unsigned int)MiChargeResident((int *)a1, v11, v12) )
  {
    do
    {
      if ( (a7 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 6528) - v12 > 0 )
        {
          if ( v11 > *(_QWORD *)(a1 + 6528) - v12 )
            v11 = *(_QWORD *)(a1 + 6528) - v12;
        }
        else
        {
          v11 = 0LL;
        }
        if ( (a7 & 0x20) != 0 && a4 )
          v11 &= ~(a4 - 1);
        if ( v11 )
          continue;
      }
      ExFreePoolWithTag(v17, 0);
      MiReturnCommit(a1, v18);
      return 0LL;
    }
    while ( !(unsigned int)MiChargeResident((int *)a1, v11, v12) );
    if ( v11 != v18 )
      MiReturnCommit(a1, v18 - v11);
  }
  if ( (int *)a1 == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140327928, v11);
  result = v17;
  v17[10] = (_DWORD)v11 << 12;
  return result;
}

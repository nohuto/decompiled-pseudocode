/*
 * XREFs of MiObtainMdlCharges @ 0x1400BD288
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiObtainMdlCharges(
        unsigned __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  SIZE_T v14; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rsi
  _DWORD *result; // rax

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
  v10 = (v7 + 4095) >> 12;
  if ( (a7 & 0x40) != 0
    && ((a7 & 0x20) == 0 || a2 > 0x200 || a3 < BugCheckParameter3 || (v10 & 0x1FF) != 0 || a4 != 512 || a6 != 1) )
  {
    return 0LL;
  }
  v11 = 0LL;
  if ( (int *)a1 == MiSystemPartition )
    v11 = 1024LL;
  v12 = *(_QWORD *)(a1 + 5952) - v11;
  if ( v12 <= 0 )
    return 0LL;
  if ( v10 > v12 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v10 = *(_QWORD *)(a1 + 5952) - v11;
    if ( (a7 & 0x20) != 0 && a4 )
      v10 = v12 & ~(a4 - 1);
  }
  if ( !v10 )
    return 0LL;
  v13 = v10 >> 4;
  if ( (a7 & 0x20) != 0 && a4 )
    v13 = a4;
  v14 = 8 * v10 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x69646D4Du);
    v16 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (a7 & 4) == 0 )
    {
      if ( v13 )
      {
        if ( v10 >= v13 )
        {
          v14 -= 8 * v13;
          v10 -= v13;
          if ( v10 )
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
  PoolWithTag[10] = (_DWORD)v10 << 12;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * ((((v10 << 12) + 4095) >> 12) + 6);
  if ( !(unsigned int)MiChargeCommit(a1, v10, 1uLL) )
  {
    ExFreePoolWithTag(v16, 0);
    return 0LL;
  }
  v17 = v10;
  while ( !(unsigned int)MiChargeResident((int *)a1, v10, v11) )
  {
    if ( (a7 & 4) == 0 )
    {
      if ( *(_QWORD *)(a1 + 5952) - v11 > 0 )
      {
        if ( v10 > *(_QWORD *)(a1 + 5952) - v11 )
          v10 = *(_QWORD *)(a1 + 5952) - v11;
      }
      else
      {
        v10 = 0LL;
      }
      if ( (a7 & 0x20) != 0 && a4 )
        v10 &= ~(a4 - 1);
      if ( v10 )
        continue;
    }
    ExFreePoolWithTag(v16, 0);
    MiReturnCommit(a1, v17);
    return 0LL;
  }
  if ( v10 != v17 )
    MiReturnCommit(a1, v17 - v10);
  if ( (int *)a1 == MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_1402FF470, v10);
    _InterlockedExchangeAdd64(&qword_1402FF820, v10);
  }
  result = v16;
  v16[10] = (_DWORD)v10 << 12;
  return result;
}

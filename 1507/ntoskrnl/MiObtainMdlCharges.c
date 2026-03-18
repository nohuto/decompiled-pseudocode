/*
 * XREFs of MiObtainMdlCharges @ 0x140077BF0
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  SIZE_T v13; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // rdi
  __int64 v16; // r9
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
  v11 = *(_QWORD *)(a1 + 5568) - 1024LL;
  if ( v11 <= 0 )
    return 0LL;
  if ( v10 > v11 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v10 = *(_QWORD *)(a1 + 5568) - 1024LL;
    if ( (a7 & 0x20) != 0 && a4 )
      v10 = v11 & ~(a4 - 1);
  }
  if ( !v10 )
    return 0LL;
  v12 = v10 >> 4;
  if ( (a7 & 0x20) != 0 && a4 )
    v12 = a4;
  v13 = 8 * v10 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x69646D4Du);
    v15 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (a7 & 4) == 0 )
    {
      if ( v12 )
      {
        if ( v10 >= v12 )
        {
          v13 -= 8 * v12;
          v10 -= v12;
          if ( v10 )
            continue;
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[10] = (_DWORD)v10 << 12;
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  PoolWithTag[11] = 0;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_WORD *)PoolWithTag + 4) = 8 * ((((v10 << 12) + 4095) >> 12) + 6);
  if ( !(unsigned int)MiChargeCommit(a1, v10, 1LL) )
  {
    ExFreePoolWithTag(v15, 0);
    return 0LL;
  }
  v17 = v10;
  while ( !(unsigned int)MiChargeResident((__int16 *)a1, v10, 1024LL, v16) )
  {
    if ( (a7 & 4) == 0 )
    {
      if ( *(_QWORD *)(a1 + 5568) - 1024LL > 0 )
      {
        if ( v10 > *(_QWORD *)(a1 + 5568) - 1024LL )
          v10 = *(_QWORD *)(a1 + 5568) - 1024LL;
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
    ExFreePoolWithTag(v15, 0);
    MiReturnCommit(a1, v17);
    return 0LL;
  }
  if ( v10 != v17 )
    MiReturnCommit(a1, v17 - v10);
  if ( (__int16 *)a1 == MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14034F8F0, v10);
    _InterlockedExchangeAdd64(&qword_14034FCE0, v10);
  }
  result = v15;
  v15[10] = (_DWORD)v10 << 12;
  return result;
}

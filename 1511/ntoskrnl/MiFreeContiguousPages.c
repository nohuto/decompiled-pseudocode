/*
 * XREFs of MiFreeContiguousPages @ 0x1400C1F6C
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BD4F4 (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiUnmapLargeDriver @ 0x140621B08 (MiUnmapLargeDriver.c)
 *     MmRemovePhysicalMemory @ 0x1406230A8 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x14062358C (MiRemoveMdlPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiFreeLargePageMemory @ 0x1400BDF60 (MiFreeLargePageMemory.c)
 */

unsigned __int64 __fastcall MiFreeContiguousPages(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  ULONG_PTR v5; // rsi
  __int64 v7; // rbx
  unsigned __int8 v8; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  volatile signed __int32 *v12; // r8
  int v13; // eax
  int v14; // r10d
  unsigned __int64 v15; // rcx

  v3 = 0LL;
  v5 = a2;
  v7 = 48 * a2 - 0x58000000000LL;
  do
  {
    if ( (v5 & 0x1FF) == 0 && a3 >= 0x200 )
    {
      LOBYTE(v10) = 1;
      v11 = (v5 >> 9) & 0x1F;
      v12 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v5 >> 14));
      if ( (unsigned __int64)(v11 + 1) > 0x20 )
      {
        if ( v11 )
        {
          v14 = (v5 >> 9) & 0x1F;
          _InterlockedAnd(v12++, ~(((1 << (32 - v14)) - 1) << v11));
          v10 = 1LL - (unsigned int)(32 - v14);
          if ( v10 >= 0x20 )
          {
            v15 = v10 >> 5;
            v10 += -32LL * (v10 >> 5);
            do
            {
              *v12++ = 0;
              --v15;
            }
            while ( v15 );
          }
          if ( !v10 )
            goto LABEL_22;
        }
        v13 = (1 << v10) - 1;
      }
      else
      {
        v13 = 1 << v11;
      }
      _InterlockedAnd(v12, ~v13);
LABEL_22:
      result = MiFreeLargePageMemory(v5);
      v3 += result;
      v5 += 512LL;
      v7 += 24576LL;
      a3 -= 512LL;
      continue;
    }
    v8 = MiLockPageInline(v7);
    if ( --*(_WORD *)(v7 + 32) == 1 )
      ++v3;
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    MiDecrementShareCount(v7);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v8;
    __writecr8(v8);
    v7 += 48LL;
    ++v5;
    --a3;
  }
  while ( a3 );
  if ( v3 )
  {
    if ( (int *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v3);
      _InterlockedExchangeAdd64(&qword_1402FF4C8, v3);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v3);
    }
    return MiReturnCommit(a1, v3);
  }
  return result;
}

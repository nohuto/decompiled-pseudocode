/*
 * XREFs of MiFreeContiguousPages @ 0x14011191C
 * Callers:
 *     MmFreeContiguousMemory @ 0x14009ABB8 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x14009AF40 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2344 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x1404ED9A4 (MiUseLargeDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x140658508 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406589E8 (MiRemoveMdlPages.c)
 *     MiUnmapLargeDriver @ 0x140662F2C (MiUnmapLargeDriver.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140090970 (MiFreeLargePageMemory.c)
 *     MiDecrementShareCount @ 0x1400E50A0 (MiDecrementShareCount.c)
 */

unsigned __int64 __fastcall MiFreeContiguousPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 result; // rax
  unsigned __int8 v9; // r15

  v4 = a2;
  v6 = 0LL;
  v7 = 48 * a2 - 0x58000000000LL;
  do
  {
    if ( (v4 & 0x1FF) != 0 || a3 < 0x200 )
    {
      v9 = MiLockPageInline(v7);
      if ( --*(_WORD *)(v7 + 32) == 1 )
        ++v6;
      *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
      MiDecrementShareCount(v7);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v9;
      __writecr8(v9);
      v7 += 48LL;
      ++v4;
      --a3;
    }
    else
    {
      result = MiFreeLargePageMemory(v4, 1, 0);
      v6 += result;
      v4 += 512LL;
      v7 += 24576LL;
      a3 -= 512LL;
    }
  }
  while ( a3 );
  if ( v6 )
  {
    if ( (int *)a1 == MiSystemPartition )
      MiReturnResidentAvailable(v6);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), v6);
    return MiReturnCommit(a1, v6);
  }
  return result;
}

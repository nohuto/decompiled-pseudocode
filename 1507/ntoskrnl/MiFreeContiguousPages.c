/*
 * XREFs of MiFreeContiguousPages @ 0x140114BDC
 * Callers:
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140114E20 (MiAllocateContiguousMemory.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140213164 (MmMarkPhysicalMemoryAsBad.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiUnmapLargeDriver @ 0x1406A1198 (MiUnmapLargeDriver.c)
 *     MmRemovePhysicalMemory @ 0x1406A228C (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiFreeLargePageMemory @ 0x1400FF890 (MiFreeLargePageMemory.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeContiguousPages(__int64 a1, ULONG_PTR a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  ULONG_PTR v5; // r14
  volatile signed __int32 *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  unsigned int v10; // ebp
  __int64 v11; // r8
  char v12; // al
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  volatile signed __int32 *v16; // r8
  int v17; // eax
  int v18; // r10d
  unsigned __int64 v19; // rcx

  v3 = 0LL;
  v4 = 48 * a2 - 0x58000000000LL;
  v5 = a2;
  v8 = (volatile signed __int32 *)(v4 + 24);
  do
  {
    if ( (v5 & 0x1FF) == 0 && a3 >= 0x200 )
    {
      LOBYTE(v14) = 1;
      v15 = (v5 >> 9) & 0x1F;
      v16 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v5 >> 14));
      if ( (unsigned __int64)(v15 + 1) > 0x20 )
      {
        if ( v15 )
        {
          v18 = (v5 >> 9) & 0x1F;
          _InterlockedAnd(v16++, ~(((1 << (32 - v18)) - 1) << v15));
          v14 = 1LL - (unsigned int)(32 - v18);
          if ( v14 >= 0x20 )
          {
            v19 = v14 >> 5;
            v14 += -32LL * (v14 >> 5);
            do
            {
              *v16++ = 0;
              --v19;
            }
            while ( v19 );
          }
          if ( !v14 )
            goto LABEL_26;
        }
        v17 = (1 << v14) - 1;
      }
      else
      {
        v17 = 1 << v15;
      }
      _InterlockedAnd(v16, ~v17);
LABEL_26:
      result = MiFreeLargePageMemory(v5);
      v3 += result;
      v5 += 512LL;
      v4 += 24576LL;
      v8 += 6144;
      a3 -= 512LL;
      continue;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    if ( _interlockedbittestandset64(v8, 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *(__int64 *)v8 < 0 || _interlockedbittestandset64(v8, 0x3FuLL) );
    }
    if ( --*(_WORD *)(v4 + 32) == 1 )
      ++v3;
    v11 = *(_QWORD *)v8 | 0x4000000000000000LL;
    v12 = *(_BYTE *)(v4 + 34) & 7;
    *(_QWORD *)v8 = v11;
    if ( v12 != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v4 + 0x58000000000LL) / 48, *(_BYTE *)(v4 + 34) & 7, v11 & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)v8 = v11 ^ (((v11 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v11) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v11 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiPfnShareCountIsZero(v4, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    v4 += 48LL;
    v8 += 12;
    ++v5;
    --a3;
  }
  while ( a3 );
  if ( v3 )
  {
    if ( (__int16 *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v3);
      _InterlockedExchangeAdd64(&qword_14034F948, v3);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v3);
    }
    return MiReturnCommit(a1, v3);
  }
  return result;
}

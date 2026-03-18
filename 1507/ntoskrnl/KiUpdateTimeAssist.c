/*
 * XREFs of KiUpdateTimeAssist @ 0x1400A3B90
 * Callers:
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     KeSynchronizeTimeToQpc @ 0x14014CA10 (KeSynchronizeTimeToQpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateTimeAssist(LARGE_INTEGER *a1, __int64 a2, __int64 a3)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int8 CpuVendor; // cl
  __int64 v9; // r9
  unsigned __int128 v10; // rax
  LONGLONG v11; // rdx
  __int64 v12; // r11
  LONGLONG v13; // rdx
  unsigned __int128 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // rdx
  volatile CCHAR v18; // t1
  unsigned __int64 v19; // rdx
  __int64 result; // rax

  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v5 = MEMORY[0xFFFFF78000000340];
  while ( (v5 & 1) != 0 )
  {
    v5 = MEMORY[0xFFFFF78000000340];
LABEL_7:
    _mm_pause();
  }
  v6 = v5;
  v5 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v5 + 1, v5);
  if ( v6 != v5 )
    goto LABEL_7;
  if ( a1 )
  {
    PerformanceCounter = *a1;
  }
  else
  {
    CpuVendor = KeGetCurrentPrcb()->CpuVendor;
    if ( CpuVendor == 2 )
    {
      _mm_lfence();
    }
    else if ( CpuVendor == 1 )
    {
      _mm_mfence();
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v9 = 0LL;
  *((_QWORD *)&v10 + 1) = 0LL;
  if ( PerformanceCounter.QuadPart > MEMORY[0xFFFFF78000000348] )
  {
    v11 = PerformanceCounter.QuadPart - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v11 <<= MEMORY[0xFFFFF78000000368];
    v10 = (unsigned __int64)v11 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    KiSystemTimeErrorAccumulator += v10;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v10 )
      ++*((_QWORD *)&v10 + 1);
  }
  v12 = *((_QWORD *)&v10 + 1) + MEMORY[0xFFFFF78000000014];
  if ( PerformanceCounter.QuadPart > MEMORY[0xFFFFF78000000350] )
  {
    v13 = PerformanceCounter.QuadPart - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v13 <<= MEMORY[0xFFFFF78000000369];
    v14 = (unsigned __int64)v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    KiInterruptTimeErrorAccumulator += v14;
    v9 = *((_QWORD *)&v14 + 1);
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v14 )
      v9 = *((_QWORD *)&v14 + 1) + 1LL;
  }
  *(_QWORD *)a2 = MEMORY[0xFFFFF78000000008] + v9;
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v12);
  MEMORY[0xFFFFF78000000014] = v12;
  MEMORY[0xFFFFF78000000010] = *(_DWORD *)(a2 + 4);
  MEMORY[0xFFFFF78000000008] = *(_QWORD *)a2;
  MEMORY[0xFFFFF78000000348] = PerformanceCounter.QuadPart;
  MEMORY[0xFFFFF78000000350] = PerformanceCounter.QuadPart;
  v15 = MEMORY[0xFFFFF78000000320];
  v16 = (unsigned int)KiTickOffset - v9;
  *(_QWORD *)a3 = MEMORY[0xFFFFF78000000320];
  if ( v16 <= 0 )
  {
    v17 = 1LL;
    v16 += KeMaximumIncrement;
    if ( v16 <= 0 )
    {
      v18 = KeNumberProcessorsGroup0[1];
      v19 = ((unsigned __int64)(((unsigned __int64)-v16
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v18)
          + 1;
      LODWORD(v16) = v19 * KeMaximumIncrement + v16;
      v17 = v19 + 1;
    }
    *(_QWORD *)a3 = v15 + v17;
    MEMORY[0xFFFFF78000000328] = *(_DWORD *)(a3 + 4);
    MEMORY[0xFFFFF78000000320] = *(_QWORD *)a3;
  }
  result = ++MEMORY[0xFFFFF78000000340];
  KiTickOffset = v16;
  return result;
}

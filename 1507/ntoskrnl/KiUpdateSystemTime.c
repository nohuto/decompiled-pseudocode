/*
 * XREFs of KiUpdateSystemTime @ 0x140155160
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1401549C4 (KiSetSystemTimeDpc.c)
 *     KeSetTimeAdjustment @ 0x140200164 (KeSetTimeAdjustment.c)
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x140139E40 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiUpdateSystemTime(__int64 a1, __int64 a2, char a3)
{
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int128 v7; // rax
  LONGLONG v8; // rdx
  LARGE_INTEGER v9; // rcx
  __int64 result; // rax
  __int16 v11; // [rsp+30h] [rbp-8h]

  _disable();
  RtlWriteAcquireTickLock((signed __int64 *)0xFFFFF78000000340LL);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_QWORD *)&v7 + 1) = 0LL;
  if ( PerformanceCounter.QuadPart > MEMORY[0xFFFFF78000000348] )
  {
    v8 = PerformanceCounter.QuadPart - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v8 <<= MEMORY[0xFFFFF78000000368];
    v7 = (unsigned __int64)v8 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    KiSystemTimeErrorAccumulator += v7;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v7 )
      ++*((_QWORD *)&v7 + 1);
  }
  v9.QuadPart = *((_QWORD *)&v7 + 1) + MEMORY[0xFFFFF78000000014];
  if ( a1 )
  {
    KiSystemTimeErrorAccumulator = 0LL;
    v9.QuadPart = a1 + MEMORY[0xFFFFF78000000014];
  }
  MEMORY[0xFFFFF78000000348] = PerformanceCounter.QuadPart;
  MEMORY[0xFFFFF7800000001C] = v9.HighPart;
  MEMORY[0xFFFFF78000000014] = v9.QuadPart;
  if ( a2 )
  {
    MEMORY[0xFFFFF78000000358] = *(_QWORD *)(a2 + 8);
    MEMORY[0xFFFFF78000000368] = *(_BYTE *)(a2 + 16);
  }
  result = ++MEMORY[0xFFFFF78000000340];
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) != 0 )
    {
      KeBootTimeBias = 0LL;
      KeBootTime = v9;
    }
    else
    {
      KeBootTime.QuadPart += a1;
      KeBootTimeBias += a1;
    }
  }
  if ( (v11 & 0x200) != 0 )
    _enable();
  return result;
}

/*
 * XREFs of KiSetupTimeIncrement @ 0x14014A4F8
 * Callers:
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 * Callees:
 *     RtlGenerateQpcToIncrementConstants @ 0x140136920 (RtlGenerateQpcToIncrementConstants.c)
 *     RtlpComputeFraction @ 0x140136950 (RtlpComputeFraction.c)
 */

__int64 __fastcall KiSetupTimeIncrement(unsigned __int64 a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  LARGE_INTEGER v8; // rbx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 5000;
  if ( a2 > 0x1388 )
    v3 = a2;
  v5 = 156250;
  KeMinimumIncrement = v3;
  if ( a1 < 0x2625A )
    v5 = a1;
  v6 = KiMinDynamicTickDuration;
  KeMaximumIncrement = v5;
  if ( a2 > KiMinDynamicTickDuration )
  {
    v6 = a2;
    KiMinDynamicTickDuration = a2;
  }
  v7 = KiMaxDynamicTickDuration;
  if ( a1 < KiMaxDynamicTickDuration )
  {
    v7 = a1;
    KiMaxDynamicTickDuration = a1;
  }
  if ( v7 < v6 )
    KiMaxDynamicTickDuration = v6;
  KeTimeAdjustment = v5;
  KiTickOffset = v5;
  KiMaximumIncrementReciprocal = RtlpComputeFraction(1u, v5, &v12);
  KeNumberProcessorsGroup0[1] = -v12;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = RtlGenerateQpcToIncrementConstants(PerformanceFrequency.LowPart, &v12);
  MEMORY[0xFFFFF78000000300] = PerformanceFrequency.QuadPart;
  MEMORY[0xFFFFF78000000360] = v9;
  MEMORY[0xFFFFF78000000369] = v12;
  MEMORY[0xFFFFF78000000358] = v9;
  MEMORY[0xFFFFF78000000368] = v12;
  MEMORY[0xFFFFF78000000348] = v8.QuadPart;
  MEMORY[0xFFFFF78000000350] = v8.QuadPart;
  result = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerPeriod = 0x989680 / KeMaximumIncrement;
  KiBalanceSetManagerCount = 0x989680 / KeMaximumIncrement;
  return result;
}

/*
 * XREFs of KiBeginCounterAccumulation @ 0x1401C7ED8
 * Callers:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     KiEndDebugAccumulation @ 0x1401C909C (KiEndDebugAccumulation.c)
 *     KeEnableProfiling @ 0x14061A98C (KeEnableProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiBeginCounterAccumulation(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // r9
  unsigned int *v5; // r10
  __int64 v6; // rsi
  _QWORD *v7; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v3 )
  {
    v4 = 1LL;
    if ( KiHwCountersCount )
    {
      v5 = (unsigned int *)&KiHwCounters;
      v6 = (unsigned int)KiHwCountersCount;
      v7 = (_QWORD *)(v2 + 48);
      do
      {
        if ( (v4 & v3) != 0 )
          *v7 = __readpmc(*v5);
        v4 *= 2LL;
        v7 += 3;
        ++v5;
        --v6;
      }
      while ( v6 );
    }
  }
  result = *(unsigned int *)(v2 + 16);
  if ( (result & 1) != 0 )
  {
    if ( a2 )
    {
      ++*(_DWORD *)(v2 + 20);
      result = *(unsigned __int8 *)(a1 + 643);
      *(_QWORD *)v2 |= 1LL << result;
    }
  }
  return result;
}

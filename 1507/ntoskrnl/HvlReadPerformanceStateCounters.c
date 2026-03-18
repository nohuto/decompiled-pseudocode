/*
 * XREFs of HvlReadPerformanceStateCounters @ 0x1401ED440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlReadPerformanceStateCounters(
        unsigned int a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // r11
  struct _KPRCB *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 result; // rax

  v4 = a2;
  if ( a2 < 2 )
  {
    _mm_lfence();
    if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    {
      v5 = 0LL;
    }
    else
    {
      _mm_lfence();
      v5 = (struct _KPRCB *)KiProcessorBlock[a1];
    }
    if ( KeGetCurrentPrcb() == v5 )
      __writemsr(0x400000C1u, 0LL);
    v6 = *((unsigned int *)&xmmword_140383018 + 2 * a2 + 3);
    *a3 = v5->StatisticsPage[*((unsigned int *)&xmmword_140383018 + 2 * v4 + 2)];
    result = v5->StatisticsPage[v6];
    *a4 = result;
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0LL;
  }
  return result;
}

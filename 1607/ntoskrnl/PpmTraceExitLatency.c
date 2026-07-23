/*
 * XREFs of PpmTraceExitLatency @ 0x140201210
 * Callers:
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402001F8 (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PpmTraceExitLatency(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  int v9; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+40h] [rbp-20h]
  unsigned __int64 *v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v9 = -1;
  if ( PopFxSystemLatencyLimit == -1 )
    return 0;
  if ( a5 != -1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = a5 + PpmConvertTime(PerformanceCounter.QuadPart - *a6, PopQpcFrequency, 0x989680uLL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x4000000) != 0 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    if ( a5 == -1 )
      a4 |= 4u;
    v17 = 0;
    v15 = &v12;
    v14 = v9;
    v12 = __PAIR64__(a3, a4);
    v13 = __PAIR64__(a5, a2);
    v16 = 20;
    EtwTraceKernelEvent((int)&v15, 1, 0x44000000u, 4668, 1538);
  }
  return 1;
}

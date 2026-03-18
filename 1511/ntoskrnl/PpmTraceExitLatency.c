/*
 * XREFs of PpmTraceExitLatency @ 0x1401E89C4
 * Callers:
 *     PpmIdleCompleteExitLatencyTrace @ 0x1401E7814 (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     PpmConvertTime @ 0x14009DB08 (PpmConvertTime.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PpmTraceExitLatency(__int64 a1, int a2, int a3, int a4, int a5, _QWORD *a6)
{
  int v9; // r9d
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD v12[6]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

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
    if ( a5 == -1 )
      a4 |= 4u;
    v15 = 0;
    v13 = v12;
    v12[4] = v9;
    v12[0] = a4;
    v12[1] = a3;
    v12[2] = a2;
    v12[3] = a5;
    v14 = 20;
    EtwTraceKernelEvent((int)&v13, 1, 0x44000000u, 0x123Cu, 1538);
  }
  return 1;
}

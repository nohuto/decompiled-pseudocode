/*
 * XREFs of ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01F2170
 * Callers:
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C0008D54 (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C02245A8 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 */

void __fastcall TPAAPOnKeyPress(int a1)
{
  LARGE_INTEGER v2; // rdi
  __int64 v3; // r10
  signed __int64 v4; // rax
  signed __int64 v5; // r11
  volatile __int64 *v6; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp+10h] BYREF

  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = _InterlockedCompareExchange64(&qword_1C0322DF8, 0LL, 0LL);
  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&gTPTelemTimings, 0LL, 0LL);
  if ( a1 )
  {
    if ( v3 > 0 && v4 > v3 )
    {
      v5 = _InterlockedCompareExchange64(&qword_1C0321BC8, 0LL, 0LL);
      if ( 1000 * (v4 - v3) / PerformanceFrequency.QuadPart < (unsigned int)dword_1C0322DB0
        || 1000 * (v2.QuadPart - v5) / PerformanceFrequency.QuadPart < (unsigned int)dword_1C0322DB0 )
      {
        TraceLoggingPTPKeyToGestureTiming(
          qword_1C0322DF0,
          v3,
          (const struct tagTPTELEMTIMINGS *)&gTPTelemTimings,
          v2.QuadPart,
          (TraceLoggingHProvider)PerformanceFrequency.QuadPart);
        memset(&gTPTelemTimings, 0, 0x50uLL);
        dword_1C0321BF8 = -1;
      }
    }
    v6 = &qword_1C0322DF0;
  }
  else
  {
    v6 = &qword_1C0322DF8;
  }
  _InterlockedExchange64(v6, v2.QuadPart);
}

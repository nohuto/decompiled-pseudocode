/*
 * XREFs of ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01F2434
 * Callers:
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C000BA7C (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J00W4tagPTP_ACTION@@1@Z @ 0x1C022595C (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J00W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C0225A38 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 */

void __fastcall TPAAPOnKeyPress(int a1)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // rbp
  LONGLONG v6; // rax
  __int64 v7; // rbx
  volatile __int64 *v8; // rax
  TraceLoggingHProvider hProvider; // [rsp+58h] [rbp+10h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)&hProvider);
  v3 = _InterlockedCompareExchange64(&qword_1C0323A88, 0LL, 0LL);
  v4 = _InterlockedCompareExchange64((volatile signed __int64 *)&gTPTelemTimings, 0LL, 0LL);
  if ( a1 )
  {
    if ( v3 > 0 && v4 > v3 )
    {
      v5 = 1000 * (v4 - v3) / (__int64)hProvider;
      v6 = 1000
         * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C0321C18, 0LL, 0LL))
         / (__int64)hProvider;
      v7 = v6;
      if ( !qword_1C0321C10 )
        dword_1C0321C24 = dword_1C0321C20;
      if ( v5 < 500 || v6 < 500 )
      {
        TraceLoggingPTPKeyToGestureTiming(
          qword_1C0323A80,
          v3,
          (const struct tagTPTELEMTIMINGS *)&gTPTelemTimings,
          PerformanceCounter.QuadPart,
          hProvider);
        if ( v5 < 500 && dword_1C0321C20 || v7 < 500 && dword_1C0321C24 )
          TraceLoggingPTPKeyToAATimeDeltas(v5, v7, 1000 * (PerformanceCounter.QuadPart - v3) / (__int64)hProvider);
        memset(&gTPTelemTimings, 0, 0x50uLL);
        dword_1C0321C48 = -1;
      }
    }
    v8 = &qword_1C0323A80;
  }
  else
  {
    v8 = &qword_1C0323A88;
  }
  _InterlockedExchange64(v8, PerformanceCounter.QuadPart);
}

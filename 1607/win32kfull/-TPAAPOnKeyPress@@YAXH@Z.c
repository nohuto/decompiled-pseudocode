/*
 * XREFs of ?TPAAPOnKeyPress@@YAXH@Z @ 0x1C01E86D0
 * Callers:
 *     ?TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z @ 0x1C01301F0 (-TPAAPOnKeyEvent@@YAXQEAUtagKE@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C021E5B8 (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C021E6C8 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 */

void __fastcall TPAAPOnKeyPress(int a1)
{
  LARGE_INTEGER v2; // rsi
  __int64 v3; // rdi
  signed __int64 v4; // rax
  __int64 v5; // rbp
  LONGLONG v6; // rax
  __int64 v7; // rbx
  signed __int64 v8; // r14
  volatile __int64 *v9; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = _InterlockedCompareExchange64(&qword_1C0329118, 0LL, 0LL);
  v4 = _InterlockedCompareExchange64(&qword_1C0326CE8, 0LL, 0LL);
  if ( a1 )
  {
    if ( v3 > 0 && v4 > v3 )
    {
      v5 = 1000 * (v4 - v3) / PerformanceFrequency.QuadPart;
      v6 = 1000
         * (v2.QuadPart - _InterlockedCompareExchange64(&qword_1C0326D00, 0LL, 0LL))
         / PerformanceFrequency.QuadPart;
      v7 = v6;
      if ( !qword_1C0326CF8 )
        dword_1C0326D0C = dword_1C0326D08;
      if ( v5 < 500 || v6 < 500 )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&gTPTelemTimings, 0LL, 0LL);
        TraceLoggingPTPKeyToGestureTiming(
          qword_1C0329110,
          v3,
          (const struct tagTPTELEMTIMINGS *)&gTPTelemTimings,
          v2.QuadPart,
          (LPCGUID)PerformanceFrequency.QuadPart);
        if ( v5 < 500 && dword_1C0326D08 || v7 < 500 && dword_1C0326D0C )
          TraceLoggingPTPKeyToAATimeDeltas(
            1000 * (v8 - v3) / PerformanceFrequency.QuadPart,
            v5,
            v7,
            1000 * (v2.QuadPart - v3) / PerformanceFrequency.QuadPart,
            dword_1C0326D08,
            dword_1C0326D0C);
        memset(&gTPTelemTimings, 0, 0x58uLL);
        dword_1C0326D30 = -1;
      }
    }
    v9 = &qword_1C0329110;
  }
  else
  {
    v9 = &qword_1C0329118;
  }
  _InterlockedExchange64(v9, v2.QuadPart);
}

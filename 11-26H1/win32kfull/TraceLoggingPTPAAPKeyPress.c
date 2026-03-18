/*
 * XREFs of TraceLoggingPTPAAPKeyPress @ 0x1401F4620
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x14026B678 (-TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z.c)
 *     ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x140295194 (-TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

signed __int64 __fastcall TraceLoggingPTPAAPKeyPress(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 UserSessionState; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  volatile signed __int64 *v7; // rdi
  LARGE_INTEGER v8; // r14
  __int64 v9; // rsi
  signed __int64 result; // rax
  LONGLONG v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  signed __int64 v14; // r15
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = W32GetUserSessionState(v5, v4);
  PerformanceFrequency.QuadPart = 0LL;
  v7 = (volatile signed __int64 *)(v6 + 12224);
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(UserSessionState + 16736), 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 12232), 0LL, 0LL);
  if ( v2 && v9 > 0 && result > v9 )
  {
    v11 = v8.QuadPart - _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 12256), 0LL, 0LL);
    v12 = 1000 * (result - v9) / PerformanceFrequency.QuadPart;
    v13 = 1000 * v11 / PerformanceFrequency.QuadPart;
    if ( !*(_QWORD *)(v6 + 12248) )
      *(_DWORD *)(v6 + 12268) = *(_DWORD *)(v6 + 12264);
    result = 500LL;
    if ( v13 < 500 || v12 < 500 )
    {
      v14 = _InterlockedCompareExchange64(v7, 0LL, 0LL);
      TraceLoggingPTPKeyToGestureTiming(
        *(_QWORD *)(UserSessionState + 16728),
        v9,
        (const struct tagTPTELEMTIMINGS *)v7,
        v8.QuadPart,
        PerformanceFrequency.QuadPart);
      if ( v12 < 500 && *(_DWORD *)(v6 + 12264) || v13 < 500 && *(_DWORD *)(v6 + 12268) )
        TraceLoggingPTPKeyToAATimeDeltas(
          1000 * (v14 - v9) / PerformanceFrequency.QuadPart,
          v12,
          v13,
          1000 * (v8.QuadPart - v9) / PerformanceFrequency.QuadPart,
          *(_DWORD *)(v6 + 12264),
          *(_DWORD *)(v6 + 12268));
      result = (signed __int64)memset_0((void *)(v6 + 12224), 0, 0x50uLL);
      *(_DWORD *)(v6 + 12304) = -1;
    }
  }
  return result;
}

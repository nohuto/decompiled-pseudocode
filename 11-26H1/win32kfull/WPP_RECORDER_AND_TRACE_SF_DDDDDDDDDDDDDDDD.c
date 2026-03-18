/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD @ 0x1402C956C
 * Callers:
 *     ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402C8FF4 (-TraceTopology@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_DDDDDDDDDDDDDDDD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24)
{
  __int64 result; // rax
  int v27; // [rsp+28h] [rbp-190h]

  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
               25LL,
               &a9,
               4LL,
               &a10,
               4LL,
               &a11,
               4LL,
               &a12,
               4LL,
               &a13,
               4LL,
               &a14,
               4LL,
               &a15,
               4LL,
               &a16,
               4LL,
               &a17,
               4LL,
               &a18,
               4LL,
               &a19,
               4LL,
               &a20,
               4LL,
               &a21,
               4LL,
               &a22,
               4LL,
               &a23,
               4LL,
               &a24,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v27) = 25;
    return WppAutoLogTrace(
             a4,
             5LL,
             7LL,
             &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
             v27,
             &a9,
             4LL,
             &a10,
             4LL,
             &a11,
             4LL,
             &a12);
  }
  return result;
}

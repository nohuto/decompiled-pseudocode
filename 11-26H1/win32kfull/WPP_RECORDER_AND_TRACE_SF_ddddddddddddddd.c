/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd @ 0x1402F2D5C
 * Callers:
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd(
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
        char a23)
{
  __int64 result; // rax
  int v26; // [rsp+28h] [rbp-180h]

  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_050a6281044d36281c2688598113f136_Traceguids,
               15LL,
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
               0LL);
  if ( a3 )
  {
    LOWORD(v26) = 15;
    return WppAutoLogTrace(
             a4,
             5LL,
             9LL,
             &WPP_050a6281044d36281c2688598113f136_Traceguids,
             v26,
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

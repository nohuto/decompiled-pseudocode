/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd @ 0x1402F5FB4
 * Callers:
 *     CalcSBStuff2 @ 0x14019156C (CalcSBStuff2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
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
               &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
               23LL,
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
    LOWORD(v27) = 23;
    return WppAutoLogTrace(
             a4,
             5LL,
             9LL,
             &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
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

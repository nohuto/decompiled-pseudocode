/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1401BA098
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1401948F0 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
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
        char a22)
{
  _UNKNOWN **result; // rax
  int v25; // [rsp+28h] [rbp-170h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp-68h] BYREF

  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                            25LL,
                            &a9,
                            8LL,
                            &a10,
                            8LL,
                            &a11,
                            4LL,
                            &a12,
                            8LL,
                            &a13,
                            8LL,
                            &a14,
                            8LL,
                            &a15,
                            4LL,
                            &a16,
                            8LL,
                            &a17,
                            8LL,
                            &a18,
                            4LL,
                            &a19,
                            8LL,
                            &a20,
                            8LL,
                            &a21,
                            8LL,
                            &a22,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v25) = 25;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          18LL,
                          &WPP_572cbfa18a19310ead456f8b2e061444_Traceguids,
                          v25,
                          &a9,
                          8LL,
                          &a10,
                          8LL,
                          &a11,
                          4LL,
                          &a12,
                          8LL,
                          &a13,
                          8LL,
                          &a14);
  }
  return result;
}

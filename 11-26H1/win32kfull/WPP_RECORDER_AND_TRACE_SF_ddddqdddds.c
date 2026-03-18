/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x1401BC728
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
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
        const char *a18)
{
  _UNKNOWN **result; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  const char *v26; // rax
  int v27; // [rsp+28h] [rbp-A9h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v19 = (__int64)a18;
  v20 = -1LL;
  if ( a2 )
  {
    if ( a18 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a18[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a18;
    if ( !a18 )
      v26 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                            29LL,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            8LL,
                            &a14,
                            4LL,
                            &a15,
                            4LL,
                            &a16,
                            4LL,
                            &a17,
                            4LL,
                            v26,
                            v25,
                            0LL);
  }
  if ( a3 )
  {
    if ( v19 )
    {
      do
        ++v20;
      while ( *(_BYTE *)(v19 + v20) );
    }
    LOWORD(v27) = 29;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          21LL,
                          &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                          v27,
                          &a9,
                          4LL,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12,
                          4LL,
                          &a13,
                          8LL,
                          &a14);
  }
  return result;
}

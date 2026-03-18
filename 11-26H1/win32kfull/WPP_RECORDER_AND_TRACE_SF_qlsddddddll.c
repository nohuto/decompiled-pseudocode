/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qlsddddddll @ 0x1402F72C4
 * Callers:
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qlsddddddll(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+148h] [rbp+67h] BYREF
  va_list va; // [rsp+148h] [rbp+67h]
  __int64 v23; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+150h] [rbp+6Fh]
  const char *v25; // [rsp+158h] [rbp+77h]
  __int64 v26; // [rsp+160h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+160h] [rbp+7Fh]
  __int64 v28; // [rsp+168h] [rbp+87h] BYREF
  va_list va3; // [rsp+168h] [rbp+87h]
  __int64 v30; // [rsp+170h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+170h] [rbp+8Fh]
  __int64 v32; // [rsp+178h] [rbp+97h] BYREF
  va_list va5; // [rsp+178h] [rbp+97h]
  __int64 v34; // [rsp+180h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+180h] [rbp+9Fh]
  __int64 v36; // [rsp+188h] [rbp+A7h] BYREF
  va_list va7; // [rsp+188h] [rbp+A7h]
  __int64 v38; // [rsp+190h] [rbp+AFh] BYREF
  va_list va8; // [rsp+190h] [rbp+AFh]
  va_list va9; // [rsp+198h] [rbp+B7h] BYREF

  va_start(va9, a8);
  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v34 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v36 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v38 = va_arg(va9, _QWORD);
  result = &retaddr;
  v9 = v25;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v25[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v25;
    if ( !v25 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            42LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            v17,
                            v16,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            (__int64 *)va8,
                            4LL,
                            va9,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v18 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v14 = v10 + 1;
      v18 = v9 == 0LL;
    }
    if ( v18 )
      v9 = "NULL";
    LOWORD(v19) = 42;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v19,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          v9,
                          v14,
                          (__int64 *)va2);
  }
  return result;
}

/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqsdl @ 0x1402F76C8
 * Callers:
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqsdl(
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
  int v19; // [rsp+20h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int64 v21; // [rsp+E0h] [rbp+48h] BYREF
  va_list va; // [rsp+E0h] [rbp+48h]
  __int64 v23; // [rsp+E8h] [rbp+50h] BYREF
  va_list va1; // [rsp+E8h] [rbp+50h]
  const char *v25; // [rsp+F0h] [rbp+58h]
  __int64 v26; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  va_list va3; // [rsp+100h] [rbp+68h] BYREF

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
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            36LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            v17,
                            v16,
                            (__int64 *)va2,
                            4LL,
                            va3,
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
    LOWORD(v19) = 36;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v19,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          v9,
                          v14,
                          (__int64 *)va2);
  }
  return result;
}

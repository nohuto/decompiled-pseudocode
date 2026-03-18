/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x1400A8520
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sqddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v24; // [rsp+118h] [rbp+77h] BYREF
  va_list va1; // [rsp+118h] [rbp+77h]
  __int64 v26; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+7Fh]
  __int64 v28; // [rsp+128h] [rbp+87h] BYREF
  va_list va3; // [rsp+128h] [rbp+87h]
  __int64 v30; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+130h] [rbp+8Fh]
  va_list va5; // [rsp+138h] [rbp+97h] BYREF

  va_start(va5, a9);
  va_start(va4, a9);
  va_start(va3, a9);
  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v15 = 5LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                            22LL,
                            v19,
                            v18,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            va5,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v16 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v15 = v11 + 1;
      v16 = a9 == 0LL;
    }
    if ( v16 )
      v10 = "NULL";
    LOWORD(v20) = 22;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          21LL,
                          &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                          v20,
                          v10,
                          v15,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          4LL,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4);
  }
  return result;
}

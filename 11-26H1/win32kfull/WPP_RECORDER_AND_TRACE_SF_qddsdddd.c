/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddsdddd @ 0x14018DB8C
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x14018E024 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qddsdddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+28h] [rbp-89h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v23; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+6Fh]
  __int64 v25; // [rsp+128h] [rbp+77h] BYREF
  va_list va2; // [rsp+128h] [rbp+77h]
  const char *v27; // [rsp+130h] [rbp+7Fh]
  __int64 v28; // [rsp+138h] [rbp+87h] BYREF
  va_list va3; // [rsp+138h] [rbp+87h]
  __int64 v30; // [rsp+140h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+8Fh]
  __int64 v32; // [rsp+148h] [rbp+97h] BYREF
  va_list va5; // [rsp+148h] [rbp+97h]
  va_list va6; // [rsp+150h] [rbp+9Fh] BYREF

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
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  v27 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  result = &retaddr;
  v9 = v27;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( v27 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v27[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = v27;
    if ( !v27 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                            12LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            v18,
                            v17,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            va6,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v15 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v14 = v10 + 1;
      v15 = v9 == 0LL;
    }
    if ( v15 )
      v9 = "NULL";
    LOWORD(v19) = 12;
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
                          (__int64 *)va2,
                          4LL,
                          v9,
                          v14,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4);
  }
  return result;
}

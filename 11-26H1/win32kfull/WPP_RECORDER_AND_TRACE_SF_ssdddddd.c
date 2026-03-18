/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x14020C704
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_ssdddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        const char *a10,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v11; // rbx
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  int v24; // [rsp+28h] [rbp-89h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+128h] [rbp+77h] BYREF
  va_list va; // [rsp+128h] [rbp+77h]
  __int64 v28; // [rsp+130h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+7Fh]
  __int64 v30; // [rsp+138h] [rbp+87h] BYREF
  va_list va2; // [rsp+138h] [rbp+87h]
  va_list va3; // [rsp+140h] [rbp+8Fh] BYREF

  va_start(va3, a10);
  va_start(va2, a10);
  va_start(va1, a10);
  va_start(va, a10);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  result = &retaddr;
  v11 = a10;
  v12 = -1LL;
  v13 = a9;
  v17 = 5LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
    }
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
    }
    WORD1(v23) = WORD1(a9);
    if ( !a9 )
      v23 = "NULL";
    HIWORD(v24) = WORD1(v23);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    if ( !a10 )
      v11 = "NULL";
    v20 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v12;
      while ( a9[v12] );
      v17 = v12 + 1;
      v20 = a9 == 0LL;
    }
    if ( v20 )
      v13 = "NULL";
    LOWORD(v24) = 40;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                          v24,
                          v13,
                          v17,
                          v11,
                          v19,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          4LL,
                          va3);
  }
  return result;
}

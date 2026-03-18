/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqd @ 0x14026CA7C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sqd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rdi
  int v19; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v21 = va_arg(va1, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            a8,
                            a7,
                            v17,
                            v16,
                            (__int64 *)va,
                            8LL,
                            va1,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v18 = v11 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v19) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(a4, 5LL, 7LL, a8, v19, v10, v18, (__int64 *)va, 8LL, va1, 4LL, 0LL);
  }
  return result;
}

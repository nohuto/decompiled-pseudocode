/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1402DB0C8
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qsdddd(
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
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rdi
  int v18; // [rsp+20h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+48h] BYREF
  va_list va; // [rsp+E0h] [rbp+48h]
  const char *v22; // [rsp+E8h] [rbp+50h]
  __int64 v23; // [rsp+F0h] [rbp+58h] BYREF
  va_list va1; // [rsp+F0h] [rbp+58h]
  __int64 v25; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  __int64 v27; // [rsp+100h] [rbp+68h] BYREF
  va_list va3; // [rsp+100h] [rbp+68h]
  va_list va4; // [rsp+108h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  result = &retaddr;
  v9 = v22;
  v10 = -1LL;
  if ( a2 )
  {
    if ( v22 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v22[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v22;
    if ( !v22 )
      v16 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                            17LL,
                            (__int64 *)va,
                            8LL,
                            v16,
                            v15,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            va4,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v17 = v10 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v18) = 17;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          5LL,
                          21LL,
                          &WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                          v18,
                          (__int64 *)va,
                          8LL,
                          v9,
                          v17,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}

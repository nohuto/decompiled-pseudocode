/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqs @ 0x1402E11C8
 * Callers:
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402DE6F4 (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sqs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        char a10,
        const char *a11)
{
  _UNKNOWN **result; // rax
  const char *v12; // rbx
  const char *v13; // rsi
  __int64 v14; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r8
  const char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  int v28; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a11;
  v13 = a9;
  v14 = -1LL;
  v18 = 5LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a9;
    if ( !a9 )
      v24 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                            141LL,
                            v24,
                            v23,
                            &a10,
                            8LL,
                            v21,
                            v20,
                            0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( v12[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !v12 )
      v12 = "NULL";
    v27 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v14;
      while ( a9[v14] );
      v18 = v14 + 1;
      v27 = a9 == 0LL;
    }
    if ( v27 )
      v13 = "NULL";
    LOWORD(v28) = 141;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                          v28,
                          v13,
                          v18,
                          &a10,
                          8LL,
                          v12,
                          v26,
                          0LL);
  }
  return result;
}

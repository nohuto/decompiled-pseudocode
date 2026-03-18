/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sddddd @ 0x1402EE470
 * Callers:
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sddddd(
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
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  bool v19; // zf
  int v20; // [rsp+20h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  __int64 v22; // [rsp+F8h] [rbp+50h] BYREF
  va_list va; // [rsp+F8h] [rbp+50h]
  __int64 v24; // [rsp+100h] [rbp+58h] BYREF
  va_list va1; // [rsp+100h] [rbp+58h]
  __int64 v26; // [rsp+108h] [rbp+60h] BYREF
  va_list va2; // [rsp+108h] [rbp+60h]
  __int64 v28; // [rsp+110h] [rbp+68h] BYREF
  va_list va3; // [rsp+110h] [rbp+68h]
  va_list va4; // [rsp+118h] [rbp+70h] BYREF

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
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v15 = 5LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                            145LL,
                            v18,
                            v17,
                            (__int64 *)va,
                            4LL,
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
    v19 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v15 = v11 + 1;
      v19 = a9 == 0LL;
    }
    if ( v19 )
      v10 = "NULL";
    LOWORD(v20) = 145;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
                          v20,
                          v10,
                          v15,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}

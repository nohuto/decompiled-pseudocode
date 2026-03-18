/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x14018F6F4
 * Callers:
 *     xxxGetScrollBarInfo @ 0x14018ED28 (xxxGetScrollBarInfo.c)
 *     GetWndScrollBarInfoCrossProcess @ 0x140256448 (GetWndScrollBarInfoCrossProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qsllll(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
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
  int v19; // [rsp+20h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  __int64 v21; // [rsp+F0h] [rbp+48h] BYREF
  va_list va; // [rsp+F0h] [rbp+48h]
  const char *v23; // [rsp+F8h] [rbp+50h]
  __int64 v24; // [rsp+100h] [rbp+58h] BYREF
  va_list va1; // [rsp+100h] [rbp+58h]
  __int64 v26; // [rsp+108h] [rbp+60h] BYREF
  va_list va2; // [rsp+108h] [rbp+60h]
  __int64 v28; // [rsp+110h] [rbp+68h] BYREF
  va_list va3; // [rsp+110h] [rbp+68h]
  va_list va4; // [rsp+118h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  result = &retaddr;
  v9 = v23;
  v10 = -1LL;
  v14 = 5LL;
  if ( a2 )
  {
    if ( v23 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v23[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = v23;
    if ( !v23 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            a8,
                            a7,
                            (__int64 *)va,
                            8LL,
                            v18,
                            v17,
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
    LOWORD(v19) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          a8,
                          v19,
                          (__int64 *)va,
                          8LL,
                          v9,
                          v14,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          4LL,
                          (__int64 *)va3,
                          4LL,
                          va4);
  }
  return result;
}

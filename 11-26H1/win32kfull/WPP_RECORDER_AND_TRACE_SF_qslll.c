/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qslll @ 0x1401DA704
 * Callers:
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qslll(
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
  const char *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rsi
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+E0h] [rbp+48h] BYREF
  va_list va; // [rsp+E0h] [rbp+48h]
  const char *v21; // [rsp+E8h] [rbp+50h]
  __int64 v22; // [rsp+F0h] [rbp+58h] BYREF
  va_list va1; // [rsp+F0h] [rbp+58h]
  __int64 v24; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  va_list va3; // [rsp+100h] [rbp+68h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v8 = v21;
  v9 = -1LL;
  v13 = 5LL;
  if ( a2 )
  {
    if ( v21 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v21[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v21;
    if ( !v21 )
      v17 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids,
      10LL,
      (__int64 *)va,
      8LL,
      v17,
      v16,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      va3,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v14 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v13 = v9 + 1;
      v14 = v8 == 0LL;
    }
    if ( v14 )
      v8 = "NULL";
    LOWORD(v18) = 10;
    WppAutoLogTrace(
      a4,
      4LL,
      9LL,
      &WPP_4c358395f58a3c1ed8fe148dd469427a_Traceguids,
      v18,
      (__int64 *)va,
      8LL,
      v8,
      v13,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      va3,
      4LL,
      0LL);
  }
}

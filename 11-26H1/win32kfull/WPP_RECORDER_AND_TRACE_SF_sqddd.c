/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqddd @ 0x1402D1198
 * Callers:
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402D0DB8 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_sqddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  const char *v9; // rbx
  __int64 v10; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+E8h] [rbp+50h] BYREF
  va_list va; // [rsp+E8h] [rbp+50h]
  __int64 v22; // [rsp+F0h] [rbp+58h] BYREF
  va_list va1; // [rsp+F0h] [rbp+58h]
  __int64 v24; // [rsp+F8h] [rbp+60h] BYREF
  va_list va2; // [rsp+F8h] [rbp+60h]
  va_list va3; // [rsp+100h] [rbp+68h] BYREF

  va_start(va3, a9);
  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v9 = a9;
  v10 = -1LL;
  v14 = 5LL;
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
    ((void (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_51d1a7bb52fb381b0bc4cc3ca2c02820_Traceguids,
      10LL,
      v17,
      v16,
      (__int64 *)va,
      8LL,
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
    v18 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = v10 + 1;
      v18 = a9 == 0LL;
    }
    if ( v18 )
      v9 = "NULL";
    LOWORD(v19) = 10;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_51d1a7bb52fb381b0bc4cc3ca2c02820_Traceguids,
      v19,
      v9,
      v14,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2);
  }
}

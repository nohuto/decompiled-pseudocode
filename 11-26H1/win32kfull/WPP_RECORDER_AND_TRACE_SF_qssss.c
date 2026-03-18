/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qssss @ 0x1402E0F20
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qssss(
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
  __int64 v8; // rdi
  __int64 v9; // rbx
  const char *v10; // rbp
  const char *v12; // r14
  __int64 v13; // r10
  const char *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  va_list v25; // [rsp+20h] [rbp-A8h]
  __int64 v27; // [rsp+110h] [rbp+48h] BYREF
  va_list va; // [rsp+110h] [rbp+48h]
  const char *v29; // [rsp+118h] [rbp+50h]
  const char *v30; // [rsp+120h] [rbp+58h]
  const char *v31; // [rsp+128h] [rbp+60h]
  __int64 v32; // [rsp+130h] [rbp+68h]
  va_list va1; // [rsp+138h] [rbp+70h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, const char *);
  v30 = va_arg(va1, const char *);
  v31 = va_arg(va1, const char *);
  v32 = va_arg(va1, _QWORD);
  v8 = v32;
  v9 = -1LL;
  v10 = v31;
  v12 = v30;
  v13 = a4;
  v14 = v29;
  v15 = 5LL;
  if ( a2 )
  {
    if ( v32 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(v32 + v16) );
    }
    if ( v31 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( v31[v17] );
    }
    if ( v30 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v30[v18] );
    }
    if ( v29 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v29[v19] );
    }
    va_copy(v25, va);
    ((void (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    v13 = a4;
  }
  if ( a3 )
  {
    if ( v8 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(v8 + v20) );
    }
    if ( v10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v10[v21] );
    }
    if ( !v10 )
      v10 = "NULL";
    if ( v12 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v12[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    if ( !v12 )
      v12 = "NULL";
    v24 = v14 == 0LL;
    if ( v14 )
    {
      do
        ++v9;
      while ( v14[v9] );
      v15 = v9 + 1;
      v24 = v14 == 0LL;
    }
    if ( v24 )
      v14 = "NULL";
    LOWORD(v25) = 30;
    WppAutoLogTrace(
      v13,
      3LL,
      7LL,
      &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      (_DWORD)v25,
      (__int64 *)va,
      8LL,
      v14,
      v15,
      v12,
      v23,
      v10);
  }
}

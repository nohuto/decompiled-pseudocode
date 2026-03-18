/*
 * XREFs of WPP_RECORDER_SF_LsLLqss @ 0x1C0058E80
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  const char *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v17; // r14
  __int64 v18; // r9
  __int64 v19; // r9
  const char *v20; // r11
  __int64 v21; // r8
  __int64 v22; // r8
  const char *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rcx
  const char *v26; // rdx
  __int64 v27; // rcx
  const char *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  const char *v31; // rdx
  __int64 v32; // rbx
  int v34; // [rsp+20h] [rbp-98h]

  v12 = "NULL";
  v13 = (__int64)a12;
  v14 = -1LL;
  v15 = (__int64)a11;
  v17 = (__int64)a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a12[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = "NULL";
    if ( a12 )
      v20 = a12;
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = "NULL";
    if ( a11 )
      v23 = a11;
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = "NULL";
    if ( a7 )
      v26 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      21LL,
      &a6,
      4LL,
      v26,
      v25,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_BYTE *)(v13 + v27) );
  }
  v28 = "NULL";
  if ( v13 )
    v28 = (const char *)v13;
  if ( v15 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_BYTE *)(v15 + v29) );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  v31 = "NULL";
  if ( v15 )
    v31 = (const char *)v15;
  if ( v17 )
  {
    do
      ++v14;
    while ( *(_BYTE *)(v17 + v14) );
    v32 = v14 + 1;
  }
  else
  {
    v32 = 5LL;
  }
  if ( v17 )
    v12 = (const char *)v17;
  LOWORD(v34) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           17LL,
           &WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
           v34,
           &a6,
           4LL,
           v12,
           v32,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v31,
           v30,
           v28);
}

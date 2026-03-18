/*
 * XREFs of WPP_RECORDER_SF_qsdLqss @ 0x1C0004724
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080960 (ACPIBusIrpQueryId.c)
 *     ACPIDockIrpQueryID @ 0x1C00987C0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
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
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  const char *v25; // rdx
  __int64 v26; // rbx
  __int64 v28; // r9
  __int64 v29; // r9
  const char *v30; // r11
  __int64 v31; // r8
  __int64 v32; // r8
  const char *v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rcx
  const char *v36; // rdx
  int v37; // [rsp+20h] [rbp-A8h]

  v12 = "NULL";
  v13 = (__int64)a12;
  v15 = (__int64)a11;
  v16 = (__int64)a7;
  v17 = -1LL;
  v19 = a1;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a12 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a12[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = "NULL";
    if ( a12 )
      v30 = a12;
    if ( a11 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a11[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 5LL;
    }
    v33 = "NULL";
    if ( a11 )
      v33 = a11;
    if ( a7 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( a7[v34] );
      v35 = v34 + 1;
    }
    else
    {
      v35 = 5LL;
    }
    v36 = "NULL";
    if ( a7 )
      v36 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v36,
      v35,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v33,
      v32,
      v30,
      v29,
      0LL);
    v19 = a1;
  }
  if ( v13 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v13 + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  v22 = "NULL";
  if ( v13 )
    v22 = (const char *)v13;
  if ( v15 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v15 + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  v25 = "NULL";
  if ( v15 )
    v25 = (const char *)v15;
  if ( v16 )
  {
    do
      ++v17;
    while ( *(_BYTE *)(v16 + v17) );
    v26 = v17 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( v16 )
    v12 = (const char *)v16;
  LOWORD(v37) = a4;
  return WppAutoLogTrace(
           v19,
           a2,
           5LL,
           a5,
           v37,
           &a6,
           8LL,
           v12,
           v26,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v25,
           v24,
           v22,
           v21,
           0LL);
}

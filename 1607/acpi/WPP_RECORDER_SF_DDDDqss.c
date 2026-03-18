/*
 * XREFs of WPP_RECORDER_SF_DDDDqss @ 0x1C00565B8
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDDDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  const char *v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rbx
  int v27; // [rsp+20h] [rbp-98h]

  v12 = "NULL";
  v13 = (__int64)a12;
  v14 = (__int64)a11;
  v15 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = "NULL";
    if ( a12 )
      v19 = a12;
    if ( a11 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a11[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = "NULL";
    if ( a11 )
      v22 = a11;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v13 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v13 + v23) );
  }
  v24 = "NULL";
  if ( v13 )
    v24 = (const char *)v13;
  if ( v14 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v14 + v15) );
    v25 = v15 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( v14 )
    v12 = (const char *)v14;
  LOWORD(v27) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           15LL,
           &WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
           v27,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           4LL,
           &a10,
           8LL,
           v12,
           v25,
           v24);
}

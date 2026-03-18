/*
 * XREFs of WPP_RECORDER_SF_sqqDqss @ 0x1C0004FFC
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0004ED0 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0043D80 (ACPIBuildDiscoverDeviceCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
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
  __int64 v18; // rcx
  const char *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rdx
  __int64 v23; // rbx
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // r11
  __int64 v28; // r8
  __int64 v29; // r8
  const char *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rcx
  const char *v33; // rdx
  int v34; // [rsp+20h] [rbp-A8h]

  v12 = "NULL";
  v13 = (__int64)a12;
  v14 = (__int64)a11;
  v15 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a12[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = "NULL";
    if ( a12 )
      v27 = a12;
    if ( a11 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a11[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = "NULL";
    if ( a11 )
      v30 = a11;
    if ( a6 )
    {
      v31 = -1LL;
      do
        ++v31;
      while ( a6[v31] );
      v32 = v31 + 1;
    }
    else
    {
      v32 = 5LL;
    }
    v33 = "NULL";
    if ( a6 )
      v33 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v33,
      v32,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v30,
      v29,
      v27,
      v26,
      0LL);
  }
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v13 + v18) );
  }
  v19 = "NULL";
  if ( v13 )
    v19 = (const char *)v13;
  if ( v14 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v14 + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  v22 = "NULL";
  if ( v14 )
    v22 = (const char *)v14;
  if ( a6 )
  {
    do
      ++v15;
    while ( a6[v15] );
    v23 = v15 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( a6 )
    v12 = a6;
  LOWORD(v34) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, a5, v34, v12, v23, &a7, 8LL, &a8, 8LL, &a9, 4LL, &a10, 8LL, v22, v21, v19);
}

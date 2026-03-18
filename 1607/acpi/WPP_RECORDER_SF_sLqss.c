/*
 * XREFs of WPP_RECORDER_SF_sLqss @ 0x1C0045D98
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C00285EC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0043B48 (ACPIBuildDeviceResetPowerNode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  const char *v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v16; // r9
  __int64 v17; // r9
  const char *v18; // r11
  __int64 v19; // r8
  __int64 v20; // r8
  const char *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  const char *v30; // rdx
  __int64 v31; // rbx
  int v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-28h]
  __int64 v35; // [rsp+88h] [rbp-20h]

  v10 = "NULL";
  v11 = a10;
  v12 = -1LL;
  v13 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = "NULL";
    if ( a10 )
      v18 = a10;
    if ( a9 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = "NULL";
    if ( a9 )
      v21 = a9;
    if ( a6 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a6[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = "NULL";
    if ( a6 )
      v24 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      a4,
      v24,
      v23,
      &a7,
      4LL,
      &a8,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  v27 = "NULL";
  if ( v11 )
    v27 = v11;
  if ( v13 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v13[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  v30 = "NULL";
  if ( v13 )
    v30 = v13;
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v31 = v12 + 1;
  }
  else
  {
    v31 = 5LL;
  }
  if ( a6 )
    v10 = a6;
  LOWORD(v33) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           10LL,
           &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
           v33,
           v10,
           v31,
           &a7,
           4LL,
           &a8,
           8LL,
           v30,
           v29,
           v27,
           v26,
           0LL,
           v34,
           v35);
}

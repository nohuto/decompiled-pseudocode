/*
 * XREFs of WPP_RECORDER_SF_ddqss @ 0x1C00552D8
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000A650 (ACPIProcessorStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  const char *v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rbx
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+80h] [rbp-18h]
  __int64 v28; // [rsp+88h] [rbp-10h]

  v10 = "NULL";
  v11 = a10;
  v12 = a9;
  v13 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = "NULL";
    if ( a10 )
      v17 = a10;
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = "NULL";
    if ( a9 )
      v20 = a9;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2a74c23e51f033d915f3b15bc307c942_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  v23 = "NULL";
  if ( v11 )
    v23 = v11;
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
    v24 = v13 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( v12 )
    v10 = v12;
  LOWORD(v26) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_2a74c23e51f033d915f3b15bc307c942_Traceguids,
           v26,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v10,
           v24,
           v23,
           v22,
           0LL,
           v27,
           v28);
}

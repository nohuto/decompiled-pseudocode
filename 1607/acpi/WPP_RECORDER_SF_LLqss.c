/*
 * XREFs of WPP_RECORDER_SF_LLqss @ 0x1C0012410
 * Callers:
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C0011410 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C0044940 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C0045050 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LLqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rsi
  __int64 v12; // rbx
  const char *v13; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // r9
  int v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+80h] [rbp-18h]
  __int64 v28; // [rsp+88h] [rbp-10h]

  v10 = a10;
  v12 = -1LL;
  v13 = a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
      v22 = a10;
    }
    else
    {
      v21 = 5LL;
      v22 = "NULL";
    }
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v24 = v23 + 1;
      v25 = a9;
    }
    else
    {
      v24 = 5LL;
      v25 = "NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v25,
      v24,
      v22,
      v21,
      0LL);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v10[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
    v10 = "NULL";
  }
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v18 = v12 + 1;
  }
  else
  {
    v18 = 5LL;
    v13 = "NULL";
  }
  LOWORD(v26) = a4;
  return WppAutoLogTrace(
           a1,
           a2,
           6LL,
           &WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
           v26,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           v13,
           v18,
           v10,
           v17,
           0LL,
           v27,
           v28);
}

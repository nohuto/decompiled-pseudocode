/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x1C00128D0
 * Callers:
 *     ACPIIsPowerRequestBlocked @ 0x1C000E2C4 (ACPIIsPowerRequestBlocked.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0012650 (ACPIDevicePowerProcessGenericPhase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        const char *a12,
        const char *a13)
{
  __int64 v13; // rbx
  const char *v14; // rsi
  const char *v16; // rbp
  const char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r9
  __int64 v23; // r9
  const char *v24; // r14
  __int64 v25; // r8
  __int64 v26; // r8
  const char *v27; // r11
  __int64 v28; // rdx
  __int64 v29; // rdx
  const char *v30; // r10
  int v31; // [rsp+20h] [rbp-B8h]
  _DWORD v32[4]; // [rsp+B0h] [rbp-28h] BYREF

  v13 = -1LL;
  v14 = a13;
  v16 = a12;
  v17 = a7;
  v32[0] = AcpiPowerCurrentPagingPathTransitions;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a13[v22] );
      v23 = v22 + 1;
      v24 = a13;
    }
    else
    {
      v23 = 5LL;
      v24 = "NULL";
    }
    if ( a12 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a12[v25] );
      v26 = v25 + 1;
      v27 = a12;
    }
    else
    {
      v26 = 5LL;
      v27 = "NULL";
    }
    if ( a7 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a7[v28] );
      v29 = v28 + 1;
      v30 = a7;
    }
    else
    {
      v29 = 5LL;
      v30 = "NULL";
    }
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, _DWORD *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      47LL,
      &a6,
      8LL,
      v30,
      v29,
      &a8,
      4LL,
      &a9,
      4LL,
      v32,
      4LL,
      &a11,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
  }
  if ( v14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v14[v18] );
  }
  if ( v16 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v16[v19] );
  }
  else
  {
    v16 = "NULL";
  }
  if ( v17 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v20 = v13 + 1;
  }
  else
  {
    v20 = 5LL;
    v17 = "NULL";
  }
  LOWORD(v31) = 47;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
           v31,
           &a6,
           8LL,
           v17,
           v20,
           &a8,
           4LL,
           &a9,
           4LL,
           v32,
           4LL,
           &a11,
           8LL,
           v16);
}

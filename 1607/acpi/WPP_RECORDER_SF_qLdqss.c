/*
 * XREFs of WPP_RECORDER_SF_qLdqss @ 0x1C0010524
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0010000 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0029600 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0029ED0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbp
  __int64 v12; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // rax
  int v28; // [rsp+20h] [rbp-88h]

  v11 = "NULL";
  v12 = (__int64)a11;
  v14 = (__int64)a10;
  v15 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a11[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = "NULL";
    if ( a11 )
      v24 = a11;
    if ( a10 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a10[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = "NULL";
    if ( a10 )
      v27 = a10;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
  }
  if ( v12 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v12 + v17) );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  v19 = "NULL";
  if ( v12 )
    v19 = (const char *)v12;
  if ( v14 )
  {
    do
      ++v15;
    while ( *(_BYTE *)(v14 + v15) );
    v20 = v15 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( v14 )
    v11 = (const char *)v14;
  LOWORD(v28) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
           v28,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v11,
           v20,
           v19,
           v18,
           0LL);
}

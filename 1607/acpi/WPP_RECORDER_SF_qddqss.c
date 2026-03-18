/*
 * XREFs of WPP_RECORDER_SF_qddqss @ 0x1C0059130
 * Callers:
 *     ACPIWakeWaitIrp @ 0x1C0028850 (ACPIWakeWaitIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qddqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rbp
  const char *v12; // rdi
  const char *v14; // rsi
  __int64 v15; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  const char *v25; // rcx
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-88h]

  v11 = "NULL";
  v12 = a11;
  v14 = a10;
  v15 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = "NULL";
    if ( a11 )
      v19 = a11;
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = "NULL";
    if ( a10 )
      v22 = a10;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v12 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v12[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  v25 = "NULL";
  if ( v12 )
    v25 = v12;
  if ( v14 )
  {
    do
      ++v15;
    while ( v14[v15] );
    v26 = v15 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( v14 )
    v11 = v14;
  LOWORD(v28) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           17LL,
           &WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
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
           v26,
           v25,
           v24,
           0LL);
}

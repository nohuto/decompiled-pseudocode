/*
 * XREFs of WPP_RECORDER_SF_qqDqss @ 0x1C004C40C
 * Callers:
 *     ACPIDeferredWakeCompletion @ 0x1C004C000 (ACPIDeferredWakeCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v13; // rbx
  const char *v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // rcx
  __int64 v25; // rbx
  int v27; // [rsp+20h] [rbp-88h]

  v11 = "NULL";
  v12 = a11;
  v13 = -1LL;
  v14 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = "NULL";
    if ( a11 )
      v18 = a11;
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = "NULL";
    if ( a10 )
      v21 = a10;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f0fe160f89a6365bbdf73264e71c5878_Traceguids,
      19LL,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v12[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  v24 = "NULL";
  if ( v12 )
    v24 = v12;
  if ( v14 )
  {
    do
      ++v13;
    while ( v14[v13] );
    v25 = v13 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( v14 )
    v11 = v14;
  LOWORD(v27) = 19;
  return WppAutoLogTrace(
           a1,
           2LL,
           10LL,
           &WPP_f0fe160f89a6365bbdf73264e71c5878_Traceguids,
           v27,
           &a6,
           8LL,
           &a7,
           8LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v11,
           v25,
           v24,
           v23,
           0LL);
}

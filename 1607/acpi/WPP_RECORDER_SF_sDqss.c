/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x1C004EA00
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1C009C120 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v15; // r9
  __int64 v16; // r9
  const char *v17; // r11
  __int64 v18; // r8
  __int64 v19; // r8
  const char *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  const char *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  const char *v29; // rdx
  __int64 v30; // rbx
  int v32; // [rsp+20h] [rbp-78h]
  __int64 v33; // [rsp+80h] [rbp-18h]
  __int64 v34; // [rsp+88h] [rbp-10h]

  v10 = "NULL";
  v11 = (__int64)a10;
  v12 = -1LL;
  v13 = (__int64)a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    if ( a6 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a6[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = "NULL";
    if ( a6 )
      v23 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
      29LL,
      v23,
      v22,
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
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v11 + v24) );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  v26 = "NULL";
  if ( v11 )
    v26 = (const char *)v11;
  if ( v13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_BYTE *)(v13 + v27) );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  v29 = "NULL";
  if ( v13 )
    v29 = (const char *)v13;
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v30 = v12 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  if ( a6 )
    v10 = a6;
  LOWORD(v32) = 29;
  return WppAutoLogTrace(
           a1,
           4LL,
           12LL,
           &WPP_83145842ab9239296fde859baf12ff2d_Traceguids,
           v32,
           v10,
           v30,
           &a7,
           4LL,
           &a8,
           8LL,
           v29,
           v28,
           v26,
           v25,
           0LL,
           v33,
           v34);
}

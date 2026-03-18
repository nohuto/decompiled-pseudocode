/*
 * XREFs of WPP_RECORDER_SF_DLqss @ 0x1C0056814
 * Callers:
 *     ACPISystemPowerProcessRootMapping @ 0x1C008F970 (ACPISystemPowerProcessRootMapping.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
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
  v11 = (__int64)a10;
  v12 = -1LL;
  v13 = (__int64)a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
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
      &WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
      16LL,
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
    while ( *(_BYTE *)(v11 + v21) );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  v23 = "NULL";
  if ( v11 )
    v23 = (const char *)v11;
  if ( v13 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v13 + v12) );
    v24 = v12 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( v13 )
    v10 = (const char *)v13;
  LOWORD(v26) = 16;
  return WppAutoLogTrace(
           a1,
           2LL,
           15LL,
           &WPP_5927a840c5e5301051fde63ad95bfdaf_Traceguids,
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

/*
 * XREFs of WPP_RECORDER_SF_DDqDss @ 0x1C00221A0
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0089270 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DDqDss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  const char *v26; // rax
  int v27; // [rsp+20h] [rbp-88h]

  v11 = "NULL";
  v12 = (__int64)a11;
  v13 = (__int64)a10;
  v14 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = "NULL";
    if ( a11 )
      v23 = a11;
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = "NULL";
    if ( a10 )
      v26 = a10;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_72c16bcf9880346d3bb9ee911629b0d7_Traceguids,
      11LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      &a9,
      4LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v12 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  v18 = "NULL";
  if ( v12 )
    v18 = (const char *)v12;
  if ( v13 )
  {
    do
      ++v14;
    while ( *(_BYTE *)(v13 + v14) );
    v19 = v14 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( v13 )
    v11 = (const char *)v13;
  LOWORD(v27) = 11;
  return WppAutoLogTrace(
           a1,
           4LL,
           20LL,
           &WPP_72c16bcf9880346d3bb9ee911629b0d7_Traceguids,
           v27,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           8LL,
           &a9,
           4LL,
           v11,
           v19,
           v18,
           v17,
           0LL);
}

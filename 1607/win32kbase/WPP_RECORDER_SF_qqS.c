/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C000A084
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rdi
  const wchar_t *v9; // rsi
  __int64 v11; // rbx
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = L"NULL";
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a8[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = L"NULL";
    if ( a8 )
      v17 = a8;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v17,
      2 * v16,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v11;
    while ( *(_WORD *)(v8 + 2 * v11) );
    v13 = v11 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( v8 )
    v9 = (const wchar_t *)v8;
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           a1,
           3LL,
           5LL,
           &WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
           v18,
           &a6,
           8LL,
           &a7,
           8LL,
           v9,
           2 * v13,
           0LL);
}

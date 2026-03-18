/*
 * XREFs of WPP_RECORDER_SF_dqqs @ 0x1C00229E4
 * Callers:
 *     HUBMISC_WaitForSignal @ 0x1C00267F4 (HUBMISC_WaitForSignal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rdx
  int v16; // [rsp+20h] [rbp-58h]

  v9 = (__int64)a9;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a9[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = "NULL";
    if ( a9 )
      v14 = a9;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      80LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v14,
      v13,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_BYTE *)(v9 + v10) );
  }
  LOWORD(v16) = 80;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids, v16, &a6);
}

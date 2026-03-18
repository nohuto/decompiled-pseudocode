/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402F64D8
 * Callers:
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        const char *a13)
{
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rax
  int v21; // [rsp+20h] [rbp-78h]

  v13 = (__int64)a13;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a13 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a13[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a13;
    if ( !a13 )
      v20 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      52LL,
      &a9,
      8LL,
      &a10,
      4LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v14;
      while ( *(_BYTE *)(v13 + v14) );
    }
    LOWORD(v21) = 52;
    WppAutoLogTrace(
      a4,
      4LL,
      9LL,
      &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      4LL,
      &a11,
      4LL,
      &a12);
  }
}

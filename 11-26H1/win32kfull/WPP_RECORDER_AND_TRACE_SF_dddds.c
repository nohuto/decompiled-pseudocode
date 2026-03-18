/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddds @ 0x1402EE2B4
 * Callers:
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x140162230 (_anonymous_namespace_--FitRectToWorkArea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_dddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        const char *a13)
{
  const char *v13; // rbx
  __int64 v14; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rax
  int v21; // [rsp+20h] [rbp-78h]

  v13 = a13;
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
      &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      12LL,
      &a9,
      4LL,
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
      while ( v13[v14] );
    }
    LOWORD(v21) = 12;
    WppAutoLogTrace(
      a4,
      5LL,
      4LL,
      &WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v21,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      &a12);
  }
}

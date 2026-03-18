/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqS @ 0x140224E40
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqS(
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
        const char *a11)
{
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  int v21; // [rsp+20h] [rbp-68h]

  v11 = a11;
  v12 = -1LL;
  v16 = 10LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)&a11[2 * v18] );
      v19 = 2 * v18 + 2;
    }
    else
    {
      v19 = 10LL;
    }
    v20 = a11;
    if ( !a11 )
      v20 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
      18LL,
      &a9,
      8LL,
      &a10,
      8LL,
      v20,
      v19,
      0LL);
  }
  if ( a3 )
  {
    v17 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v12;
      while ( *(_WORD *)&v11[2 * v12] );
      v16 = 2 * v12 + 2;
      v17 = v11 == 0LL;
    }
    if ( v17 )
      v11 = L"NULL";
    LOWORD(v21) = 18;
    WppAutoLogTrace(
      a4,
      4LL,
      8LL,
      &WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
      v21,
      &a9,
      8LL,
      &a10,
      8LL,
      v11,
      v16,
      0LL);
  }
}

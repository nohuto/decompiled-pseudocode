/*
 * XREFs of WPP_SF_dSS @ 0x18000A5E0
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000E5F4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dSS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  const wchar_t *v11; // r8
  const wchar_t *v12; // rcx
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v6 = -1LL;
  if ( a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a6[v8] );
    v9 = v8 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v10 = v6 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  v11 = L"NULL";
  v12 = L"NULL";
  if ( a6 )
    v12 = a6;
  if ( a5 )
    v11 = a5;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
           0x29u,
           &v14,
           4LL,
           v11,
           2 * v10,
           v12,
           2 * v9,
           0LL);
}

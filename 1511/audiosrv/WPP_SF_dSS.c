/*
 * XREFs of WPP_SF_dSS @ 0x1800A1164
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180029280 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
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
  __int64 v6; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  const wchar_t *v12; // r10
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v6 = -1LL;
  v8 = 14LL;
  if ( a6 )
  {
    if ( *a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v9 = 2 * v10 + 2;
    }
    else
    {
      v9 = 14LL;
    }
  }
  else
  {
    v9 = 10LL;
  }
  v11 = L"<NULL>";
  if ( a6 )
  {
    v12 = L"<NULL>";
    if ( *a6 )
      v12 = a6;
  }
  else
  {
    v12 = L"NULL";
  }
  if ( a5 )
  {
    if ( *a5 )
    {
      do
        ++v6;
      while ( a5[v6] );
      v8 = 2 * v6 + 2;
    }
  }
  else
  {
    v8 = 10LL;
  }
  if ( a5 )
  {
    if ( *a5 )
      v11 = a5;
  }
  else
  {
    v11 = L"NULL";
  }
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
           0x28u,
           &v14,
           4LL,
           v11,
           v8,
           v12,
           v9,
           0LL);
}

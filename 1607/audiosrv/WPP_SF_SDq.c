/*
 * XREFs of WPP_SF_SDq @ 0x180084EA4
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001793C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_SDq(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids, 16LL, v7, 2 * v6, va);
}

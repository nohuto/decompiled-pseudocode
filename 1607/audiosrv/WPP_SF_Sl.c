/*
 * XREFs of WPP_SF_Sl @ 0x18005646C
 * Callers:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180055C34 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180055EF8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Sl(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  va_list va; // [rsp+80h] [rbp+28h] BYREF

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
  return EtwTraceMessage(a1, 43LL, &WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids, a2, v7, 2 * v6, va);
}

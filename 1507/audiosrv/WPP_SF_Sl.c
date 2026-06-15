/*
 * XREFs of WPP_SF_Sl @ 0x18006E230
 * Callers:
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x18006D6C8 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18006DAD8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sl(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  const wchar_t *v5; // rax

  if ( a4 && *a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( a4 )
  {
    v5 = L"<NULL>";
    if ( *a4 )
      v5 = a4;
  }
  else
  {
    v5 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, &WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, a2, v5);
}

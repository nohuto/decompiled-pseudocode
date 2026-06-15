/*
 * XREFs of WPP_SF_Si @ 0x180082FF8
 * Callers:
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180082900 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Si(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids, 77LL, v5);
}

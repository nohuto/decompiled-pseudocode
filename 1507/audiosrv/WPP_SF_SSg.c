/*
 * XREFs of WPP_SF_SSg @ 0x18007E96C
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x180018460 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSg(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, _WORD *a5)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  const wchar_t *v8; // rcx

  v5 = -1LL;
  if ( a5 && *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
  }
  v8 = L"<NULL>";
  if ( a4 && *a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
  }
  if ( a4 )
  {
    if ( *a4 )
      v8 = a4;
  }
  else
  {
    v8 = L"NULL";
  }
  return EtwTraceMessage(a1, 43LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, 34LL, v8);
}

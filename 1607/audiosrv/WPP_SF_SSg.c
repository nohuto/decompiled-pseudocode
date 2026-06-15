/*
 * XREFs of WPP_SF_SSg @ 0x1800616AC
 * Callers:
 *     ?SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z @ 0x18000EAD0 (-SetVolume@CServerAudioSessionControl@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSg(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, const wchar_t *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  const wchar_t *v8; // r10
  const wchar_t *v9; // r8
  __int64 v10; // rcx

  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
  }
  v8 = L"NULL";
  v9 = L"NULL";
  if ( a5 )
    v9 = a5;
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v10 = v6 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( a4 )
    v8 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 27LL, v8, 2 * v10, v9);
}

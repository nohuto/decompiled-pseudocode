/*
 * XREFs of ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18008F990
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x180054FD0 (s_sndevtResolveSoundAlias.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18008FB70 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall _GetSoundAlias(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        HKEY hkey,
        unsigned __int16 *a7)
{
  unsigned int Registry; // edi
  const unsigned __int16 *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  const unsigned __int16 *v14; // rax
  int v15; // eax
  DWORD pcbData[4]; // [rsp+40h] [rbp-158h] BYREF
  WCHAR String1[128]; // [rsp+50h] [rbp-148h] BYREF

  if ( !a1 || !a2 || !hkey )
    return 0LL;
  if ( a7 && *a7 )
    *a4 |= 0x80u;
  Registry = 0;
  v11 = (const unsigned __int16 *)&szSystemDefaultSound;
  pcbData[0] = 256;
  if ( lstrcmpW(a1, gszDefaultBeepOldAlias) )
    v11 = a1;
  if ( !RegGetValueW(hkey, gszSchemesRootKey, 0LL, 2u, 0LL, String1, pcbData)
    && !lstrcmpiW(String1, gszNoSoundsSchemeName) )
  {
    *a4 |= 2u;
  }
  if ( v11 )
  {
    v13 = 32LL;
    v14 = v11;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v13;
    }
    while ( v13 );
    v15 = 0;
    v12 = 2147942487LL;
    if ( !v13 )
      v15 = -2147024809;
  }
  else
  {
    v15 = -2147024809;
  }
  if ( !v15
    && (*(char *)a4 >= 0
     || !a7
     || !*a7
     || (Registry = sndQueryRegistry((const unsigned __int16 *)v12, a7, v11, a2, 0x104u, a4, hkey)) == 0) )
  {
    if ( (*a4 & 0x400000) == 0 )
      return (unsigned int)sndQueryRegistry((const unsigned __int16 *)v12, aszDefault, v11, a2, 0x104u, a4, hkey);
    Registry = sndQueryRegistry((const unsigned __int16 *)v12, aszExplorer, v11, a2, 0x104u, a4, hkey);
    if ( !Registry )
      return (unsigned int)sndQueryRegistry((const unsigned __int16 *)v12, aszDefault, v11, a2, 0x104u, a4, hkey);
  }
  return Registry;
}

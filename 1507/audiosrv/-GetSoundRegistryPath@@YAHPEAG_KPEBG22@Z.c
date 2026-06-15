/*
 * XREFs of ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x1800AA758
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800AAA98 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18006C388 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall GetSoundRegistryPath(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *pszSrc)
{
  unsigned int v5; // ebx
  size_t cbDest; // [rsp+48h] [rbp+18h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+50h] [rbp+20h] BYREF

  cbDest = a2;
  v5 = 0;
  pszDest = 0LL;
  if ( (unsigned int)StringCbCopyExW(a1, 0x25CuLL, gszSchemesRootKey, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, gszSchemeAppsKey, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, a4, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, gszSlash, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, pszSrc, &pszDest, &cbDest, 0)
    || (unsigned int)StringCbCopyExW(pszDest, cbDest, gszSlash, &pszDest, &cbDest, 0) )
  {
    return 0LL;
  }
  LOBYTE(v5) = (unsigned int)StringCbCopyExW(pszDest, cbDest, aszCurrent, &pszDest, &cbDest, 0) == 0;
  return v5;
}

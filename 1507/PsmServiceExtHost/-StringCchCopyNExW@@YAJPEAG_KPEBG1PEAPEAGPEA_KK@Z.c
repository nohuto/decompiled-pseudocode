/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004D4E0
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800080B8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     StringCopyWorkerW @ 0x18004D5A8 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyNExW(
        STRSAFE_LPWSTR pszDest,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4)
{
  HRESULT v6; // edi
  unsigned __int64 v8; // rbx
  size_t pcchNewDestLength; // [rsp+50h] [rbp+18h] BYREF

  pcchNewDestLength = (size_t)a3;
  v6 = 0;
  if ( !pszDest && a2 || a2 > 0x7FFFFFFF )
    v6 = -2147024809;
  if ( v6 < 0 )
    goto LABEL_8;
  if ( a4 >= 0x7FFFFFFF )
  {
    v6 = -2147024809;
LABEL_8:
    if ( a2 )
      *pszDest = 0;
    return (unsigned int)v6;
  }
  v6 = 0;
  if ( a2 )
  {
    pcchNewDestLength = 0LL;
    v6 = StringCopyWorkerW(pszDest, a2, &pcchNewDestLength, &pszSrc, 0LL);
    v8 = a2 - pcchNewDestLength;
    if ( v6 >= 0 && v8 > 1 && 2 * v8 > 2 )
      memset_0(&pszDest[pcchNewDestLength + 1], 0, 2 * v8 - 2);
  }
  return (unsigned int)v6;
}

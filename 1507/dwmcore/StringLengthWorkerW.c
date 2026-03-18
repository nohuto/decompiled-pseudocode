/*
 * XREFs of StringLengthWorkerW @ 0x180124EB0
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180124BF0 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180124E1C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // rdx
  HRESULT result; // eax

  v3 = 260LL;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --v3;
  }
  while ( v3 );
  result = 0;
  if ( !v3 )
    result = -2147024809;
  if ( pcchLength )
  {
    if ( result < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = 260 - v3;
  }
  return result;
}

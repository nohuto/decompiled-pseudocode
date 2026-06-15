/*
 * XREFs of StringLengthWorkerW @ 0x1800061CC
 * Callers:
 *     ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18000609C (-StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
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

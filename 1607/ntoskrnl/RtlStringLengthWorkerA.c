/*
 * XREFs of RtlStringLengthWorkerA @ 0x1401B10D4
 * Callers:
 *     RtlStringCbCatExA @ 0x1401B0DB0 (RtlStringCbCatExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // r9
  NTSTATUS result; // eax

  v3 = 256LL;
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
    result = -1073741811;
  if ( pcchLength )
  {
    if ( result < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = 256 - v3;
  }
  return result;
}

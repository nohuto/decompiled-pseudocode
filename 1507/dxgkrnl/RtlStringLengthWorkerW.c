/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C00084A0
 * Callers:
 *     RtlStringCchLengthW @ 0x1C0008474 (RtlStringCchLengthW.c)
 *     RtlStringCbLengthW @ 0x1C000E8B0 (RtlStringCbLengthW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  v3 = cchMax;
  result = 0;
  if ( !cchMax )
    goto LABEL_9;
  do
  {
    if ( !*psz )
      break;
    ++psz;
    --cchMax;
  }
  while ( cchMax );
  if ( !cchMax )
LABEL_9:
    result = -1073741811;
  if ( pcchLength )
  {
    if ( result < 0 )
      *pcchLength = 0LL;
    else
      *pcchLength = v3 - cchMax;
  }
  return result;
}

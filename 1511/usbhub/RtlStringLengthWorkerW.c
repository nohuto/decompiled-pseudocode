/*
 * XREFs of RtlStringLengthWorkerW @ 0x1C0027CA4
 * Callers:
 *     UsbhBuildContainerID @ 0x1C00277DC (UsbhBuildContainerID.c)
 *     RtlStringCbCatW @ 0x1C0027C2C (RtlStringCbCatW.c)
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

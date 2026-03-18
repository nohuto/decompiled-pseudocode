/*
 * XREFs of RtlStringCchLengthA @ 0x1C00E1DD0
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C00E17F4 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C00E1B50 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  __int64 v3; // r9
  NTSTATUS result; // eax

  if ( psz )
  {
    v3 = 2048LL;
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
        *pcchLength = 2048 - v3;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}

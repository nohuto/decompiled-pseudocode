/*
 * XREFs of RtlStringCchLengthA @ 0x1C0034074
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0006480 (ACPIEcInitOpRegionHandler.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C003311C (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0033838 (AcpiDiagTraceDeviceReset.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthA(STRSAFE_PCNZCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    v3 = cchMax;
    result = 0;
    if ( !cchMax )
      goto LABEL_7;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
LABEL_7:
      result = -1073741811;
    if ( pcchLength )
    {
      if ( result < 0 )
        *pcchLength = 0LL;
      else
        *pcchLength = cchMax - v3;
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

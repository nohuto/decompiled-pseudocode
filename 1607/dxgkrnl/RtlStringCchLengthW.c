/*
 * XREFs of RtlStringCchLengthW @ 0x1C000A308
 * Callers:
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C00B613C (DmmAppendCcdConnectedSetForAdapter.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00B917C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00B97A4 (-AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C014F270 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C014F670 (DxgkNetDispStopMiracastDisplayDevice.c)
 *     ?LookupDisplayDiagonal@@YAJPEAK@Z @ 0x1C018CD94 (-LookupDisplayDiagonal@@YAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t v3; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    v3 = cchMax;
    result = 0;
    if ( !cchMax )
      goto LABEL_12;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
LABEL_12:
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

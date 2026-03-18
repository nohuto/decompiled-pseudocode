/*
 * XREFs of RtlStringCchLengthW @ 0x1C0008474
 * Callers:
 *     ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005F29C (-AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C009A84C (DmmAppendCcdConnectedSetForAdapter.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C00AF6E0 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C012A470 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C012A660 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C012AA10 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C00084A0 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
    result = RtlStringLengthWorkerW(psz, cchMax, pcchLength);
  else
    result = -1073741811;
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}

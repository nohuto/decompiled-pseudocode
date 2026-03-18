/*
 * XREFs of RtlStringCchLengthW @ 0x1C00011C8
 * Callers:
 *     ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005D194 (-AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z @ 0x1C005D208 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEAU_LUID@@IPEAGG1@Z.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C005D394 (DmmAppendCcdConnectedSetForAdapter.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C0130B00 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0130F50 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     sub_1C0001B88 @ 0x1C0001B88 (sub_1C0001B88.c)
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
    result = sub_1C0001B88(psz, cchMax, pcchLength);
  else
    result = -1073741811;
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}

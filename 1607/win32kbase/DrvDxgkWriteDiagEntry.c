/*
 * XREFs of DrvDxgkWriteDiagEntry @ 0x1C0064A40
 * Callers:
 *     PowerDimUndimResend @ 0x1C005DAB4 (PowerDimUndimResend.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0061850 (xxxUserChangeDisplaySettings.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C006277C (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvLogDiagDisplayChange @ 0x1C00629A0 (DrvLogDiagDisplayChange.c)
 *     LogDiagSDC @ 0x1C0064918 (LogDiagSDC.c)
 *     PowerUnDimMonitor @ 0x1C0070410 (PowerUnDimMonitor.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00882D0 (DrvDxgkLogCodePointPacket.c)
 *     PowerDimMonitor @ 0x1C00B2EF0 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

__int64 DrvDxgkWriteDiagEntry()
{
  return ((__int64 (*)(void))qword_1C011B4F8)();
}

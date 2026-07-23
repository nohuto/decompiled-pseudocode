/*
 * XREFs of PnpTraceStartDevice @ 0x1400AECD4
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400083A0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1403EFF98 (PnpStartDeviceNode.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400AED24 (PnpDiagnosticTraceDeviceOperation.c)
 */

__int64 __fastcall PnpTraceStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 MinorImageVersion; // ax

  LOBYTE(MinorImageVersion) = 0;
  if ( a3 )
    MinorImageVersion = RtlImageNtHeader(*(PVOID *)(a3 + 24))->OptionalHeader.MinorImageVersion;
  PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceStart_Stop, MinorImageVersion);
  return 0LL;
}

/*
 * XREFs of _TlgKeywordOn @ 0x140016124
 * Callers:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140007E90 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000D930 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400120C4 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ @ 0x140015E90 (-LogTelemetry@CCrossProcessEndpointGlitchValues@CCrossProcessEndpointTraceLogger@@UEAAXXZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140026350 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?ReportHang@CWatchdogTimer@@AEAAXXZ @ 0x14002B130 (-ReportHang@CWatchdogTimer@@AEAAXXZ.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  BOOLEAN v2; // r8

  v2 = 0;
  if ( !keyword
    || (keyword & *((_QWORD *)hProvider + 2)) != 0
    && (keyword & *((_QWORD *)hProvider + 3)) == *((_QWORD *)hProvider + 3) )
  {
    return 1;
  }
  return v2;
}

/*
 * XREFs of _TlgCreateWsz @ 0x180079604
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18003D370 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18003D6C0 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180078350 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180078968 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180078B00 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180079200 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180079FA0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007E940 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_1800A3CB0;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}

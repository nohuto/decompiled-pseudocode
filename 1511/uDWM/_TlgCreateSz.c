/*
 * XREFs of _TlgCreateSz @ 0x1800783F0
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x18000FD84 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000FF70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180076E90 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800776BC (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180077854 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180077F90 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180078E80 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007DD60 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)&word_1800A54C4;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}

/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C0023468
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x1C003A750 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  WPP_RECORDER_SF_q(a1[10], 1u, 0xCu, 0x73u, (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids, a1[3]);
  Controller_HwVerifierBreakIfEnabled(
    (_QWORD *)*a1,
    a1[1],
    a1[3],
    1024LL,
    "Stop Endpoint command repeatedly failed with context state error",
    0LL,
    0LL);
  Controller_ReportFatalError(*a1, 2, 4100, a1[2], (__int64)a1, 0LL);
}

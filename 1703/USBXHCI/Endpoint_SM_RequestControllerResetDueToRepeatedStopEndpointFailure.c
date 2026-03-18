/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001FDD4
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x1C0037E90 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  WPP_RECORDER_SF_q(a1[10], 1u, 0xCu, 0x74u, (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids, a1[3]);
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

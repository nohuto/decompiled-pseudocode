/*
 * XREFs of Template_q @ 0x1C00A9CC8
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C0018D40 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C0070AC0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C0070AD0 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00A7360 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00A73F0 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00A7510 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00A75D0 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00A7B30 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00A7B60 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00A7BF0 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00A7C20 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00A7CF8 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00A8010 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00A8220 (EtwTraceTouchPadTypeDiscovered.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_q(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  v5.Ptr = (ULONGLONG)&v6;
  v5.Reserved = 0;
  v5.Size = 4;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 1u, &v5);
}

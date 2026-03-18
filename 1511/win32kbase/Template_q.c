/*
 * XREFs of Template_q @ 0x1C00AE174
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C007BF60 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C0085790 (EtwTraceWinlogonSleepStartEvent.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00857A0 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceContactVisualizationInfo @ 0x1C00AB8D0 (EtwTraceContactVisualizationInfo.c)
 *     EtwTraceConvertibleState @ 0x1C00AB960 (EtwTraceConvertibleState.c)
 *     EtwTraceDockState @ 0x1C00ABA80 (EtwTraceDockState.c)
 *     EtwTraceEdgyDetectionStop @ 0x1C00ABB40 (EtwTraceEdgyDetectionStop.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00AC0A0 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00AC0D0 (EtwTracePointerDeviceTransformationStop.c)
 *     EtwTracePointerPredictionStart @ 0x1C00AC160 (EtwTracePointerPredictionStart.c)
 *     EtwTracePointerPredictionStop @ 0x1C00AC190 (EtwTracePointerPredictionStop.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC268 (EtwTraceScreenSaverProcessEvent.c)
 *     EtwTraceTouchPadConfidenceUpped @ 0x1C00AC530 (EtwTraceTouchPadConfidenceUpped.c)
 *     EtwTraceTouchPadTypeDiscovered @ 0x1C00AC740 (EtwTraceTouchPadTypeDiscovered.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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

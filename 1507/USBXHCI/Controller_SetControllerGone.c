/*
 * XREFs of Controller_SetControllerGone @ 0x1C0015AC0
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001000 (Controller_WdfEvtTimerFunction.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0002AA0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002CD0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0002F70 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0003330 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0004300 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00128A0 (Command_WdfEvtTimerFunction.c)
 *     Controller_DisableController @ 0x1C0014C50 (Controller_DisableController.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  int v4; // edx
  int v5; // r8d

  if ( a2 && !*(_BYTE *)(a1 + 285) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xBEu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      64LL,
      "A register read returned all FFs. Controller is considered physically removed",
      0LL,
      0LL);
  }
  *(_BYTE *)(a1 + 285) = 1;
  if ( a2 )
  {
    v4 = 16;
    v5 = 0;
  }
  else
  {
    v4 = 8;
    v5 = 4109;
  }
  Controller_ReportFatalError(a1, v4, v5, 0LL, 0LL, 0LL);
}

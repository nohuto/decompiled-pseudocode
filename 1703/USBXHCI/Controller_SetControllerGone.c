/*
 * XREFs of Controller_SetControllerGone @ 0x1C001B9FC
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001EA0 (Controller_WdfEvtTimerFunction.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005290 (Controller_WdfEvtDeviceD0Entry.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006590 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00067C0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006A70 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0007010 (RootHub_UcxEvtSetPortFeature.c)
 *     Command_WdfEvtTimerFunction @ 0x1C00185C0 (Command_WdfEvtTimerFunction.c)
 *     Controller_DisableController @ 0x1C001AAB0 (Controller_DisableController.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  if ( a2 && !*(_BYTE *)(a1 + 293) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xC3u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0,
      0,
      64LL,
      "A register read returned all FFs. Controller is considered physically removed",
      0LL,
      0LL);
  }
  *(_BYTE *)(a1 + 293) = 1;
  Controller_ReportFatalError(a1, a2 != 0 ? 16 : 8, a2 == 0 ? 0x100D : 0, 0LL, 0LL, 0LL);
}

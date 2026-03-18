/*
 * XREFs of Controller_SetControllerGone @ 0x1C001F5F0
 * Callers:
 *     Controller_WdfEvtTimerFunction @ 0x1C0001D70 (Controller_WdfEvtTimerFunction.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0005DA0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0006050 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0006280 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C0006640 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0006D00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 *     Controller_DisableController @ 0x1C001E700 (Controller_DisableController.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(__int64 a1, char a2)
{
  int v4; // edx
  int v5; // r8d

  if ( a2 && !*(_BYTE *)(a1 + 293) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0xC3u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
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

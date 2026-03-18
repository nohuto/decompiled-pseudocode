/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C000F448
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C000D10C (RIMEndAllActiveContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00D1040 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCD98 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C000D380 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimReclaimHoldingFrame @ 0x1C00DA25C (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *HoldingFrame; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    51,
    (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
  HoldingFrame = rimFindHoldingFrame(a1, v2);
  if ( HoldingFrame && *((_DWORD *)HoldingFrame + 4) )
  {
    rimReclaimHoldingFrame(v6, v5, HoldingFrame);
    RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  LOBYTE(v5) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v5,
           4,
           52,
           (__int64)&WPP_78a64dcc5b853b2843b47d669f9809ae_Traceguids);
}

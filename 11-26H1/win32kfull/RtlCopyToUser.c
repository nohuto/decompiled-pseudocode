/*
 * XREFs of RtlCopyToUser @ 0x1403E20B8
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserScrollWindowEx @ 0x14003E4E0 (NtUserScrollWindowEx.c)
 *     ?GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z @ 0x1400936DC (-GRID_CopyHidData@@YAIQEAUtagHIDDATA@@IREAXPEAI@Z.c)
 *     NtUserChangeWindowMessageFilterEx @ 0x14012A3A0 (NtUserChangeWindowMessageFilterEx.c)
 *     NtUserBeginPaint @ 0x14012A670 (NtUserBeginPaint.c)
 *     NtUserSetClassLongPtr @ 0x140151C30 (NtUserSetClassLongPtr.c)
 *     NtUserGetDesktopID @ 0x1401A1D70 (NtUserGetDesktopID.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtUserTransformRect @ 0x1401BC410 (NtUserTransformRect.c)
 *     NtUserUnregisterClass @ 0x1401C4010 (NtUserUnregisterClass.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x1401D12CC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 *     NtGdiGetMonitorID @ 0x1401D6DA0 (NtGdiGetMonitorID.c)
 *     NtUserMagGetContextInformation @ 0x1401EA3F0 (NtUserMagGetContextInformation.c)
 *     NtUserGetCurrentDpiInfoForWindow @ 0x1401EDCA0 (NtUserGetCurrentDpiInfoForWindow.c)
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1402034A0 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserGetMenuItemRect @ 0x14020D500 (NtUserGetMenuItemRect.c)
 *     NtUserBuildHwndList @ 0x14020DC00 (NtUserBuildHwndList.c)
 *     NtGdiGetPhysicalMonitorDescription @ 0x1402217F0 (NtGdiGetPhysicalMonitorDescription.c)
 *     NtUserGetClipboardMetadata @ 0x140225E90 (NtUserGetClipboardMetadata.c)
 *     NtUserGetGestureInfo @ 0x140249740 (NtUserGetGestureInfo.c)
 *     NtUserGetPointerDeviceRects @ 0x1402505B0 (NtUserGetPointerDeviceRects.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1402539A0 (PointerInfoCopyOutHelperInternal.c)
 *     ??$Write@UtagRECT@@@?$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z @ 0x1402574C8 (--$Write@UtagRECT@@@-$UserModePointer@UtagRECT@@@@QEAAXAEBUtagRECT@@@Z.c)
 *     _BuildNameList @ 0x140259840 (_BuildNameList.c)
 *     NtUserConsoleControl @ 0x14025F390 (NtUserConsoleControl.c)
 *     ??$Write@UtagINPUT_TRANSFORM@@@?$UserModePointer@UtagINPUT_TRANSFORM@@@@QEAAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x1402AD908 (--$Write@UtagINPUT_TRANSFORM@@@-$UserModePointer@UtagINPUT_TRANSFORM@@@@QEAAXAEBUtagINPUT_TRANSF.c)
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1402B3A80 (NtUserGetInteractiveControlDeviceInfo.c)
 *     NtUserGetInteractiveControlInfo @ 0x1402B3B80 (NtUserGetInteractiveControlInfo.c)
 *     NtUserGetLatestInputMessageData @ 0x1402B3E10 (NtUserGetLatestInputMessageData.c)
 *     NtUserGetProcessUIContextInformation @ 0x1402B4550 (NtUserGetProcessUIContextInformation.c)
 *     NtUserMNDragOver @ 0x1402B7DC0 (NtUserMNDragOver.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     NtGdiDdDDIGetPresentQueueEvent @ 0x140348CB0 (NtGdiDdDDIGetPresentQueueEvent.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     RtlCopyToUser$thunk$8481748130428616498 @ 0x140357020 (RtlCopyToUser$thunk$8481748130428616498.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead_0(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}

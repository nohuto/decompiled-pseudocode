/*
 * XREFs of RtlCopyVolatileMemory @ 0x14034FD00
 * Callers:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z @ 0x1401D12CC (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPECUtagINPUT_TRANSFORM@@D@Z.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     NtUserGetCurrentInputMessageSource @ 0x14021E140 (NtUserGetCurrentInputMessageSource.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1402539A0 (PointerInfoCopyOutHelperInternal.c)
 *     NtUserGetPointerDeviceProperties @ 0x14025C260 (NtUserGetPointerDeviceProperties.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x140282A84 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x140282D40 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x140291EA0 (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     xxxWrapSendMessageBSM @ 0x1402A1BF0 (xxxWrapSendMessageBSM.c)
 *     NtUserGetCIMSSM @ 0x1402B2450 (NtUserGetCIMSSM.c)
 *     NtUserGetWindowPlacement @ 0x1402B57C0 (NtUserGetWindowPlacement.c)
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1402B9220 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserSendInput @ 0x1402BB4D0 (NtUserSendInput.c)
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A334 (-CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A3A8 (-CopyToUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlCopyToUserFromUser @ 0x1403E211C (RtlCopyToUserFromUser.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlCopyVolatileMemory(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}

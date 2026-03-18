/*
 * XREFs of RtlWriteULong64ToUser @ 0x1403E2324
 * Callers:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     NtUserDdeInitialize @ 0x1400844A0 (NtUserDdeInitialize.c)
 *     _BuildPropList @ 0x1401565B8 (_BuildPropList.c)
 *     ?xxxGetCursorPos@@YAHV?$UserModePointer@UtagPOINT@@@@K@Z @ 0x1401AB780 (-xxxGetCursorPos@@YAHV-$UserModePointer@UtagPOINT@@@@K@Z.c)
 *     NtUserTransformPoint @ 0x1401BC2B0 (NtUserTransformPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1401F1000 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1401F1120 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1401F6750 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserGetCaretPos @ 0x140203420 (NtUserGetCaretPos.c)
 *     NtUserGetOemBitmapSize @ 0x1402349D0 (NtUserGetOemBitmapSize.c)
 *     NtUserGetImeHotKey @ 0x1402373D0 (NtUserGetImeHotKey.c)
 *     NtUserGetClipboardAccessToken @ 0x14023A750 (NtUserGetClipboardAccessToken.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x14025F020 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x140266CC0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IV?$UserModePointer@PEAUHIMC__@@@@@Z @ 0x1402A103C (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IV-$UserModePointer@PEAUHIMC__@@@@@Z.c)
 *     NtUserAcquireIAMKey @ 0x1402AF360 (NtUserAcquireIAMKey.c)
 *     NtUserGetDCompositionHwndBitmap @ 0x1402B32D0 (NtUserGetDCompositionHwndBitmap.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1402B4750 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1402B7C20 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1402B8E30 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1402B8FD0 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 *     RtlWriteULong64ToUser$thunk$4480820996488585629 @ 0x1403570A0 (RtlWriteULong64ToUser$thunk$4480820996488585629.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 */

void __fastcall RtlWriteULong64ToUser(_QWORD *a1, __int64 a2)
{
  ProbeForRead_0(a1, 8uLL, 1u);
  *a1 = a2;
}

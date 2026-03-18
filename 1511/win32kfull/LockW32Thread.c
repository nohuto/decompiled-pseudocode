/*
 * XREFs of LockW32Thread @ 0x1C008E0B4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     xxxCancelTracking @ 0x1C0090B88 (xxxCancelTracking.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0098BF4 (xxxImmUnloadThreadsLayout.c)
 *     xxxQueryInformationThread @ 0x1C00CE3F8 (xxxQueryInformationThread.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3094 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E36E0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3AC0 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ReferenceW32Thread @ 0x1C008E0DC (ReferenceW32Thread.c)
 */

__int64 __fastcall LockW32Thread(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushW32ThreadLock(a1, a2, (__int64)DereferenceW32Thread);
  if ( a1 )
    return ReferenceW32Thread(a1);
  return result;
}

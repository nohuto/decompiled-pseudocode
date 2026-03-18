/*
 * XREFs of LockW32Thread @ 0x1C00464F8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxCancelTracking @ 0x1C0044D18 (xxxCancelTracking.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxQueryInformationThread @ 0x1C012B334 (xxxQueryInformationThread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C013AF40 (xxxImmUnloadThreadsLayout.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2C04 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3250 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3630 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 * Callees:
 *     ReferenceW32Thread @ 0x1C0046520 (ReferenceW32Thread.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 */

__int64 __fastcall LockW32Thread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PushW32ThreadLock(a1, a2, DereferenceW32Thread);
  if ( a1 )
    return ReferenceW32Thread(a1);
  return result;
}

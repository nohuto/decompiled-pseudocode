/*
 * XREFs of LockW32Thread @ 0x1C009E9CC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C00E7380 (xxxImmUnloadThreadsLayout.c)
 *     xxxCancelTracking @ 0x1C0109250 (xxxCancelTracking.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01D9958 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 * Callees:
 *     ReferenceW32Process @ 0x1C009E9F4 (ReferenceW32Process.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 __fastcall LockW32Thread(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = PushW32ThreadLock(a1, a2, DereferenceW32Thread);
  if ( a1 )
    return ReferenceW32Process(a1);
  return result;
}

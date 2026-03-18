/*
 * XREFs of _GetMessagePos @ 0x1401C790C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSendHelpMessage @ 0x1401C7838 (xxxSendHelpMessage.c)
 *     NtUserGetMessagePos @ 0x1401C78D0 (NtUserGetMessagePos.c)
 *     ?DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z @ 0x1402D0DB8 (-DelegateMoveSizeToShell@@YA_NPEAUtagWND@@I@Z.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402F4100 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetMessagePos(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v2; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = PtiCurrent(a1);
  LODWORD(v5) = *((_DWORD *)v1 + 197);
  v2 = *((unsigned int *)v1 + 198);
  HIDWORD(v5) = *((_DWORD *)v1 + 198);
  if ( *((_DWORD *)v1 + 199) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v2);
    if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(*((_DWORD *)v1 + 199) >> 8)) & 0x1FF) != 0 )
    {
      LogicalToPhysicalDPIPoint(&v5, &v5, *((unsigned int *)v1 + 199), 0LL);
      PhysicalToLogicalDPIPoint(&v5, &v5, CurrentThreadDpiAwarenessContext, 0LL);
    }
  }
  else
  {
    v5 = 0LL;
  }
  return (unsigned __int16)v5 | (WORD2(v5) << 16);
}

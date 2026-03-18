/*
 * XREFs of ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402F43C0
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402F4100 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402F4654 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     xxxSBTrackInit @ 0x1402F8934 (xxxSBTrackInit.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     GetScrollRequestCodeString @ 0x1402F5A28 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqsdl @ 0x1402F76C8 (WPP_RECORDER_AND_TRACE_SF_qqsdl.c)
 */

void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v6; // si
  bool v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  ULONG_PTR BugCheckParameter3[10]; // [rsp+78h] [rbp-50h] BYREF

  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    GetScrollRequestCodeString(a3, a5);
    UserSessionState = W32GetUserSessionState(v9, v8);
    LOBYTE(v11) = v7;
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_qqsdl(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152));
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a2);
  xxxSendMessage(a2, (a5 != 0) + 276);
  xxxWindowEvent(0x800Eu, a2, (a5 != 0) - 6, 0, 1);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}

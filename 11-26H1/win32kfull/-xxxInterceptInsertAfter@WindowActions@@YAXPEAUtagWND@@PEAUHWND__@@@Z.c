/*
 * XREFs of ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402E5838
 * Callers:
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptInsertAfter(WindowActions *this, struct tagWND *a2, HWND a3)
{
  char v5; // di
  bool v6; // si
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11[8]; // [rsp+50h] [rbp-88h] BYREF
  struct tagWND *v12; // [rsp+70h] [rbp-68h]

  v5 = 1;
  v6 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( v6 || v5 )
  {
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      4,
      85,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
      v7,
      (char)a2);
  }
  memset_0(v11, 0, 0x60uLL);
  v11[0] = 8;
  v12 = a2;
  xxxSendMessage(this, 0x346u);
}

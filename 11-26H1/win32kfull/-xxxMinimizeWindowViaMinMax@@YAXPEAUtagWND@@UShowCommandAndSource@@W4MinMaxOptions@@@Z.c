/*
 * XREFs of ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x140164BB4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x140164CE0 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1401D65B4 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1402DC0C4 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall xxxMinimizeWindowViaMinMax(const struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v6; // r14
  struct tagWND *v7; // rdx
  bool v8; // r8
  bool v9; // si
  bool v10; // bp
  char v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx

  v6 = IsArranged(a1);
  xxxMinMaximize(a1, *(unsigned __int8 *)(a2 + 4), a3);
  if ( (a3 & 0x20) != 0 )
  {
    v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_BYTE *)(a2 + 4);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v13) = v10;
      LOBYTE(v14) = v9;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        12,
        14,
        (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
        (char)a1,
        v11);
    }
    LOBYTE(v7) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v7, v8);
  }
  if ( v6 )
    NotifyShell::ArrangementCompleted(a1, -1LL, 2LL);
}

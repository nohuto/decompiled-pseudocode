/*
 * XREFs of _anonymous_namespace_::OnForegroundWindowChanged @ 0x14026D3B8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140271878 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x14029D3F8 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall anonymous_namespace_::OnForegroundWindowChanged(
        GroupedProcessForegroundBoost *a1,
        const struct tagWND *a2)
{
  struct MOVESIZEDATA *v4; // rcx
  __int64 v5; // rbx
  char v6; // bp
  bool v7; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 result; // rax

  v4 = WPP_GLOBAL_Control;
  v5 = 0LL;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 0;
    if ( a2 )
      v8 = *(_QWORD *)a2;
    LOBYTE(v9) = 0;
    if ( a1 )
      v9 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v11) = v7;
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      2,
      12,
      (__int64)&WPP_61362a9b2459338f1ec7c2fc2d4aabae_Traceguids,
      v9,
      v8);
  }
  if ( a1 )
  {
    GroupedProcessForegroundBoost::ApplyDeBoost(a1, a2);
    tagWND::ComputeDominantState(a1);
  }
  if ( a2 )
  {
    GroupedProcessForegroundBoost::ApplyBoost(a2, a2);
    tagWND::ComputeDominantState(a2);
    v5 = *(_QWORD *)a2;
  }
  result = W32GetUserSessionState(v4, a2);
  *(_QWORD *)(*(_QWORD *)(result + 19904) + 7648LL) = v5;
  return result;
}

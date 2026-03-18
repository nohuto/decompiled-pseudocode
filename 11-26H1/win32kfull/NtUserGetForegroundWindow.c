/*
 * XREFs of NtUserGetForegroundWindow @ 0x140244830
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 18928) )
  {
    v3 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18928);
    if ( *(_QWORD *)(v3 + 128) )
    {
      v5 = PtiCurrent(v3);
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 18928) + 128LL) + 24LL);
      if ( *((_QWORD *)v5 + 61) == v3 )
      {
        UserSessionState = W32GetUserSessionState(v3, v8);
        v4 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                          *(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18928) + 128LL),
                          v11);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}

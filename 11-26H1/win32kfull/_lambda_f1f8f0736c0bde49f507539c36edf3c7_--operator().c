/*
 * XREFs of _lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator() @ 0x1402C3C94
 * Callers:
 *     _lambda_f1f8f0736c0bde49f507539c36edf3c7_::_lambda_invoker_cdecl_ @ 0x1402C3B50 (_lambda_f1f8f0736c0bde49f507539c36edf3c7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x140257A58 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 *     ?ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z @ 0x1402DB2F4 (-ArrangementHotKey@NotifyShell@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@_J@Z.c)
 */

__int64 __fastcall lambda_f1f8f0736c0bde49f507539c36edf3c7_::operator()(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928);
    if ( *(_QWORD *)(v8 + 128) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                                 *(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18928)
                                                                                         + 128LL),
                                                                 v10);
      if ( (dword_14036265C[8 * (unsigned int)(a2 - 16)] & 1) != 0 )
        PostEventMessageWindow(CompositeAppFrameWindowOrSelf, 0x11u, a2, 0LL);
      else
        NotifyShell::ArrangementHotKey(0LL, a3);
    }
  }
  return 0LL;
}

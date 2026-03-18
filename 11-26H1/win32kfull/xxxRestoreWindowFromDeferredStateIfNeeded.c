/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x14024AFA0 (NtUserRestoreWindowDpiChanges.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140046530 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  struct tagRECT *v1; // rdi
  unsigned __int16 v3; // si
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 UserSessionState; // rax

  v1 = 0LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v3 )
    return 0LL;
  if ( IsTopLevelWindow((__int64)a1) || !*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren((__int64 *)a1, 0LL, 1);
    v6 = *((_QWORD *)a1 + 5);
    v7 = result;
    if ( v3 == *(_WORD *)(v6 + 284) )
    {
      *((_DWORD *)a1 + 95) &= ~0x40000u;
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      if ( GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41374), 1u) )
        v1 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
      xxxNotifyMonitorChanged(a1, v1, 0LL, v3);
      return v7;
    }
  }
  else
  {
    *((_DWORD *)a1 + 95) &= ~0x40u;
    return 1LL;
  }
  return result;
}

/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1401AC110
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
  v3 = 0;
  v4 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v2 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( *v4 == v6 )
    goto LABEL_7;
  v7 = PsGetCurrentProcessWin32Process(v6);
  v8 = v7;
  if ( v7 )
    v8 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v7 >> 64) & v7;
  if ( (unsigned int)CheckGrantedAccess(*(unsigned int *)(v8 + 672), 2LL) )
  {
LABEL_7:
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904);
    v3 = *(_DWORD *)(v6 + 4984);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v3;
}

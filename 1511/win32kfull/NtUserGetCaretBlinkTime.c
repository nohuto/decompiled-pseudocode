/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C0085850
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00858B4 (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v0);
  v2 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v3 = PsGetCurrentProcessWin32Process(gpepCSRSS),
        v5 = 0,
        (unsigned int)CheckGrantedAccess(*(unsigned int *)(v3 + 656), 2LL)) )
  {
    v4 = gpsi;
    v5 = *(_DWORD *)(gpsi + 4000LL);
  }
  UserSessionSwitchLeaveCrit(v4, v2);
  return v5;
}

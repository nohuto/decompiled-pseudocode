/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C0112540
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 */

__int64 NtUserGetCaretBlinkTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1, v0);
  v3 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v4 = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v6 = 0,
        (unsigned int)CheckGrantedAccess(*(_DWORD *)(v4 + 648), 2u)) )
  {
    v5 = gpsi;
    v6 = *(_DWORD *)(gpsi + 5392LL);
  }
  UserSessionSwitchLeaveCrit(v5, v3);
  return v6;
}

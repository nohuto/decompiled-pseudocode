/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C011E730
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 */

__int64 NtUserGetDoubleClickTime()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ebx

  EnterSharedCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1, v0);
  v3 = gpepCSRSS;
  v4 = gpepCSRSS;
  if ( *CurrentProcessWin32Process == gpepCSRSS
    || (v5 = PsGetCurrentProcessWin32Process(gpepCSRSS, gpepCSRSS),
        v6 = 0,
        (unsigned int)CheckGrantedAccess(*(_DWORD *)(v5 + 648), 2u)) )
  {
    v6 = gdtDblClk;
  }
  UserSessionSwitchLeaveCrit(v3, v4);
  return v6;
}

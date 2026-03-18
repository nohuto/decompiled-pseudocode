/*
 * XREFs of WaitForRitToCompleteLastCommand @ 0x140134004
 * Callers:
 *     WaitForRitDisEngagement @ 0x140133D14 (WaitForRitDisEngagement.c)
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitForRitToCompleteLastCommand(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  v2 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
  {
    v2 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v4);
  do
    v7 = W32GetUserSessionState(v6, v5);
  while ( (unsigned int)ObWaitForSingleObject(*(_QWORD *)(v7 + 18744), 0LL, 0LL, 0LL, 0LL) == 257
       && !PsIsThreadTerminating(KeGetCurrentThread()) );
  result = EnterCrit(1LL, 0LL);
  if ( v2 )
    return EnterMitRitHazardCrit();
  return result;
}

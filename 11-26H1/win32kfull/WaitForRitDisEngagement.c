/*
 * XREFs of WaitForRitDisEngagement @ 0x140133D14
 * Callers:
 *     EditionActivateMitInput @ 0x1402A9E80 (EditionActivateMitInput.c)
 * Callees:
 *     DitTakeOver @ 0x140133C90 (DitTakeOver.c)
 *     WakeRIT @ 0x140133F68 (WakeRIT.c)
 *     WaitForRitToCompleteLastCommand @ 0x140134004 (WaitForRitToCompleteLastCommand.c)
 */

__int64 WaitForRitDisEngagement()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL);
  WaitForRitToCompleteLastCommand();
  if ( !*(_DWORD *)(W32GetUserSessionState(v1, v0) + 18792) )
    return 0LL;
  if ( !(unsigned int)DitTakeOver(v3, v2) )
  {
    *(_DWORD *)(W32GetUserSessionState(v5, v4) + 18792) = 0;
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
    return 0LL;
  }
  WakeRIT(128LL);
  WaitForRitToCompleteLastCommand();
  _InterlockedAnd((volatile signed __int32 *)(W32GetUserSessionState(v8, v7) + 18780), 0xFFFFFFFE);
  _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v10, v9) + 16332), 1);
  return 1LL;
}

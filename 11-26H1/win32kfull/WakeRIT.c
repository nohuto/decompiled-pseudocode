/*
 * XREFs of WakeRIT @ 0x140133F68
 * Callers:
 *     WaitForRitDisEngagement @ 0x140133D14 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x140133DE8 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x140133E70 (EditionInitiateMouseEventProcessing.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 *     WakeRITForShutdown @ 0x14025DD60 (WakeRITForShutdown.c)
 *     WakeRITForConfigSwitch @ 0x14029D380 (WakeRITForConfigSwitch.c)
 *     EditionIVSyncForeground @ 0x14029D9D0 (EditionIVSyncForeground.c)
 *     EditionDeactivateMitInput @ 0x1402A9FC0 (EditionDeactivateMitInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rcx
  signed __int32 v8; // ett
  __int64 v9; // rax

  v2 = a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18728) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    _m_prefetchw((const void *)(UserSessionState + 18740));
    v6 = *(_DWORD *)(UserSessionState + 18740);
    do
    {
      v7 = v2 | v6;
      v8 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(UserSessionState + 18740), v7, v6);
    }
    while ( v8 != v6 );
    if ( (v6 & v2) == 0 )
    {
      v9 = W32GetUserSessionState(v7, UserSessionState);
      KeSetEvent(*(PRKEVENT *)(v9 + 18728), 1, 0);
    }
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(W32GetUserSessionState(v4, v3) + 18736), v2);
    return 0LL;
  }
}

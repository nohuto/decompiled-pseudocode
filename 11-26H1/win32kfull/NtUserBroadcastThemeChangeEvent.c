/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1400925A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(unsigned __int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rdi
  __int64 j; // rbx
  _BYTE v11[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v4 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36400); i; i = *(_QWORD *)(i + 368) )
  {
    for ( j = *(_QWORD *)(i + 328); j; j = *(_QWORD *)(j + 696) )
    {
      if ( *(_DWORD *)(j + 932) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(struct tagQ **)(j + 464), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  if ( v11[0] )
    --*(_DWORD *)(v12 + 28);
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}

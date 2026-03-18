/*
 * XREFs of DestroyWindowStation @ 0x1401FF8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x1401FF96C (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // bl
  __int64 *i; // rdi
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 36) == 1 )
  {
    v6 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2);
    if ( !v6 )
      EnterCrit(1LL, 0LL);
    for ( i = (__int64 *)(W32GetUserSessionState(v5, v4) + 63512); ; i = (__int64 *)(v8 + 8) )
    {
      v8 = *i;
      if ( !*i || v2 == v8 )
        break;
    }
    if ( *i )
    {
      DeferrableUnlockObjectAssignment<tagWINDOWSTATION>(i);
      *i = *(_QWORD *)(v2 + 8);
      *(_QWORD *)(v2 + 8) = 0LL;
    }
    *(_DWORD *)(v2 + 32) |= 0x100u;
    if ( !v6 )
      UserSessionSwitchLeaveCritWithNonPaged();
  }
  return 0LL;
}

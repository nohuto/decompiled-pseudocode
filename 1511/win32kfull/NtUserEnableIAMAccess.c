/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0078330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _EnableIAMThreadAccess @ 0x1C00784CC (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v4 = 0;
  v5 = *(_QWORD **)(gptiCurrent + 408LL);
  v6 = v5[1];
  v7 = *(_QWORD *)(v6 + 168);
  if ( *(_QWORD *)(gptiCurrent + 376LL) == v7 && v7 && *(_QWORD *)(v6 + 160) && v5[35] && a1 == v5[34] )
    v4 = EnableIAMThreadAccess(gptiCurrent, a2);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}

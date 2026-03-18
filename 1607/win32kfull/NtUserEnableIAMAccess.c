/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C00A4B50
 * Callers:
 *     <none>
 * Callees:
 *     _EnableIAMThreadAccess @ 0x1C00A4CEC (_EnableIAMThreadAccess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  int v4; // ebx
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
    UserSetLastError(5LL);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v4;
}

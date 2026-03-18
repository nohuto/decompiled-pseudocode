/*
 * XREFs of NtUserEnableIAMAccess @ 0x1C0082300
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?CheckAcquireIAMPrivilegesCommon@@YAHQEBUtagTHREADINFO@@@Z @ 0x1C008237C (-CheckAcquireIAMPrivilegesCommon@@YAHQEBUtagTHREADINFO@@@Z.c)
 *     _EnableIAMThreadAccess @ 0x1C00823AC (_EnableIAMThreadAccess.c)
 */

__int64 __fastcall NtUserEnableIAMAccess(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(1LL);
  v5 = 0;
  if ( (unsigned int)CheckAcquireIAMPrivilegesCommon(gptiCurrent)
    && (v6 = *(_QWORD *)(v4 + 416), !*(_DWORD *)(v6 + 272))
    && a1 == *(_QWORD *)(v6 + 264) )
  {
    v5 = EnableIAMThreadAccess(v4, a2);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}

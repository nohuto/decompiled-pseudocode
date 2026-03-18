/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C0156230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?CheckAcquireIAMPrivilegesCommon@@YAHQEBUtagTHREADINFO@@@Z @ 0x1C008237C (-CheckAcquireIAMPrivilegesCommon@@YAHQEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 1;
  EnterCrit(1LL);
  v3 = *(_QWORD *)(gptiCurrent + 416LL);
  LOBYTE(v4) = CheckAcquireIAMPrivilegesCommon(gptiCurrent);
  if ( v4 && *(_DWORD *)(v3 + 272) )
  {
    v5 = *(_QWORD *)(v3 + 264);
    ProbeForWrite(Address, 8uLL, 4u);
    *Address = v5;
    *(_DWORD *)(v3 + 272) = 0;
    *(_QWORD *)(v3 + 280) = gptiCurrent;
  }
  else
  {
    v2 = 0;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v2;
}

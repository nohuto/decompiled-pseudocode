/*
 * XREFs of NtUserAcquireIAMKey @ 0x1C01125F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetIAMThreadInfo @ 0x1C01126C0 (SetIAMThreadInfo.c)
 */

__int64 __fastcall NtUserAcquireIAMKey(_QWORD *Address)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v3 + 168);
  v5 = 0;
  if ( v4
    && *(_QWORD *)(v3 + 160)
    && *(_QWORD *)(gptiCurrent + 376LL) == v4
    && !*(_QWORD *)(v2 + 280)
    && *(_DWORD *)(v2 + 264) )
  {
    ProbeForWrite(Address, 8uLL, 4u);
    *Address = *(_QWORD *)(v2 + 272);
    SetIAMThreadInfo(v2, gptiCurrent);
    v5 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}

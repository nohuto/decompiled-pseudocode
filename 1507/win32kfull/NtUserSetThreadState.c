/*
 * XREFs of NtUserSetThreadState @ 0x1C00FFC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx

  v3 = 1;
  EnterCrit(1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    v3 = 0;
    UserSetLastError(-1073741811);
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 392LL);
    v7 = *(_DWORD *)(v6 + 332) ^ a2 & (a1 ^ *(_DWORD *)(v6 + 332));
    *(_DWORD *)(v6 + 332) = v7;
  }
  UserSessionSwitchLeaveCrit(v5, v7);
  return v3;
}

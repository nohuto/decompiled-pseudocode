/*
 * XREFs of NtUserSetThreadState @ 0x1C012E8D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadState(unsigned int a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx

  v4 = 1;
  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFBFFF) != 0 )
  {
    v4 = 0;
    UserSetLastError(3221225485LL);
  }
  else
  {
    v6 = *(_QWORD *)(gptiCurrent + 384LL);
    v7 = *(_DWORD *)(v6 + 340) ^ a2 & (a1 ^ *(_DWORD *)(v6 + 340));
    *(_DWORD *)(v6 + 340) = v7;
  }
  UserSessionSwitchLeaveCrit(v7, v5);
  return v4;
}

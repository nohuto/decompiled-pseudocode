/*
 * XREFs of NtUserGetCursorInfo @ 0x1C0098170
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     _GetCursorInfo @ 0x1C00982F8 (_GetCursorInfo.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCursorInfo(unsigned __int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  v9 = 0uLL;
  v10 = 0LL;
  v2 = EnterSharedCrit(0LL, 1LL);
  v3 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v4 = *(_QWORD *)(v2 + 408)) == 0 || v4 == grpdeskRitInput) )
  {
    GetCursorInfo(&v9);
    v6 = PsGetCurrentProcessWow64Process(v5) != 0 ? 0 : 3;
    if ( (v6 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a1;
    if ( a1 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[23] = v7[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v9;
      *(_QWORD *)(a1 + 16) = v10;
      v3 = 1;
    }
    else
    {
      UserSetLastError(87LL);
    }
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v6, v7);
  return v3;
}

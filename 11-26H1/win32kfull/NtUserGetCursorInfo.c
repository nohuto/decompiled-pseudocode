/*
 * XREFs of NtUserGetCursorInfo @ 0x1401B4790
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1401B48A8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserGetCursorInfo(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v2 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  if ( (unsigned int)CheckWinstaAttributeAccess(2u)
    && ((v5 = v14, !*(_QWORD *)(v14 + 488))
     || *(_QWORD *)(v5 + 488) == *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19176)) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v11);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6);
    ProbeForWrite(a1, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v11;
      a1[2] = v12;
    }
    else
    {
      UserSetLastError(87);
      v2 = 0;
    }
  }
  else
  {
    v2 = 0;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v2;
}

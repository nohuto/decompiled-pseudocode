/*
 * XREFs of NtUserGetGUIThreadInfo @ 0x1401CFB30
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetGUIThreadInfo @ 0x140292988 (_GetGUIThreadInfo.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserGetGUIThreadInfo(unsigned int a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 CurrentProcessWow64Process; // rax
  _OWORD v10[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h]
  __int64 v13; // [rsp+B0h] [rbp+18h] BYREF

  memset_0(v10, 0, 0x48uLL);
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  if ( a1 )
  {
    v6 = PtiFromThreadId(a1);
    if ( !v6 )
    {
      UserSetLastError(87);
      goto LABEL_7;
    }
  }
  else
  {
    v6 = 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4);
  ProbeForWrite(a2, 0x48uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  LODWORD(v10[0]) = *a2;
  LODWORD(v6) = GetGUIThreadInfo(v6, v10);
  if ( (_DWORD)v6 )
  {
    *(_OWORD *)a2 = v10[0];
    *((_OWORD *)a2 + 1) = v10[1];
    *((_OWORD *)a2 + 2) = v10[2];
    *((_OWORD *)a2 + 3) = v10[3];
    *((_QWORD *)a2 + 8) = v11;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v7);
  return (int)v6;
}

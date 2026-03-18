/*
 * XREFs of NtUserGetMouseMovePointsEx @ 0x140210ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _GetMouseMovePointsEx @ 0x140210FEC (_GetMouseMovePointsEx.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtUserGetMouseMovePointsEx(int a1, void *a2, volatile void *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r14
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rcx
  unsigned int MouseMovePoints; // ebx
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-48h] BYREF
  __int64 v24; // [rsp+60h] [rbp-38h]

  v5 = a4;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  v12 = PtiCurrent(v9);
  if ( a1 != 24 || (unsigned int)v5 > 0x40 )
  {
    v13 = 87;
    goto LABEL_7;
  }
  if ( *((_QWORD *)v12 + 61) != *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19176) )
  {
    v13 = 5;
LABEL_7:
    UserSetLastError(v13);
    MouseMovePoints = -1;
    goto LABEL_8;
  }
  v20 = 0LL;
  v21 = 0LL;
  RtlCopyFromUser(&v20, a2, 0x18uLL);
  v23 = v20;
  v24 = v21;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14);
  ProbeForWrite(a3, 24 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
  MouseMovePoints = GetMouseMovePointsEx(&v23, a3, (unsigned int)v5, a5);
LABEL_8:
  UserSessionSwitchLeaveCrit(v17);
  return MouseMovePoints;
}

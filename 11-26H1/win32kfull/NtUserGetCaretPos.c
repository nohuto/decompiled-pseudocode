/*
 * XREFs of NtUserGetCaretPos @ 0x140203420
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserGetCaretPos(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v5 = *(_QWORD *)(*((_QWORD *)PtiCurrent(v2) + 58) + 364LL);
  RtlWriteULong64ToUser(a1, v5);
  UserSessionSwitchLeaveCrit(v3);
  return 1LL;
}

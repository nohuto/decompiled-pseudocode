/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1402B33F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rcx
  int v3; // esi
  unsigned int ULongFromUser; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v3 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v2) + 57) + 904LL);
  ULongFromUser = RtlReadULongFromUser(a1);
  RtlWriteULongToUser(a1, ULongFromUser);
  *a1 = v3;
  UserSessionSwitchLeaveCrit(v5);
  return 1LL;
}

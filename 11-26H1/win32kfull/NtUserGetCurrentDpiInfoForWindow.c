/*
 * XREFs of NtUserGetCurrentDpiInfoForWindow @ 0x1401EDCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    RtlCopyToUser(
      a2,
      (void *)(*(_QWORD *)((*(_WORD *)(*(_QWORD *)(v4 + 40) + 286LL) != 0 ? 8 : 0) + v4 + 288) + 4LL),
      0x60uLL);
    v6 = 1;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}

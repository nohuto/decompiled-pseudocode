/*
 * XREFs of NtUserGetClipboardAccessToken @ 0x14023A750
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

_BOOL8 __fastcall NtUserGetClipboardAccessToken(__int64 a1, ACCESS_MASK a2)
{
  BOOL v4; // edi
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  const struct tagUIPI_INFO *v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  void *Handle; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v14[4]; // [rsp+60h] [rbp-28h] BYREF

  v14[0] = 0x2000;
  v14[1] = -1;
  v14[2] = 0;
  v4 = 0;
  Handle = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v6 = PtiCurrent(v5);
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(*((_QWORD *)v6 + 57) + 864LL),
         (const struct tagUIPI_INFO *)v14,
         v7)
    && (v9 = *(void **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v8) + 61) + 40LL) + 128LL)) != 0LL )
  {
    v4 = ObOpenObjectByPointer(v9, 0, 0LL, a2, (POBJECT_TYPE)SeTokenObjectType, 1, &Handle) >= 0;
    RtlWriteULong64ToUser(a1, Handle);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}

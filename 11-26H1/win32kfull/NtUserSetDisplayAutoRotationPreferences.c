/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1402687D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxRefreshDisplayOrientation @ 0x140235370 (xxxRefreshDisplayOrientation.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x14026883C (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rax
  struct tagPROCESSINFO *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx

  UserSessionSwitchEnterCrit();
  v3 = PtiCurrent(v2);
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87);
    v7 = 0LL;
  }
  else
  {
    v4 = (struct tagPROCESSINFO *)*((_QWORD *)v3 + 57);
    *((_DWORD *)v4 + 226) = a1;
    if ( CRotationMgr::IsActivePpi(v4) )
      xxxRefreshDisplayOrientation(v6, v5);
    v7 = 1LL;
  }
  LeaveCrit(v6);
  return v7;
}

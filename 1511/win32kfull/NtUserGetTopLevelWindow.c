/*
 * XREFs of NtUserGetTopLevelWindow @ 0x1C021BE70
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 */

__int64 __fastcall NtUserGetTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v2;
  if ( v2 && GetTopLevelWindow(v2) )
    v5 = *(_QWORD *)GetTopLevelWindow(v6);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}

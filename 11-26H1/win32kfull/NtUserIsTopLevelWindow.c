/*
 * XREFs of NtUserIsTopLevelWindow @ 0x14004DF60
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserIsTopLevelWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
    v5 = IsTopLevelWindow(v2, v3);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}

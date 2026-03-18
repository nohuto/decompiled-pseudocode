/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C021A2E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  int v5; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(1LL);
  v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  v5 = *(_DWORD *)(v2 + 888);
  v3 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v3 = (_DWORD *)W32UserProbeAddress;
  *v3 = *v3;
  *a1 = v5;
  UserSessionSwitchLeaveCrit(v2, v3);
  return 1LL;
}

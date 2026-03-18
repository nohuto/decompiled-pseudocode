/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C0212E20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  int v8; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4) + 376);
  v8 = *(_DWORD *)(v5 + 864);
  v6 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v6 = (_DWORD *)W32UserProbeAddress;
  *v6 = *v6;
  *a1 = v8;
  UserSessionSwitchLeaveCrit(v5, v6);
  return 1LL;
}

/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x140235370
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxSetActivePpiForMonitor @ 0x14023532C (xxxSetActivePpiForMonitor.c)
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1402687D0 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxRefreshDisplayOrientation(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(UserSessionState + 66064) + 16LL))(*(_QWORD *)(UserSessionState + 66064));
}

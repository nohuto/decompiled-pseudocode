/*
 * XREFs of NtUserSendInteractiveControlHapticsReport @ 0x1402BB900
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1402F1EB4 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall NtUserSendInteractiveControlHapticsReport(unsigned __int16 a1, int a2, __int128 *a3)
{
  BOOL v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  InteractiveControlManager *v9; // rax
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v12, 1LL);
  if ( a2 == 16 )
  {
    ProbeForRead(a3, 0x10uLL, 1u);
    v12 = *a3;
    v9 = InteractiveControlManager::Instance(v8, v7);
    v5 = InteractiveControlManager::SendDeviceHapticsOutput(
           v9,
           a1,
           (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v12) >= 0;
  }
  else
  {
    v5 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}

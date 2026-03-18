/*
 * XREFs of EditionPushExitingAppForegroundPolicy @ 0x140214080
 * Callers:
 *     <none>
 * Callees:
 *     ?TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1402140B4 (-TryRecordParentPidLegacyPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EditionPushExitingAppForegroundPolicy(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CForegroundLaunch::TryRecordParentPidLegacyPolicy(*(CForegroundLaunch **)(UserSessionState + 18912), a1);
}

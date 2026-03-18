/*
 * XREFs of EditionApplyForegroundPolicyStartingApp @ 0x140208A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x140208A94 (-ApplyForegroundPolicy@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall EditionApplyForegroundPolicyStartingApp(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CForegroundLaunch::ApplyForegroundPolicy(*(CForegroundLaunch **)(UserSessionState + 18912), a1);
}

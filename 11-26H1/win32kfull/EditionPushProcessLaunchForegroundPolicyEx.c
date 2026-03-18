/*
 * XREFs of EditionPushProcessLaunchForegroundPolicyEx @ 0x1402AC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x1402AA868 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 */

void __fastcall EditionPushProcessLaunchForegroundPolicyEx(struct _KPROCESS *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CForegroundLaunch::PushForegroundPolicy(*(_QWORD *)(UserSessionState + 18912), a1, a2);
}

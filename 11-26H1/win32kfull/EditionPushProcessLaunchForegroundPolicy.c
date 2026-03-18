/*
 * XREFs of EditionPushProcessLaunchForegroundPolicy @ 0x140245740
 * Callers:
 *     <none>
 * Callees:
 *     ?PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x1402AACDC (-PushForegroundPolicy_Old@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 */

__int64 __fastcall EditionPushProcessLaunchForegroundPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CForegroundLaunch::PushForegroundPolicy_Old(*(_QWORD *)(UserSessionState + 18912), a1, a2, a3);
}

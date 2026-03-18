/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1401DE330
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z @ 0x1401DE368 (-DestroyPhysicalMonitorsOwnedByProcess@CMonitorAPI@@QEAAXPEAX@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1, a2, a3);
  CMonitorAPI::DestroyPhysicalMonitorsOwnedByProcess(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1);
}

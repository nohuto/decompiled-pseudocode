/*
 * XREFs of DestroyPhysicalMonitor @ 0x14028A820
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x14028A858 (-DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DestroyPhysicalMonitor(void *a1, __int64 a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState((_DWORD)a1, a2);
  return CMonitorAPI::DestroyPhysicalMonitor(*(CMonitorAPI **)(*(_QWORD *)(SessionState + 96) + 128LL), a1);
}

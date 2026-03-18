/*
 * XREFs of ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x1C028F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDisableTimers@@YAXK@Z @ 0x1C012B9C0 (-vDisableTimers@@YAXK@Z.c)
 */

void __fastcall vDisableSynchronizeNKAPC(void *a1, void *a2, void *a3)
{
  char v3; // bl

  v3 = (char)a1;
  UserEnterUserCritSec(a1, a2, a3);
  vDisableTimers(v3);
  UserLeaveUserCritSec();
}

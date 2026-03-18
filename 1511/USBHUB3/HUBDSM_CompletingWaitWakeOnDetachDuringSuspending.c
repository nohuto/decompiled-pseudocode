/*
 * XREFs of HUBDSM_CompletingWaitWakeOnDetachDuringSuspending @ 0x1C001B1A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1C0014CA4 (HUBPDO_CompleteWaitWake.c)
 */

__int64 __fastcall HUBDSM_CompletingWaitWakeOnDetachDuringSuspending(__int64 a1)
{
  HUBPDO_CompleteWaitWake(*(_QWORD *)(a1 + 960));
  return 4077LL;
}

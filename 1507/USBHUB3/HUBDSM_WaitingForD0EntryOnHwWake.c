/*
 * XREFs of HUBDSM_WaitingForD0EntryOnHwWake @ 0x1C001A530
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1C0014654 (HUBPDO_CompleteWaitWake.c)
 */

__int64 __fastcall HUBDSM_WaitingForD0EntryOnHwWake(__int64 a1)
{
  HUBPDO_CompleteWaitWake(*(_QWORD *)(a1 + 960));
  return 1000LL;
}

/*
 * XREFs of PopUpdateWatchdogNoWorkersEvent @ 0x14020B780
 * Callers:
 *     PopSetWatchdog @ 0x14020B4CC (PopSetWatchdog.c)
 *     PopWatchdogDpc @ 0x14020B7A4 (PopWatchdogDpc.c)
 *     PopWatchdogWorker @ 0x14020B81C (PopWatchdogWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall PopUpdateWatchdogNoWorkersEvent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(a1 + 21) )
    return KeResetEvent((PRKEVENT)(a1 + 24));
  else
    return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

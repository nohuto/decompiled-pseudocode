/*
 * XREFs of PsGetProcessImageFileName @ 0x1400E7418
 * Callers:
 *     ObCheckRefTraceProcess @ 0x1403E3858 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14060E6D4 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}

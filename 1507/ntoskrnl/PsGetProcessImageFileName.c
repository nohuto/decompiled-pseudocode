/*
 * XREFs of PsGetProcessImageFileName @ 0x140120260
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14046AC74 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1096;
}

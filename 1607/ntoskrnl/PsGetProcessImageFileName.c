/*
 * XREFs of PsGetProcessImageFileName @ 0x1400A5364
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14045F818 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140642AE0 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}

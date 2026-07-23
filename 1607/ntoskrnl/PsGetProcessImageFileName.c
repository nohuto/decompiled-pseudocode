/*
 * XREFs of PsGetProcessImageFileName @ 0x1400A38DC
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14045E6E8 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1104;
}

/*
 * XREFs of KiMachineCheckControl @ 0x140169550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiMachineCheckControl()
{
  return KiDecodeMcaFault();
}

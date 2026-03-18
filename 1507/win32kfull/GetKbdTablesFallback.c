/*
 * XREFs of GetKbdTablesFallback @ 0x1C0157540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN ***__fastcall GetKbdTablesFallback(_QWORD *a1)
{
  _UNKNOWN ***result; // rax

  result = KbdTablesFallback;
  *a1 = KbdTablesFallback;
  return result;
}
